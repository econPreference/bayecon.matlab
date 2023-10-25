# bayecon.matlab toolkit

This is a <u>Baye</u>sian <u>Econ</u>ometrics toolkit that is very convenient to use. It has a lot of standard econometrics models:

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
- Variable Selection
  1. Absolutely Continuous Spikes prior
  2. Dirac Spike - g prior
- Mixture Normal

This package is appropriate to use in situations where you need to see patterns in data easily and quickly (preliminary analysis).

## Installation

Just download the whole package files and add the path of its folder in Matlab.

## How to use it

Just type

```matlab
results = bayecon(data)
```

in REPL(command line) or a script. That's all! When you type it, you will naturally realize how to use it.

Input `data` is a matrix in which each column has observations of a variable (each variable is a column vector). The order of variables is not matter. Bayecon will reorder it as you want.

Output `results` is a struct that contains the results of an analysis.

### Example: Bayesian Linear Regression

Suppose we have one dependent variable `y`, one regressor `x`. Then, we can compose the input as

```matlab
  [T, ~] = size(y)
  data = [y ones(T,1) x]
```

Then, execute the package with

```matlab
  results = bayecon(data)
```

in REPL(or script). Then, in the command window, the below things are displayed.

```
  /////////////////////////////////////////////
  ////////Bayesian Econometrics ToolBox////////
  /////////////////////////////////////////////
  Email : econ.preference@gmail.com

  ====================Model====================
  1. Linear Regression
  2. Time Series
  3. State Space Model
  4. Variable Selection
  5. Mixture Normal
  =============================================

  Which model would you like to choose?
```

Type `1` in REPL and press enter. Then,

```
  /////////////////////////////////////////////
  ////////Bayesian Econometrics ToolBox////////
  /////////////////////////////////////////////

  Model: Linear Regression
  ====================Model====================
  1. Ordinary Least Squares
  2. Bayesian Linear Regression
  3. Linear Regression(Heterogeneity)
  4. Bayesian IV Linear Regression
  =============================================

  Which model would you like to choose?
```

is displayed. Type `2` in REPL and press enter. The displayed output is

```
  =============================================
  Model: Bayesian Linear Regression
  =============================================

  [Data generating Process]

  Y | X,b,sig2 ~ Normal(X*b, sig2 * I(T,T))

  b ~ Normal(b0, B0)
  (b0: k by 1, B0: k by k)

  sig2 ~ InverseGamma(a0 / 2, d0 / 2)
  (a0: 1 by 1, d0: 1 by 1)

  T: Number of observations, k: Number of Regressor

  What column in the data matrix is the dependent variable?
```

It is a description of my Bayesian linear regression model. See the last line. Since our dependent variable is in the first column of `data`, type `1` in REPL and press enter. The next question is

```
  Enter the Hyper-parameter according to the following form.

  b0: 2 by 1 =
```

As shown in the model description, `b0` is a prior mean. In the display, `b0: 2 by 1` means that `b0` should be a 2 by 1 array. My default value `zeros(2, 1)`, so type it in REPL. Then, the next thing is

```
  B0: 2 by 2 =
```

In this case, `B0`(prior variance) is a 2 by 2 array. Type it based on your prior belief. Similarly, the package will ask you to type `a0` and `b0`. Since `a0` and `b0` are scalars, just type corresponding double type numbers. For example, I can type

```
  a0: scalar = 4
```

Lastly, the package ask you about the MCMC size. In my case, I set it as

```
  [burn-in size, sampling size]= [5000, 20000]
```

And then, the package ask you whether you wanna make a forecast. Type `Y` or `N`. Also, it will ask about whether you want to calculate the marginal likelihood.

The last thing displayed is

```
  Do you want to save your model into "BLR.mat" ?

  type Y or N :
```

It is a function to save your setting that you typed. It is saved for the replication. Or, you can modify the mat file to change your setting. After you type `Y` or `N`, you can see estimation results in your command window and pop up windows. The results will be saved in `results`(that you set at the first) as a `struct` type variable.

When there is a corresponding mat file(there is a specific file name for each model) in your current working folder, you can see the below output after you select `2. Bayesian Linear Regression` model.

```
  "BLR.mat" is founded"
  Do you want to use the model in "BLR.mat" ?

  type Y or N :
```

If you want to use the saved setting, press `Y`. Then, the package estimate the model using the saved setting. If you do not want to use the previous setting, press `N` and create a new setting as you did before.

## Compiling (mex file)

Most models in the package are mex-files. I check that every mex-file model has both \*.mexw64 and \*.mexmaci64. Some models do not have \*.mexw32. So, if you have a different operating system,

1. Compile a new mex file using the corresponding \*.prj file. All mex file model has their prj file that is completed.

2. In the script where the compatibility error occurs, erase "\_mex" from the function name in my script (for example, modify `output=function_name_mex(input)` to `output=function_name(input)`)

## Citation

If you want to cite my package, please cite

```bibtex
@software{Lee_Bayecon_Bayesian_Econometrics_2023,
author = {Lee, Sun Ho},
month = apr,
title = {{Bayecon: Bayesian Econometrics package}},
url = {https://github.com/econPreference/bayecon.matlab},
version = {1.0.0},
year = {2023}
}
```

or

> Lee, S. H. (2023), “Bayecon: Bayesian econometrics package.”
