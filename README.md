# Bayecon-Matlab toolkit

This is a **Baye**sian **Econ**ometrics toolkit that is very convenient to use. It has a lot of standard econometrics models:

- Linear Regression
  1. Ordinary Least Squares
  2. Bayesian Linear Regression
  3. Linear Regression(Heterogeneity)
  4. Bayesian IV Linear Regression
- Time Series
  1. Bayesian Unit-Root Test
  2. Principal Component Analysis
  3. Linear Regression(Autocorrelation,MCMC)
  4. Unrestricted BVAR Model
  5. Impulse-Response Analysis
  6. Markov Switching Model
- State Space Model
  1. Unobserved Component Model
  2. Dynamic Common Factor Model
  3. Time-varying Parameter
  4. ARMA-X(Kalman filter)
  5. Stochastic Volatility
- Model: Variable Selection
  1. Absolutely Continuous Spikes prior
  2. Dirac Spike - g prior
- Mixture Normal

This package is appropriate to use in situations where you need to see patterns in data easily and quickly (preliminary analysis).

## Installation

Just download the whole package files and add the path of its folder in Matlab.

## How to use it

Just type

```Matlab
output = bayecon(data)
```

in REPL (or in a script). That's all! When you type it, you will naturally realize how to use it.

Input "data" is a matrix in which each column has observations of a variable. The order of variables is not matter. Bayecon will reorder it as you want.

Output "output" is a struct that contains the results of an analysis.

## Compiling (mex file)

Most models in the package are mex-files. I check that every mex-file model has both \*.mexw64 and \*.mexmaci64. Some models do not have \*.mexw32. So, if you have a different operating system,

1. Compile a new mex file using the corresponding \*.prj file. All mex file model has their prj file that is completed.

2. In the script where the compatibility error occurs, erase "\_mex" from the function name in my script (for example, modify "output=function_name_mex(input)" to "output=function_name(input)")
