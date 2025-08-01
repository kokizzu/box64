/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.5.0.24) *
 *******************************************************************/
#ifndef __wrappedlibmTYPES_H_
#define __wrappedlibmTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFv_t)(void);
typedef int32_t (*iFi_t)(int32_t);
typedef int32_t (*iFf_t)(float);
typedef int32_t (*iFd_t)(double);
typedef int64_t (*IFf_t)(float);
typedef int64_t (*IFd_t)(double);
typedef float (*fFf_t)(float);
typedef double (*dFd_t)(double);
typedef float (*fFff_t)(float, float);
typedef double (*dFdd_t)(double, double);

#if defined(HAVE_LD80BITS) || defined(ANDROID)
typedef int64_t (*IFD_t)(long double);
typedef long double (*DFD_t)(long double);
typedef long double (*DFDD_t)(long double, long double);
#else // !HAVE_LD80BITS && !ANDROID
typedef int64_t (*IFD_t)(double);
typedef double (*DFD_t)(double);
typedef double (*DFDD_t)(double, double);
#endif

#define SUPER() ADDED_FUNCTIONS() \
	GO(fegetround, iFv_t) \
	GO(fesetround, iFi_t) \
	GO(lrintf, iFf_t) \
	GO(lrint, iFd_t) \
	GO(llrintf, IFf_t) \
	GO(llrint, IFd_t) \
	GO(llrintl, IFD_t) \
	GO(__acosf_finite, fFf_t) \
	GO(__acoshf_finite, fFf_t) \
	GO(__asinf_finite, fFf_t) \
	GO(__coshf_finite, fFf_t) \
	GO(__exp2f_finite, fFf_t) \
	GO(__expf_finite, fFf_t) \
	GO(__log10f_finite, fFf_t) \
	GO(__log2f_finite, fFf_t) \
	GO(__logf_finite, fFf_t) \
	GO(__sinhf_finite, fFf_t) \
	GO(__sqrtf_finite, fFf_t) \
	GO(nearbyintf, fFf_t) \
	GO(pow10f, fFf_t) \
	GO(rintf, fFf_t) \
	GO(__acos_finite, dFd_t) \
	GO(__acosh_finite, dFd_t) \
	GO(__asin_finite, dFd_t) \
	GO(__cosh_finite, dFd_t) \
	GO(__exp2_finite, dFd_t) \
	GO(__exp_finite, dFd_t) \
	GO(__log10_finite, dFd_t) \
	GO(__log2_finite, dFd_t) \
	GO(__log_finite, dFd_t) \
	GO(__sinh_finite, dFd_t) \
	GO(__sqrt_finite, dFd_t) \
	GO(nearbyint, dFd_t) \
	GO(pow10, dFd_t) \
	GO(rint, dFd_t) \
	GO(pow10l, DFD_t) \
	GO(__atan2f_finite, fFff_t) \
	GO(__fmodf_finite, fFff_t) \
	GO(__hypotf_finite, fFff_t) \
	GO(__powf_finite, fFff_t) \
	GO(__atan2_finite, dFdd_t) \
	GO(__fmod_finite, dFdd_t) \
	GO(__hypot_finite, dFdd_t) \
	GO(__pow_finite, dFdd_t) \
	GO(__powl_finite, DFDD_t)

#endif // __wrappedlibmTYPES_H_
