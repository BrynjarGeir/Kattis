from sklearn.model_selection import train_test_split as tts
from tensorflow.keras.utils import to_categorical
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense, Dropout, Flatten, Conv2D, MaxPooling2D, Average, Conv1D
from tensorflow.keras import optimizers as op
from keras import losses
import pandas as pd
import numpy as np
from matplotlib import pyplot as plt

batch_size = 100
num_classes = 10
epochs = 10

img_rows, img_cols = 1, 51

df = pd.read_csv('./data/mnist10_train.csv', header = None)

X, Y = df.iloc[:, :-1], df.iloc[:, -1]


X_train, X_test, Y_train, Y_test = tts(X, Y, test_size = 0.2, random_state = 42)

Y_train = to_categorical(Y_train, num_classes)
Y_test = to_categorical(Y_test, num_classes)

model = Sequential()
model.add(Dense(units = 150, input_dim = X_train.shape[1], activation = 'sigmoid'))
model.add(Dense(10))
model.compile(optimizer = 'Adam', loss = 'categorical_crossentropy', metrics = ['accuracy'])
hist = model.fit(X_train, Y_train, batch_size = batch_size, epochs = epochs, verbose = 1, validation_data = (X_test, Y_test))
model.save('mnistf9.h5')

score = model.evaluate(X_test, Y_test, verbose = 0)
print('Test loss:', score[0])
print('Test accuracy:', score[1])


