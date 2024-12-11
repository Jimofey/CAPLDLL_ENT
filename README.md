## Project
CAPLDLL_ENT

## Introduce
This project is to include ENT to CAPL dll.
1. ENT - A Pseudorandom Number Sequence Test Program.  
   https://www.fourmilab.ch/random/
2. CAPLdll - A VS or CMake project to add user functions, then build CAPL dll.

## Requirements
- *Operating System*: Win10/Win11
- *Dependencies*: >=CANoe11.0

## Installation
1. Install Visual Studio Code (Latest User version)
2. Install MinGW32, recommend version:  
   i686-14.2.0-release-posix-dwarf-ucrt-rt_v12-rev0.7z  
    https://github.com/niXman/mingw-builds-binaries/releases?page=1
3. Install CMake, latest Win64 version.
4. Open project, then intall the extensions by following the tips.

## Functions
- ENT_ent((char)dataBuffer, (qword)dataBufferLength, (dword)Binary): double  
  _[Calculate ent value]_  

- ENT_chisq((char)dataBuffer, (qword)dataBufferLength, (dword)Binary): double  
  _[Calculate chisq value]_  

- ENT_mean((char)dataBuffer, (qword)dataBufferLength, (dword)Binary): double  
  _[Calculate mean value]_  

- ENT_montepi((char)dataBuffer, (qword)dataBufferLength, (dword)Binary): double  
  _[Calculate montepi value]_  

- ENT_scc((char)dataBuffer, (qword)dataBufferLength, (dword)Binary): double  
  _[Calculate scc value]_ 

- ENT_chip((char)dataBuffer, (qword)dataBufferLength, (dword)Binary): double  
  _[Calculate chip value]_ 

- ENT_compRate((char)dataBuffer, (qword)dataBufferLength, (dword)Binary): dword  
  _[Calculate compRate value]_ 

- ENT_errorPct((char)dataBuffer, (qword)dataBufferLength, (dword)Binary): dword  
  _[Calculate errorPct value]_

## How to use
Start EXAMPLE/ENTTest.cfg, then open the test node CAPL:  
```CAPL
includes  
{  
    #pragma library ("..\..\build\ENT_Calculator.dll")  
}  
```

## History
| Version | Author |Date|Description|
| --- | --- | --- | --- |
| V1.0 | Jim.li2 | 12/10/2024 | Innitial Version |

## Contact
Magna MMEC  
Any question please contact [jim.li2@magna.com](mailto:jim.li2@magna.com)