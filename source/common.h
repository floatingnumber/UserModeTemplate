
#ifndef COMMON_H
#define COMMON_H

//! External Includes
#include <windows.h>
#include <ntstatus.h>

//! Structures
#include "ntpeb.h"

//! Internal Includes
#include "hashes.h"
#include "hash.h"
#include "peb.h"
#include "pe.h"

//! Macros
#define UPTR(x) ((ULONG_PTR)x)
#define CPTR(x) ((PVOID)x)
#define FUNC(x) __typeof__(x) * x

//! Function Table
typedef struct
{
} API;

#endif // END COMMON_H
