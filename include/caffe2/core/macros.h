// Automatically generated header file for caffe2 macros. These
// macros are used to build the Caffe2 binary, and if you are
// building a dependent library, they will need to be set as well
// for your program to link correctly.

#pragma once

#define CAFFE2_BUILD_SHARED_LIBS
/* #undef CAFFE2_FORCE_FALLBACK_CUDA_MPI */
/* #undef CAFFE2_HAS_MKL_DNN */
/* #undef CAFFE2_HAS_MKL_SGEMM_PACK */
#define CAFFE2_PERF_WITH_AVX
#define CAFFE2_PERF_WITH_AVX2
/* #undef CAFFE2_THREADPOOL_MAIN_IMBALANCE */
/* #undef CAFFE2_THREADPOOL_STATS */
/* #undef CAFFE2_USE_ACCELERATE */
#define CAFFE2_USE_CUDNN
/* #undef CAFFE2_USE_EIGEN_FOR_BLAS */
/* #undef CAFFE2_USE_FBCODE */
/* #undef CAFFE2_USE_GOOGLE_GLOG */
/* #undef CAFFE2_USE_LITE_PROTO */
#define CAFFE2_USE_MKL
/* #undef USE_MKLDNN */
/* #undef CAFFE2_USE_NVTX */
/* #undef CAFFE2_USE_ITT */

#ifndef EIGEN_MPL2_ONLY
#define EIGEN_MPL2_ONLY
#endif

// Useful build settings that are recorded in the compiled binary
// torch.__config__.show()
#define CAFFE2_BUILD_STRINGS { \
  {"TORCH_VERSION", "2.8.0"}, \
  {"CXX_COMPILER", "/tmp/jenkins_sw_bot/cu-bridge/bin/c++"}, \
  {"CXX_FLAGS", " -fvisibility-inlines-hidden -DUSE_PTHREADPOOL -DNDEBUG -DUSE_KINETO -DLIBKINETO_NOROCTRACER -DLIBKINETO_NOXPUPTI=ON -DUSE_FBGEMM -DUSE_PYTORCH_QNNPACK -DSYMBOLICATE_MOBILE_DEBUG_HANDLE -O2 -fPIC -DC10_NODEPRECATED -Wall -Wextra -Werror=return-type -Werror=non-virtual-dtor -Werror=bool-operation -Wnarrowing -Wno-missing-field-initializers -Wno-unknown-pragmas -Wno-unused-parameter -Wno-strict-overflow -Wno-strict-aliasing -Wno-stringop-overflow -Wsuggest-override -Wno-psabi -Wno-error=old-style-cast -faligned-new -Wno-maybe-uninitialized -fno-math-errno -fno-trapping-math -Werror=format -Wno-stringop-overflow"}, \
  {"BUILD_TYPE", "Release"}, \
  {"BLAS_INFO", "mkl"}, \
  {"LAPACK_INFO", "mkl"}, \
  {"USE_CUDA", "ON"}, \
  {"USE_ROCM", "OFF"}, \
  {"CUDA_VERSION", "11.6"}, \
  {"ROCM_VERSION", ""}, \
  {"USE_CUDNN", "ON"}, \
  {"COMMIT_SHA", "58d358eda9ab69b135236c9edd8e3c2d0b0bc96d"}, \
  {"CUDNN_VERSION", "8.4.1"}, \
  {"USE_NCCL", "ON"}, \
  {"USE_MPI", "0"}, \
  {"USE_GFLAGS", "OFF"}, \
  {"USE_GLOG", "OFF"}, \
  {"USE_GLOO", "1"}, \
  {"USE_NNPACK", "0"}, \
  {"USE_OPENMP", "1"}, \
  {"FORCE_FALLBACK_CUDA_MPI", ""}, \
  {"HAS_MKL_DNN", ""}, \
  {"HAS_MKL_SGEMM_PACK", ""}, \
  {"PERF_WITH_AVX", "1"}, \
  {"PERF_WITH_AVX2", "1"}, \
  {"USE_ACCELERATE", ""}, \
  {"USE_EIGEN_FOR_BLAS", ""}, \
  {"USE_LITE_PROTO", ""}, \
  {"USE_MKL", "ON"}, \
  {"USE_MKLDNN", "OFF"}, \
  {"USE_NVTX", ""}, \
  {"USE_ITT", ""}, \
  {"USE_ROCM_KERNEL_ASSERT", "OFF"}, \
  {"USE_CUSPARSELT", "OFF"}, \
  {"USE_XPU", "OFF"}, \
  {"USE_XCCL", "OFF"}, \
}
