# bayecon.matlab toolkit

This is a MATLAB toolbox for **Bay**esian **econ**ometrics. It is easy to use and includes many standard econometric models:

- Linear Regression
  1. Ordinary Least Squares
  2. Bayesian Linear Regression
  3. Linear Regression (Heterogeneity)
  4. Bayesian IV Linear Regression
- Time Series
  1. Bayesian Unit-Root Test
  2. Principal Component Analysis
  3. Linear Regression (Autocorrelation, MCMC)
  4. Unrestricted BVAR Model
  5. Impulse-Response Analysis
  6. Markov Switching Model
- State Space Model
  1. Unobserved Component Model
  2. Dynamic Common Factor Model
  3. Time-varying Parameter
  4. ARMA-X (Kalman filter)
  5. Stochastic Volatility
- Variable Selection
  1. Absolutely Continuous Spike Prior
  2. Dirac Spike - g Prior
- Mixture Normal

This package is useful for quickly exploring patterns in data during preliminary analysis.

## Installation

Download the entire package files and add the folder containing `bayecon.m` to the MATLAB path.

## How to Use It

Run

```matlab
results = bayecon(data)
```

in the MATLAB Command Window or in a script. The package will then ask the necessary questions step by step.

Input `data` is a matrix in which each column contains observations for one variable. You can choose the variable order later; Bayecon will reorder the variables based on your selections.

Output `results` is a MATLAB structure variable containing the analysis results.

### Example: Bayesian Linear Regression

Suppose we have one dependent variable, `y`, and one regressor, `x`. Then, create the input as

```matlab
  [T, ~] = size(y)
  data = [y ones(T,1) x]
```

Then, run the package with

```matlab
  results = bayecon(data)
```

from the MATLAB Command Window or a script. MATLAB displays the following menu.

```
  /////////////////////////////////////////////
  ////////Bayesian Econometrics Toolbox////////
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

Type `1` and press Enter. Then,

```
  /////////////////////////////////////////////
  ////////Bayesian Econometrics Toolbox////////
  /////////////////////////////////////////////

  Model: Linear Regression
  ====================Model====================
  1. Ordinary Least Squares
  2. Bayesian Linear Regression
  3. Linear Regression (Heterogeneity)
  4. Bayesian IV Linear Regression
  =============================================

  Which model would you like to choose?
```

is displayed. Type `2` and press Enter. The following output is displayed:

```
  =============================================
  Model: Bayesian Linear Regression
  =============================================

  [Data Generating Process]

  Y | X,b,sig2 ~ Normal(X*b, sig2 * I(T,T))

  b ~ Normal(b0, B0)
  (b0: k by 1, B0: k by k)

  sig2 ~ InverseGamma(a0 / 2, d0 / 2)
  (a0: 1 by 1, d0: 1 by 1)

  T: Number of observations, k: Number of regressors

  Which column in the data matrix is the dependent variable?
```

This screen describes the Bayesian linear regression model. See the last line. Since our dependent variable is in the first column of `data`, type `1` and press Enter. The next question is

```
  Enter the hyperparameters in the following form.

  b0: 2 by 1 =
```

As shown in the model description, `b0` is a prior mean. In the display, `b0: 2 by 1` means that `b0` should be a 2-by-1 column vector. For example, type `zeros(2, 1)`. The next question is

```
  B0: 2 by 2 =
```

In this case, `B0` (prior variance) is a 2-by-2 matrix. Type it based on your prior belief. The package will also ask you to type `a0` and `d0`. Since `a0` and `d0` are single numbers, type ordinary numeric values based on your belief. For example, type

```
  a0: scalar = 4
```

Finally, the package asks for the number of MCMC simulation draws. In my case, I set it as

```
  [burn-in size, sampling size]= [5000, 20000]
```

Here, `sampling size` is the number of posterior samples kept after burn-in. Then, the package asks whether you want to make a forecast. Type `Y` or `N`. It will also ask whether you want to calculate the marginal likelihood.

The final prompt is

```
  Do you want to save your model as "BLR.mat"?

  Type Y or N:
```

This option saves the settings that you typed so that you can reuse the same setup later. You can also modify the saved `*.mat` file to change your settings. After you type `Y` or `N`, you can see estimation results in the MATLAB Command Window and pop-up windows. The results will be saved in `results` (the output name specified in `bayecon`) as a MATLAB structure variable.

When there is a corresponding `*.mat` file (a specific file name for each model) in your current working folder, you will see the following output after selecting the `2. Bayesian Linear Regression` model.

```
  "BLR.mat" was found.
  Do you want to use the model saved in "BLR.mat"?

  Type Y or N:
```

If you want to use the saved settings, press `Y`. The package will estimate the model using those settings. If you do not want to use the previous settings, press `N` and create new settings as you did before.

## Compiling (mex Files)

Some models use compiled MATLAB files (`mex` files) for faster computation. The package includes Windows 64-bit (`*.mexw64`) and Mac Apple Silicon 64-bit (`*.mexmaca64`) versions. If your operating system is not supported, use one of the following options:

1. Compile a new `mex` file using the corresponding `*.prj` file. Each compiled model has a completed project file.

2. In the script where the compatibility error occurs, remove `_mex` from the function name (for example, modify `output=function_name_mex(input)` to `output=function_name(input)`).

## Citation

If you use this package in your work, please cite

```bibtex
@software{Lee_Bayecon_Bayesian_Econometrics_2023,
author = {Sun Ho Lee},
month = apr,
title = {{Bayecon: Bayesian Econometrics package}},
url = {https://github.com/econPreference/bayecon.matlab},
version = {1.0.1},
year = {2026}
}
```

or

> Lee, Sun Ho (2026), “Bayecon: Bayesian econometrics package.”
