
#include "common.h"

/*
 *
 * \brief	Entrypoint function, called after the 
 * 		initial payload calculates the start
 * 		of our code.
 *
 * \args	Pointer to the start of our code.
 *
 * \ret		NONE
 *
 */
void WINAPI EntryPoint( IN PVOID EntryPtr )
{
	HMODULE ntl;
	HMODULE k32;
	API     api;

	ntl = PebGetModule( H_NTDLL );
	k32 = PebGetModule( H_KERNEL32 );
};
