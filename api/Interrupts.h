#ifndef W_INTERRUPTS_CPP
#define W_INTERRUPTS_CPP
#ifdef __cplusplus

#include "Common.h"

template <typename T>
using voidTemplateFuncPtrParam = void (*)(T* param);

// C++ only overloaded version of attachInterrupt function
template <typename T>
void attachInterrupt(pin_size_t interruptNum, voidTemplateFuncPtrParam<T> userFunc, PinStatus mode, T& param)
{
  attachInterruptParam(interruptNum, (voidFuncPtrParam)userFunc, mode, &param);
}

template <typename T>
void attachInterrupt(pin_size_t interruptNum, voidTemplateFuncPtrParam<T> userFunc, PinStatus mode, T* param)
{
  attachInterruptParam(interruptNum, (voidFuncPtrParam)userFunc, mode, param);
}

#endif
#endif
