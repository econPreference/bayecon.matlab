/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lnpdfig.c
 *
 * Code generation for function 'lnpdfig'
 *
 */

/* Include files */
#include "lnpdfig.h"
#include "Unit_Root.h"
#include "Unit_Root_data.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo cl_emlrtRSI = { 16, /* lineNo */
  "lnpdfig",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\lnpdfig.m"/* pathName */
};

static emlrtRSInfo dl_emlrtRSI = { 17, /* lineNo */
  "lnpdfig",                           /* fcnName */
  "C:\\Users\\derko\\Dropbox\\code\\MATLAB\\Bayecon\\lnpdfig.m"/* pathName */
};

static emlrtRSInfo el_emlrtRSI = { 10, /* lineNo */
  "gammaln",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\specfun\\gammaln.m"/* pathName */
};

static emlrtRSInfo fl_emlrtRSI = { 17, /* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"/* pathName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 117,/* lineNo */
  5,                                   /* colNo */
  "scalar_gammaln",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\specfun\\gammaln.m"/* pName */
};

/* Function Definitions */
real_T lnpdfig(const emlrtStack *sp, real_T sig2, real_T a, real_T b)
{
  real_T t;
  real_T r;
  static const real_T table100[100] = { 0.0, 0.0, 0.69314718055994529,
    1.791759469228055, 3.1780538303479458, 4.7874917427820458,
    6.5792512120101012, 8.5251613610654147, 10.604602902745251,
    12.801827480081469, 15.104412573075516, 17.502307845873887,
    19.987214495661885, 22.552163853123425, 25.19122118273868, 27.89927138384089,
    30.671860106080672, 33.505073450136891, 36.395445208033053,
    39.339884187199495, 42.335616460753485, 45.380138898476908,
    48.471181351835227, 51.606675567764377, 54.784729398112319,
    58.003605222980518, 61.261701761002, 64.557538627006338, 67.88974313718154,
    71.257038967168015, 74.658236348830158, 78.0922235533153, 81.557959456115043,
    85.054467017581516, 88.580827542197682, 92.1361756036871, 95.7196945421432,
    99.330612454787428, 102.96819861451381, 106.63176026064346,
    110.32063971475739, 114.03421178146171, 117.77188139974507,
    121.53308151543864, 125.3172711493569, 129.12393363912722,
    132.95257503561632, 136.80272263732635, 140.67392364823425,
    144.5657439463449, 148.47776695177302, 152.40959258449735, 156.3608363030788,
    160.3311282166309, 164.32011226319517, 168.32744544842765,
    172.35279713916279, 176.39584840699735, 180.45629141754378,
    184.53382886144948, 188.6281734236716, 192.7390472878449, 196.86618167289,
    201.00931639928152, 205.1681994826412, 209.34258675253685,
    213.53224149456327, 217.73693411395422, 221.95644181913033,
    226.1905483237276, 230.43904356577696, 234.70172344281826,
    238.97838956183432, 243.26884900298271, 247.57291409618688,
    251.89040220972319, 256.22113555000954, 260.56494097186322,
    264.92164979855278, 269.29109765101981, 273.67312428569369,
    278.06757344036612, 282.4742926876304, 286.893133295427, 291.32395009427029,
    295.76660135076065, 300.22094864701415, 304.68685676566872,
    309.1641935801469, 313.65282994987905, 318.1526396202093, 322.66349912672615,
    327.1852877037752, 331.71788719692847, 336.26118197919845, 340.815058870799,
    345.37940706226686, 349.95411804077025, 354.53908551944079,
    359.1342053695754 };

  int32_T i;
  static const real_T p1[8] = { 4.9452353592967269, 201.8112620856775,
    2290.8383738313464, 11319.672059033808, 28557.246356716354,
    38484.962284437934, 26377.487876241954, 7225.8139797002877 };

  static const real_T p2[8] = { 4.974607845568932, 542.4138599891071,
    15506.938649783649, 184793.29044456323, 1.0882047694688288E+6,
    3.33815296798703E+6, 5.1066616789273527E+6, 3.0741090548505397E+6 };

  static const real_T q1[8] = { 67.482125503037778, 1113.3323938571993,
    7738.7570569353984, 27639.870744033407, 54993.102062261576,
    61611.221800660023, 36351.2759150194, 8785.5363024310136 };

  static const real_T q2[8] = { 183.03283993705926, 7765.0493214450062,
    133190.38279660742, 1.1367058213219696E+6, 5.2679641174379466E+6,
    1.3467014543111017E+7, 1.7827365303532742E+7, 9.5330955918443538E+6 };

  static const real_T p4[8] = { 14745.0216605994, 2.4268133694867045E+6,
    1.2147555740450932E+8, 2.6634324496309772E+9, 2.9403789566345539E+10,
    1.7026657377653989E+11, 4.926125793377431E+11, 5.6062518562239514E+11 };

  static const real_T q4[8] = { 2690.5301758708993, 639388.56543000927,
    4.1355999302413881E+7, 1.120872109616148E+9, 1.4886137286788137E+10,
    1.0168035862724382E+11, 3.4174763455073773E+11, 4.4631581874197131E+11 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /*    to compute the inverted gamma density on a grid */
  /*    beta is also a vector  */
  /*    outputs the log of the density */
  /*  sig2가 벡터인 경우를 대비 */
  /*  이 경우, 각각의 원소에 대해 우도를 계산해줌 */
  st.site = &cl_emlrtRSI;
  if (b < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      3, "log");
  }

  st.site = &cl_emlrtRSI;
  t = a;
  b_st.site = &el_emlrtRSI;
  c_st.site = &fl_emlrtRSI;
  if (!muDoubleScalarIsNaN(a)) {
    if (a < 0.0) {
      emlrtErrorWithMessageIdR2018a(&c_st, &hb_emlrtRTEI,
        "MATLAB:gammaln:negativeVal", "MATLAB:gammaln:negativeVal", 0);
    } else if (a > 2.55E+305) {
      t = rtInf;
    } else if (a <= 2.2204460492503131E-16) {
      t = -muDoubleScalarLog(a);
    } else if (a <= 0.5) {
      t = 1.0;
      r = 0.0;
      for (i = 0; i < 8; i++) {
        r = r * a + p1[i];
        t = t * a + q1[i];
      }

      t = -muDoubleScalarLog(a) + a * (a * (r / t) + -0.57721566490153287);
    } else if (a <= 0.6796875) {
      t = 1.0;
      r = 0.0;
      for (i = 0; i < 8; i++) {
        r = r * ((a - 0.5) - 0.5) + p2[i];
        t = t * ((a - 0.5) - 0.5) + q2[i];
      }

      t = -muDoubleScalarLog(a) + ((a - 0.5) - 0.5) * (((a - 0.5) - 0.5) * (r /
        t) + 0.42278433509846713);
    } else if ((a == muDoubleScalarFloor(a)) && (a <= 100.0)) {
      t = table100[(int32_T)a - 1];
    } else if (a <= 1.5) {
      t = 1.0;
      r = 0.0;
      for (i = 0; i < 8; i++) {
        r = r * ((a - 0.5) - 0.5) + p1[i];
        t = t * ((a - 0.5) - 0.5) + q1[i];
      }

      t = ((a - 0.5) - 0.5) * (((a - 0.5) - 0.5) * (r / t) +
        -0.57721566490153287);
    } else if (a <= 4.0) {
      t = 1.0;
      r = 0.0;
      for (i = 0; i < 8; i++) {
        r = r * (a - 2.0) + p2[i];
        t = t * (a - 2.0) + q2[i];
      }

      t = (a - 2.0) * ((a - 2.0) * (r / t) + 0.42278433509846713);
    } else if (a <= 12.0) {
      t = -1.0;
      r = 0.0;
      for (i = 0; i < 8; i++) {
        r = r * (a - 4.0) + p4[i];
        t = t * (a - 4.0) + q4[i];
      }

      t = (a - 4.0) * (r / t) + 1.791759469228055;
    } else {
      if (a <= 2.25E+76) {
        r = 0.0057083835261;
        t = 1.0 / (a * a);
        for (i = 0; i < 6; i++) {
          r = r * t + dv[i];
        }

        r /= a;
      } else {
        r = 0.0;
      }

      t = muDoubleScalarLog(a);
      t = ((r + 0.91893853320467278) - 0.5 * t) + a * (t - 1.0);
    }
  }

  st.site = &dl_emlrtRSI;
  if (sig2 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &w_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      3, "log");
  }

  return ((a * muDoubleScalarLog(b) - t) - (a + 1.0) * muDoubleScalarLog(sig2))
    - b / sig2;
}

/* End of code generation (lnpdfig.c) */
