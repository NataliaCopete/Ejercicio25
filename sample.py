import matplotlib.pyplot as plt
import numpy as np

datos= np.loadtxt('sample.dat')
y=datos[:]
mu=np.mean(y)
sigma=np.std(y)

gauss=1/(np.sqrt(2*np.pi)*sigma)*np.exp((-(y-mu)**2)/(2*sigma*sigma))

plt.hist(y,normed=True)
plt.scatter(y,gauss)
plt.ylim(0.0,1.0)

plt.savefig('sample.pdf')
