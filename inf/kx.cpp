// kX Audio Driver
// Copyright (c) Eugene Gavrilov, 2001-2018,
// All rights reserved

/*
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */


#include "vers.h"

; kX Audio Driver
; Copyright (c) Eugene Gavrilov, 2001-2018,
; All rights reserved
; Version:  KX_DRIVER_VERSION_STR
; Built: KX_DRIVER_DATE (__TIME__; __DATE__)

[Version]
Signature="$CHICAGO$"
Class=MEDIA
ClassGUID={4d36e96c-e325-11ce-bfc1-08002be10318}
Provider=%ProviderName%, NTamd64, NTx86
CatalogFile=kx.cat
DriverVer=KX_DRIVER_DATE,KX_DRIVER_VERSION_

[Manufacturer]
#if defined(_WIN64)
%MfgName%=kXProject, NTAMD64, NTx86
#else
%MfgName%=kXProject
#endif

[kXProject]
%KX_EMU10KX.DeviceDesc1000%=KX_EMU10KX, PCI\VEN_1102&DEV_0002&CC_040100
%KX_EMU10KX.DeviceDesc1001%=KX_EMU10KX, PCI\VEN_1102&DEV_0004&CC_040100
%KX_EMU10KX.DeviceDesc1002%=KX_EMU10KX, PCI\VEN_1102&DEV_0008&CC_040100

[kXProject.NTAMD64]
%KX_EMU10KX.DeviceDesc1000%=KX_EMU10KX, PCI\VEN_1102&DEV_0002&CC_040100
%KX_EMU10KX.DeviceDesc1001%=KX_EMU10KX, PCI\VEN_1102&DEV_0004&CC_040100
%KX_EMU10KX.DeviceDesc1002%=KX_EMU10KX, PCI\VEN_1102&DEV_0008&CC_040100

[SourceDisksNames]
1=%DiskDescription%,,,

[SourceDisksFiles]
kx.sys=1

[KXDRIVER.CopyList]
kx.sys

[DestinationDirs]
DefaultDestDir=11
KXDRIVER.CopyList=10,system32\drivers

[KX_EMU10KX]
Include=ks.inf, wdmaudio.inf
Needs=KS.Registration, WDMAUDIO.Registration
CopyFiles=KXDRIVER.CopyList
AddReg=KX_EMU10KX.AddReg
FeatureScore=00

[KX_EMU10KX.NT]
Include=ks.inf, wdmaudio.inf
Needs=KS.Registration, WDMAUDIO.Registration
CopyFiles=KXDRIVER.CopyList
AddReg=KX_EMU10KX.AddReg
FeatureScore=00

[KX_EMU10KX.AddReg]
HKR,,AssociatedFilters,,"wdmaud,swmidi,redbook"

HKR,,SetupPreferredAudioDevices,3,01,00,00,00

HKR,,Driver,,kx.sys
HKR,,NTMPDriver,,"kx.sys,sbemul.sys"	// for Win98SE/Me only

HKR,Drivers,SubClasses,,"wave,midi,mixer,aux"

HKR,Drivers\wave\wdmaud.drv, Driver,,wdmaud.drv
HKR,Drivers\midi\wdmaud.drv, Driver,,wdmaud.drv
HKR,Drivers\mixer\wdmaud.drv,Driver,,wdmaud.drv
HKR,Drivers\aux\wdmaud.drv,Driver,,wdmaud.drv

HKR,Drivers\wave\wdmaud.drv,Description,,%EMU10KX_WAVE%
HKR,Drivers\midi\wdmaud.drv,Description,,%EMU10KX_MIDI%
HKR,Drivers\mixer\wdmaud.drv,Description,,%EMU10KX_MIXER%
HKR,Drivers\aux\wdmaud.drv,Description,,%EMU10KX_AUX%

; Localized Names (pins and nodes)
HKLM,%MediaCategories%\%GUID.KX_SYNTH1%,Name,,%KX_SYNTH1_NAME% /* TOPO_SYNTH1_NAME */
HKLM,%MediaCategories%\%GUID.KX_SYNTH1%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_SYNTH2%,Name,,%KX_SYNTH2_NAME% /* TOPO_SYNTH2_NAME */
HKLM,%MediaCategories%\%GUID.KX_SYNTH2%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_MIXER%,Name,,%KX_MIXER_NAME% /* = TOPO_MASTER_MIXER_NAME */
HKLM,%MediaCategories%\%GUID.KX_MIXER%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_RECIN%,Name,,%KX_RECIN_NAME% /* = TOPO_RECIN_NAME */
HKLM,%MediaCategories%\%GUID.KX_RECIN%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT01%,Name,,%KX_WAVEOUT01_NAME% /* = TOPO_WAVEOUT01_NAME */
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT01%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT23%,Name,,%KX_WAVEOUT23_NAME% /* = TOPO_WAVEOUT23_NAME */
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT23%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT45%,Name,,%KX_WAVEOUT45_NAME% /* = TOPO_WAVEOUT45_NAME */
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT45%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT67%,Name,,%KX_WAVEOUT67_NAME% /* = TOPO_WAVEOUT67_NAME */
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT67%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEOUTHQ%,Name,,%KX_WAVEOUTHQ_NAME% /* = TOPO_WAVEOUTHQ_NAME */
HKLM,%MediaCategories%\%GUID.KX_WAVEOUTHQ%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEINHQ%,Name,,%KX_WAVEINHQ_NAME% /* = TOPO_WAVEINHQ_NAME */
HKLM,%MediaCategories%\%GUID.KX_WAVEINHQ%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEIN%,Name,,%KX_WAVEIN_NAME% /* = TOPO_WAVEIN_NAME */
HKLM,%MediaCategories%\%GUID.KX_WAVEIN%,Display,1,00,00,00,01

HKLM,%MediaCategories%\%GUID.KX_WAVEOUT01M%,Name,,%KX_WAVEOUT01M_NAME% /* = TOPO_WAVEOUT01_MUTE_NAME */
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT01M%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT23M%,Name,,%KX_WAVEOUT23M_NAME% /* = TOPO_WAVEOUT23_MUTE_NAME */
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT23M%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT45M%,Name,,%KX_WAVEOUT45M_NAME% /* = TOPO_WAVEOUT45_MUTE_NAME */
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT45M%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT67M%,Name,,%KX_WAVEOUT67M_NAME% /* = TOPO_WAVEOUT67_MUTE_NAME */
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT67M%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEOUTHQM%,Name,,%KX_WAVEOUTHQM_NAME% /* = TOPO_WAVEOUTHQ_MUTE_NAME */
HKLM,%MediaCategories%\%GUID.KX_WAVEOUTHQM%,Display,1,00,00,00,01

HKLM,%MediaCategories%\%GUID.KX_WAVEOUT01V%,Name,,%KX_WAVEOUT01V_NAME% /* = TOPO_WAVEOUT01_VOLUME_NAME */
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT01V%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT23V%,Name,,%KX_WAVEOUT23V_NAME% /* = TOPO_WAVEOUT23_VOLUME_NAME */
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT23V%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT45V%,Name,,%KX_WAVEOUT45V_NAME% /* = TOPO_WAVEOUT45_VOLUME_NAME */
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT45V%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT67V%,Name,,%KX_WAVEOUT67V_NAME% /* = TOPO_WAVEOUT67_VOLUME_NAME */
HKLM,%MediaCategories%\%GUID.KX_WAVEOUT67V%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEOUTHQV%,Name,,%KX_WAVEOUTHQV_NAME% /* = TOPO_WAVEOUTHQ_VOLUME_NAME */
HKLM,%MediaCategories%\%GUID.KX_WAVEOUTHQV%,Display,1,00,00,00,01

HKLM,%MediaCategories%\%GUID.KX_RECINV%,Name,,%KX_RECINV_NAME% /* = TOPO_RECIN_VOLUME_NAME */
HKLM,%MediaCategories%\%GUID.KX_RECINV%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_RECINM%,Name,,%KX_RECINM_NAME% /* = TOPO_RECIN_MUTE_NAME */
HKLM,%MediaCategories%\%GUID.KX_RECINM%,Display,1,00,00,00,01

HKLM,%MediaCategories%\%GUID.KX_SYNTH1V%,Name,,%KX_SYNTH1V_NAME%	// TOPO_SYNTH1_VOLUME_NAME
HKLM,%MediaCategories%\%GUID.KX_SYNTH1V%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_SYNTH1M%,Name,,%KX_SYNTH1M_NAME%  	// TOPO_SYNTH1_MUTE_NAME
HKLM,%MediaCategories%\%GUID.KX_SYNTH1M%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_SYNTH2V%,Name,,%KX_SYNTH2V_NAME%	// TOPO_SYNTH2_VOLUME_NAME
HKLM,%MediaCategories%\%GUID.KX_SYNTH2V%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_SYNTH2M%,Name,,%KX_SYNTH2M_NAME%  	// TOPO_SYNTH2_MUTE_NAME
HKLM,%MediaCategories%\%GUID.KX_SYNTH2M%,Display,1,00,00,00,01

HKLM,%MediaCategories%\%GUID.KX_UARTOUT%,Name,,%KX_UARTOUT_NAME%	// KX_UARTOUT_NAME
HKLM,%MediaCategories%\%GUID.KX_UARTOUT%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_UARTIN%,Name,,%KX_UARTIN_NAME%		// KX_UARTIN_NAME
HKLM,%MediaCategories%\%GUID.KX_UARTIN%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_UARTOUT2%,Name,,%KX_UARTOUT2_NAME%	// KX_UARTOUT2_NAME
HKLM,%MediaCategories%\%GUID.KX_UARTOUT2%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_UARTIN2%,Name,,%KX_UARTIN2_NAME%	// KX_UARTIN2_NAME
HKLM,%MediaCategories%\%GUID.KX_UARTIN2%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_AC3%,Name,,%KX_AC3_NAME%		// WAVE_AC3_NODE_NAME
HKLM,%MediaCategories%\%GUID.KX_AC3%,Display,1,00,00,00,01

HKLM,%MediaCategories%\%GUID.KX_CTRLOUT%,Name,,%KX_CTRLOUT_NAME%	// KX_CTRLOUT_NAME
HKLM,%MediaCategories%\%GUID.KX_CTRLOUT%,Display,1,00,00,00,00
HKLM,%MediaCategories%\%GUID.KX_CTRLIN%,Name,,%KX_CTRLIN_NAME%		// KX_CTRLIN_NAME
HKLM,%MediaCategories%\%GUID.KX_CTRLIN%,Display,1,00,00,00,00

HKLM,%MediaCategories%\%GUID.KX_RECMIXER%,Name,,%KX_RECMIXER_NAME%
HKLM,%MediaCategories%\%GUID.KX_RECMIXER%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEOUTPUT%,Name,,%KX_WAVEOUTPUT_NAME%
HKLM,%MediaCategories%\%GUID.KX_WAVEOUTPUT%,Display,1,00,00,00,01
// mixer controls
HKLM,%MediaCategories%\%GUID.KX_MASTERV%,Name,,%KX_MASTERV_NAME%
HKLM,%MediaCategories%\%GUID.KX_MASTERV%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_MASTERM%,Name,,%KX_MASTERM_NAME%
HKLM,%MediaCategories%\%GUID.KX_MASTERM%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEV%,Name,,%KX_WAVEV_NAME%
HKLM,%MediaCategories%\%GUID.KX_WAVEV%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_WAVEM%,Name,,%KX_WAVEM_NAME%
HKLM,%MediaCategories%\%GUID.KX_WAVEM%,Display,1,00,00,00,01

HKLM,%MediaCategories%\%GUID.KX_LINEIN%,Name,,%KX_LINEIN_NAME%
HKLM,%MediaCategories%\%GUID.KX_LINEIN%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_MICIN%,Name,,%KX_MICIN_NAME%
HKLM,%MediaCategories%\%GUID.KX_MICIN%,Display,1,00,00,00,01

HKLM,%MediaCategories%\%GUID.KX_LINEIN_MUTE%,Name,,%KX_LINEIN_MUTE_NAME%
HKLM,%MediaCategories%\%GUID.KX_LINEIN_MUTE%,Display,1,00,00,00,01
HKLM,%MediaCategories%\%GUID.KX_MICIN_MUTE%,Name,,%KX_MICIN_MUTE_NAME%
HKLM,%MediaCategories%\%GUID.KX_MICIN_MUTE%,Display,1,00,00,00,01

[KX_EMU10KX.Interfaces]
AddInterface=%KSCAT_AUDIO%,%KSNAME_Wave0%,KX_EMU10KX.I.Wave0
AddInterface=%KSCAT_RENDER%,%KSNAME_Wave0%,KX_EMU10KX.I.Wave0
AddInterface=%KSCAT_CAPTURE%,%KSNAME_Wave0%,KX_EMU10KX.I.Wave0
//AddInterface=%KSCAT_GSIF%,%KSNAME_Wave0%,KX_EMU10KX.I.Gsif

AddInterface=%KSCAT_AUDIO%,%KSNAME_Wave1%,KX_EMU10KX.I.Wave1
AddInterface=%KSCAT_RENDER%,%KSNAME_Wave1%,KX_EMU10KX.I.Wave1
//AddInterface=%KSCAT_CAPTURE%,%KSNAME_Wave1%,KX_EMU10KX.I.Wave1

AddInterface=%KSCAT_AUDIO%,%KSNAME_Wave2%,KX_EMU10KX.I.Wave2
AddInterface=%KSCAT_RENDER%,%KSNAME_Wave2%,KX_EMU10KX.I.Wave2
//AddInterface=%KSCAT_CAPTURE%,%KSNAME_Wave2%,KX_EMU10KX.I.Wave2

AddInterface=%KSCAT_AUDIO%,%KSNAME_Wave3%,KX_EMU10KX.I.Wave3
AddInterface=%KSCAT_RENDER%,%KSNAME_Wave3%,KX_EMU10KX.I.Wave3
//AddInterface=%KSCAT_CAPTURE%,%KSNAME_Wave3%,KX_EMU10KX.I.Wave3

AddInterface=%KSCAT_AUDIO%,%KSNAME_Wave4%,KX_EMU10KX.I.Wave4
AddInterface=%KSCAT_RENDER%,%KSNAME_Wave4%,KX_EMU10KX.I.Wave4
AddInterface=%KSCAT_CAPTURE%,%KSNAME_Wave4%,KX_EMU10KX.I.Wave4

AddInterface=%KSCAT_AUDIO%,%KSNAME_Topo1%,KX_EMU10KX.I.Topology1
AddInterface=%KSCAT_TOPOLOGY%,%KSNAME_Topo1%,KX_EMU10KX.I.Topology1
AddInterface=%KSCAT_AUDIO%,%KSNAME_Topo2%,KX_EMU10KX.I.Topology2
AddInterface=%KSCAT_TOPOLOGY%,%KSNAME_Topo2%,KX_EMU10KX.I.Topology2
AddInterface=%KSCAT_AUDIO%,%KSNAME_Topo3%,KX_EMU10KX.I.Topology3
AddInterface=%KSCAT_TOPOLOGY%,%KSNAME_Topo3%,KX_EMU10KX.I.Topology3
AddInterface=%KSCAT_AUDIO%,%KSNAME_Topo4%,KX_EMU10KX.I.Topology4
AddInterface=%KSCAT_TOPOLOGY%,%KSNAME_Topo4%,KX_EMU10KX.I.Topology4

AddInterface=%KSCAT_AUDIO%,%KSNAME_UART1%,KX_EMU10KX.I.UART1
AddInterface=%KSCAT_RENDER%,%KSNAME_UART1%,KX_EMU10KX.I.UART1
AddInterface=%KSCAT_CAPTURE%,%KSNAME_UART1%,KX_EMU10KX.I.UART1

AddInterface=%KSCAT_AUDIO%,%KSNAME_UART2%,KX_EMU10KX.I.UART2
AddInterface=%KSCAT_RENDER%,%KSNAME_UART2%,KX_EMU10KX.I.UART2
AddInterface=%KSCAT_CAPTURE%,%KSNAME_UART2%,KX_EMU10KX.I.UART2

AddInterface=%KSCAT_AUDIO%,%KSNAME_Synth1%,KX_EMU10KX.I.Synth1
AddInterface=%KSCAT_RENDER%,%KSNAME_Synth1%,KX_EMU10KX.I.Synth1
//AddInterface=%KSCAT_SYNTHESIZER%,%KSNAME_Synth1%,KX_EMU10KX.I.Synth1

AddInterface=%KSCAT_AUDIO%,%KSNAME_Synth2%,KX_EMU10KX.I.Synth2
AddInterface=%KSCAT_RENDER%,%KSNAME_Synth2%,KX_EMU10KX.I.Synth2
//AddInterface=%KSCAT_SYNTHESIZER%,%KSNAME_Synth2%,KX_EMU10KX.I.Synth2

AddInterface=%KSCAT_AUDIO%,%KSNAME_CTRL%,KX_EMU10KX.I.CTRL
AddInterface=%KSCAT_RENDER%,%KSNAME_CTRL%,KX_EMU10KX.I.CTRL
AddInterface=%KSCAT_CAPTURE%,%KSNAME_CTRL%,KX_EMU10KX.I.CTRL

[KX_EMU10KX.NT.Interfaces]
AddInterface=%KSCAT_AUDIO%,%KSNAME_Wave0%,KX_EMU10KX.I.Wave0
AddInterface=%KSCAT_RENDER%,%KSNAME_Wave0%,KX_EMU10KX.I.Wave0
AddInterface=%KSCAT_CAPTURE%,%KSNAME_Wave0%,KX_EMU10KX.I.Wave0

AddInterface=%KSCAT_AUDIO%,%KSNAME_Wave1%,KX_EMU10KX.I.Wave1
AddInterface=%KSCAT_RENDER%,%KSNAME_Wave1%,KX_EMU10KX.I.Wave1
//AddInterface=%KSCAT_CAPTURE%,%KSNAME_Wave1%,KX_EMU10KX.I.Wave1

AddInterface=%KSCAT_AUDIO%,%KSNAME_Wave2%,KX_EMU10KX.I.Wave2
AddInterface=%KSCAT_RENDER%,%KSNAME_Wave2%,KX_EMU10KX.I.Wave2
//AddInterface=%KSCAT_CAPTURE%,%KSNAME_Wave2%,KX_EMU10KX.I.Wave2

AddInterface=%KSCAT_AUDIO%,%KSNAME_Wave3%,KX_EMU10KX.I.Wave3
AddInterface=%KSCAT_RENDER%,%KSNAME_Wave3%,KX_EMU10KX.I.Wave3
//AddInterface=%KSCAT_CAPTURE%,%KSNAME_Wave3%,KX_EMU10KX.I.Wave3

AddInterface=%KSCAT_AUDIO%,%KSNAME_Wave4%,KX_EMU10KX.I.Wave4
AddInterface=%KSCAT_RENDER%,%KSNAME_Wave4%,KX_EMU10KX.I.Wave4
AddInterface=%KSCAT_CAPTURE%,%KSNAME_Wave4%,KX_EMU10KX.I.Wave4

AddInterface=%KSCAT_AUDIO%,%KSNAME_Topo1%,KX_EMU10KX.I.Topology1
AddInterface=%KSCAT_TOPOLOGY%,%KSNAME_Topo1%,KX_EMU10KX.I.Topology1
AddInterface=%KSCAT_AUDIO%,%KSNAME_Topo2%,KX_EMU10KX.I.Topology2
AddInterface=%KSCAT_TOPOLOGY%,%KSNAME_Topo2%,KX_EMU10KX.I.Topology2
AddInterface=%KSCAT_AUDIO%,%KSNAME_Topo3%,KX_EMU10KX.I.Topology3
AddInterface=%KSCAT_TOPOLOGY%,%KSNAME_Topo3%,KX_EMU10KX.I.Topology3
AddInterface=%KSCAT_AUDIO%,%KSNAME_Topo4%,KX_EMU10KX.I.Topology4
AddInterface=%KSCAT_TOPOLOGY%,%KSNAME_Topo4%,KX_EMU10KX.I.Topology4

AddInterface=%KSCAT_AUDIO%,%KSNAME_UART1%,KX_EMU10KX.I.UART1
AddInterface=%KSCAT_RENDER%,%KSNAME_UART1%,KX_EMU10KX.I.UART1
AddInterface=%KSCAT_CAPTURE%,%KSNAME_UART1%,KX_EMU10KX.I.UART1

AddInterface=%KSCAT_AUDIO%,%KSNAME_UART2%,KX_EMU10KX.I.UART2
AddInterface=%KSCAT_RENDER%,%KSNAME_UART2%,KX_EMU10KX.I.UART2
AddInterface=%KSCAT_CAPTURE%,%KSNAME_UART2%,KX_EMU10KX.I.UART2

AddInterface=%KSCAT_AUDIO%,%KSNAME_Synth1%,KX_EMU10KX.I.Synth1
AddInterface=%KSCAT_RENDER%,%KSNAME_Synth1%,KX_EMU10KX.I.Synth1
//AddInterface=%KSCAT_SYNTHESIZER%,%KSNAME_Synth1%,KX_EMU10KX.I.Synth1

AddInterface=%KSCAT_AUDIO%,%KSNAME_Synth2%,KX_EMU10KX.I.Synth2
AddInterface=%KSCAT_RENDER%,%KSNAME_Synth2%,KX_EMU10KX.I.Synth2
//AddInterface=%KSCAT_SYNTHESIZER%,%KSNAME_Synth2%,KX_EMU10KX.I.Synth2

AddInterface=%KSCAT_AUDIO%,%KSNAME_CTRL%,KX_EMU10KX.I.CTRL
AddInterface=%KSCAT_RENDER%,%KSNAME_CTRL%,KX_EMU10KX.I.CTRL
AddInterface=%KSCAT_CAPTURE%,%KSNAME_CTRL%,KX_EMU10KX.I.CTRL

[KX_EMU10KX.I.Wave0]
AddReg=KX_EMU10KX.I.Wave0.AddReg
[KX_EMU10KX.I.Wave0.AddReg]
HKR,,CLSID,,%Proxy.CLSID%
HKR,,FriendlyName,,%KX_EMU10KX.Wave0.szPname%
// FIXME HKR,,wMid,,"2"

[KX_EMU10KX.I.Wave1]
AddReg=KX_EMU10KX.I.Wave1.AddReg
[KX_EMU10KX.I.Wave1.AddReg]
HKR,,CLSID,,%Proxy.CLSID%
HKR,,FriendlyName,,%KX_EMU10KX.Wave1.szPname%
// FIXME HKR,,wMid,,"2"

[KX_EMU10KX.I.Wave2]
AddReg=KX_EMU10KX.I.Wave2.AddReg
[KX_EMU10KX.I.Wave2.AddReg]
HKR,,CLSID,,%Proxy.CLSID%
HKR,,FriendlyName,,%KX_EMU10KX.Wave2.szPname%
// FIXME HKR,,wMid,,"2"

[KX_EMU10KX.I.Wave3]
AddReg=KX_EMU10KX.I.Wave3.AddReg
[KX_EMU10KX.I.Wave3.AddReg]
HKR,,CLSID,,%Proxy.CLSID%
HKR,,FriendlyName,,%KX_EMU10KX.Wave3.szPname%
// FIXME HKR,,wMid,,"2"

[KX_EMU10KX.I.Wave4]
AddReg=KX_EMU10KX.I.Wave4.AddReg
[KX_EMU10KX.I.Wave4.AddReg]
HKR,,CLSID,,%Proxy.CLSID%
HKR,,FriendlyName,,%KX_EMU10KX.Wave4.szPname%
// FIXME HKR,,wMid,,"2"

[KX_EMU10KX.I.Topology1]
AddReg=KX_EMU10KX.I.Topo1.AddReg
[KX_EMU10KX.I.Topo1.AddReg]
HKR,,CLSID,,%Proxy.CLSID%
HKR,,FriendlyName,,%KX_EMU10KX.Topology1.szPname%

[KX_EMU10KX.I.Topology2]
AddReg=KX_EMU10KX.I.Topo2.AddReg
[KX_EMU10KX.I.Topo2.AddReg]
HKR,,CLSID,,%Proxy.CLSID%
HKR,,FriendlyName,,%KX_EMU10KX.Topology2.szPname%

[KX_EMU10KX.I.Topology3]
AddReg=KX_EMU10KX.I.Topo3.AddReg
[KX_EMU10KX.I.Topo3.AddReg]
HKR,,CLSID,,%Proxy.CLSID%
HKR,,FriendlyName,,%KX_EMU10KX.Topology3.szPname%

[KX_EMU10KX.I.Topology4]
AddReg=KX_EMU10KX.I.Topo4.AddReg
[KX_EMU10KX.I.Topo4.AddReg]
HKR,,CLSID,,%Proxy.CLSID%
HKR,,FriendlyName,,%KX_EMU10KX.Topology4.szPname%

[KX_EMU10KX.I.UART1]
AddReg=KX_EMU10KX.I.UART1.AddReg
[KX_EMU10KX.I.UART1.AddReg]
HKR,,CLSID,,%Proxy.CLSID%
HKR,,FriendlyName,,%KX_EMU10KX.UART1.szPname%

[KX_EMU10KX.I.UART2]
AddReg=KX_EMU10KX.I.UART2.AddReg
[KX_EMU10KX.I.UART2.AddReg]
HKR,,CLSID,,%Proxy.CLSID%
HKR,,FriendlyName,,%KX_EMU10KX.UART2.szPname%

[KX_EMU10KX.I.CTRL]
AddReg=KX_EMU10KX.I.CTRL.AddReg
[KX_EMU10KX.I.CTRL.AddReg]
HKR,,CLSID,,%Proxy.CLSID%
HKR,,FriendlyName,,%KX_EMU10KX.CTRL.szPname%

[KX_EMU10KX.I.Synth1]
AddReg=KX_EMU10KX.I.Synth1.AddReg
[KX_EMU10KX.I.Synth1.AddReg]
HKR,,CLSID,,%Proxy.CLSID%
HKR,,FriendlyName,,%KX_EMU10KX.Synth1.szPname%

[KX_EMU10KX.I.Synth2]
AddReg=KX_EMU10KX.I.Synth2.AddReg
[KX_EMU10KX.I.Synth2.AddReg]
HKR,,CLSID,,%Proxy.CLSID%
HKR,,FriendlyName,,%KX_EMU10KX.Synth2.szPname%

[KX_EMU10KX.NT.Services]
AddService = kxwdmdrv, 0x00000002, KX_EMU10KX_Service_Inst

[KX_EMU10KX_Service_Inst]
DisplayName    = %EMU10KX_SERVICE.DeviceDesc%
ServiceType    = 1
StartType      = 3
ErrorControl   = 1
ServiceBinary  = %10%\system32\drivers\kx.sys

[Strings]
; Consts
Proxy.CLSID="{17CCA71B-ECD7-11D0-B908-00A0C9223196}"
KSCAT_AUDIO="{6994AD04-93EF-11D0-A3CC-00A0C9223196}"
KSCAT_RENDER="{65E8773E-8F56-11D0-A3B9-00A0C9223196}"
KSCAT_CAPTURE="{65E8773D-8F56-11D0-A3B9-00A0C9223196}"
KSCAT_TOPOLOGY="{DDA54A40-1E4C-11D1-A050-405705C10000}"
KSCAT_SYNTHESIZER="{DFF220F3-F70F-11D0-B917-00A0C9223196}"

MediaCategories="SYSTEM\CurrentControlSet\Control\MediaCategories"

; Manufacturer
ProviderName=KX_COMPANY_NAME
MfgName="Creative Labs - kX Project"
DiskDescription="Eugene Gavrilov kX Driver Disk"

EMU10KX_SERVICE.DeviceDesc="kX WDM Driver Service"

KX_VERSION=KX_ASIO_VERSION

KX_EMU10KX.DeviceDesc1000="kX 10k1 Audio ("KX_ASIO_VERSION") - Generic"
KX_EMU10KX.DeviceDesc1001="kX 10k2 Audio ("KX_ASIO_VERSION") - Generic"
KX_EMU10KX.DeviceDesc1002="kX 10k2.5 Audio ("KX_ASIO_VERSION") - Generic"

; Device names (as in ControlPanel->Multimedia)
; Actually changed on-the-fly by WDM Driver
KX_EMU10KX.Wave0.szPname="kX Wave 0/1"
KX_EMU10KX.Wave1.szPname="kX Wave 2/3"
KX_EMU10KX.Wave2.szPname="kX Wave 4/5"
KX_EMU10KX.Wave3.szPname="kX Wave 6/7"
KX_EMU10KX.Wave4.szPname="kX Wave HQ"
KX_EMU10KX.Topology1.szPname="kX Mixer 0/1"
KX_EMU10KX.Topology2.szPname="kX Mixer 2/3"
KX_EMU10KX.Topology3.szPname="kX Mixer 4/5"
KX_EMU10KX.Topology4.szPname="kX Mixer 6/7"
KX_EMU10KX.UART1.szPname="kX UART"
KX_EMU10KX.UART2.szPname="kX UART2"
KX_EMU10KX.Synth1.szPname="kX Synth"
KX_EMU10KX.Synth2.szPname="kX Synth2"
KX_EMU10KX.CTRL.szPname="kX Control"

/* as in 'installsubdevice'/'parse_names' @wdm.cpp */
KSNAME_Wave0="kx_wave0"
KSNAME_Wave1="kx_wave1"
KSNAME_Wave2="kx_wave2"
KSNAME_Wave3="kx_wave3"
KSNAME_Wave4="kx_wave4"
KSNAME_UART1="kx_uart1"
KSNAME_UART2="kx_uart2"
KSNAME_Topo1="kx_topo1"
KSNAME_Topo2="kx_topo2"
KSNAME_Topo3="kx_topo3"
KSNAME_Topo4="kx_topo4"
KSNAME_Synth1="kx_synth1"
KSNAME_Synth2="kx_synth2"
KSNAME_CTRL="kx_ctrl"

; Device names 
; (as in Properties in ControlPanel->System) /* never used :) */
EMU10KX_MIDI="kX Synth Device"
EMU10KX_WAVE="kX Wave Device"
EMU10KX_MIXER="kX Mixer Device"
EMU10KX_AUX="kX Aux Device"

; Mixer localized strings/GUIDs

GUID.KX_MIXER="{1CCF2388-ACDF-44d7-ADC7-BEACCFAC0A13}" /* = TOPO_MASTER_MIXER_NAME */
GUID.KX_SYNTH1="{5DE34F5F-203F-4c2f-9183-24C4E83D2C07}" /* = TOPO_SYNTH1_NAME */
GUID.KX_SYNTH2="{4F675923-5339-44a9-8663-0229D070820D}" /* = TOPO_SYNTH2_NAME */
GUID.KX_RECIN="{A53B59C3-6F9D-464c-AFD6-2827C37BC85D}" /* = TOPO_RECIN_NAME */
GUID.KX_WAVEOUT01="{DB2E2B46-BAD6-4434-B595-4940469E1C8D}" /* = TOPO_WAVEOUT01_NAME */
GUID.KX_WAVEOUT23="{8731FE99-F22D-41f4-8731-B7429AF4C7D5}" /* = TOPO_WAVEOUT23_NAME */
GUID.KX_WAVEOUT45="{B00B8440-42A4-49f9-BD05-1B07A1418F6A}" /* = TOPO_WAVEOUT45_NAME */
GUID.KX_WAVEOUT67="{7BA22A9B-F39D-41dc-B07A-B33435EB85A0}" /* = TOPO_WAVEOUT67_NAME */
GUID.KX_WAVEOUTHQ="{21498b8a-0d88-41df-af60-546adab4c857}" /* = TOPO_WAVEOUTHQ_NAME */
GUID.KX_WAVEINHQ="{7694D02C-82D3-4686-A410-FFE472E746E1}" /* = TOPO_WAVEINHQ_NAME */
GUID.KX_WAVEIN="{FB6E34F3-A6E6-4292-B8B0-239CB57A7084}" /* = TOPO_WAVEIN_NAME */
GUID.KX_WAVEOUT01V="{B61A8F62-C6A6-4f08-82EC-761B0BE0E95A}" /* = TOPO_WAVEOUT01_VOLUME_NAME */
GUID.KX_WAVEOUT23V="{A8C232A3-D9D4-4ee7-80FE-1B3474D3842D}" /* = TOPO_WAVEOUT23_VOLUME_NAME */
GUID.KX_WAVEOUT45V="{48553D65-6D69-4b1c-8FE7-5E1B27AC2F0B}" /* = TOPO_WAVEOUT45_VOLUME_NAME */
GUID.KX_WAVEOUT67V="{6FE27FFB-4962-4205-86B0-9E009596FB09}" /* = TOPO_WAVEOUT67_VOLUME_NAME */
GUID.KX_WAVEOUTHQV="{c61ff61b-7cf4-48ba-b761-7385b2b71931}" /* = TOPO_WAVEOUTHQ_VOLUME_NAME */
GUID.KX_WAVEOUT01M="{940F06AD-FE39-4ac7-918A-54FC82B719AB}" /* = TOPO_WAVEOUT01_MUTE_NAME */
GUID.KX_WAVEOUT23M="{2E64C86F-03DD-4eca-B043-C8A9E5C3EC25}" /* = TOPO_WAVEOUT23_MUTE_NAME */
GUID.KX_WAVEOUT45M="{AC966F3B-D379-4796-B4FA-F305650E8FED}" /* = TOPO_WAVEOUT45_MUTE_NAME */
GUID.KX_WAVEOUT67M="{0F7B6182-9069-468b-B8F6-9FE7C38C1737}" /* = TOPO_WAVEOUT67_MUTE_NAME */
GUID.KX_WAVEOUTHQM="{577a1d96-e8ab-4f1a-8bd0-bdb3ecf2c155}" /* = TOPO_WAVEOUTHQ_MUTE_NAME */

GUID.KX_SYNTH1V="{F7EC0944-0D07-409a-89D2-82EDC2745CD0}"	/* = TOPO_SYNTH1_VOLUME_NAME */
GUID.KX_SYNTH1M="{37EAC9A0-DBA9-43d5-896D-56E51B38A2A3}" 	/* = TOPO_SYNTH1_MUTE_NAME */
GUID.KX_SYNTH2V="{4F06273E-E7E3-4628-9980-BEB59C64FC3C}"	/* = TOPO_SYNTH2_VOLUME_NAME */
GUID.KX_SYNTH2M="{A5569A8C-5DFA-4847-8E1F-2B16634E9187}" 	/* = TOPO_SYNTH2_MUTE_NAME */

GUID.KX_MASTERV="{D843FB71-4583-45b3-8AE1-94B0C8E18B71}"	/* = TOPO_MASTER_VOLUME_NAME */
GUID.KX_MASTERM="{2D859B5C-95CC-43e8-A182-490331785AE8}"	/* = TOPO_MASTER_MUTE_NAME */

GUID.KX_RECINV="{308B8581-7FA0-4705-B0B1-0ECEC943B4E4}"		/* = TOPO_RECIN_VOLUME_NAME */
GUID.KX_RECINM="{11F6CBB4-CE68-451f-BCAE-03460896C39B}"		/* = TOPO_RECIN_MUTE_NAME */

GUID.KX_UARTOUT="{715361EB-AF5C-41db-A123-CD3D7826C824}"	// KX_UARTOUT_NAME
GUID.KX_UARTIN="{EEFB700A-A28B-4f5b-B96B-DFE13A94EF4B}"		// KX_UARTIN_NAME
GUID.KX_UARTOUT2="{CA0C33B9-E1B2-4bfa-AC51-944774577AF5}"	// KX_UARTOUT2_NAME
GUID.KX_UARTIN2="{60D0D0D5-10D5-4400-8353-2FF0081AFF79}"	// KX_UARTIN2_NAME

GUID.KX_CTRLIN="{B78E66B5-2721-4616-B8D4-4E0155BA3A1C}"
GUID.KX_CTRLOUT="{0AE4BB4D-A590-4b67-B527-6565A4B53DBD}"

GUID.KX_AC3="{FDCAC90A-249C-4e0d-B829-A5FF8F123780}"		// WAVE_AC3_NODE_NAME

GUID.KX_RECMIXER="{243A0AAA-984D-44a0-9CE8-834E6A74EF6E}"
GUID.KX_WAVEOUTPUT="{68A80F46-9FDD-4831-8E9C-3E9A3BF12E12}"

GUID.KX_WAVEV="{3FD31A02-CAAE-4ed8-89C2-FF5CB392233D}"
GUID.KX_WAVEM="{B3B7F1E2-E7E8-4caa-B2CD-C4E2904F824B}"

GUID.KX_LINEIN="{8F492AA1-7CD4-43ea-A975-78CF4192FC4E}"
GUID.KX_MICIN="{322FE1A3-DC32-4d4e-8F27-EA15EF8669EA}"
GUID.KX_LINEIN_MUTE="{FE9305CA-8735-4804-A6A0-571457BC4B59}"
GUID.KX_MICIN_MUTE="{06F13537-ECBB-4e20-9938-C7964F880FA4}"

#include "interface/mixernames.h"

; Mixer names /* as in Mixer applet */
KX_MIXER_NAME=       _KX_MIXER_NAME
KX_SYNTH1_NAME=      _KX_SYNTH1_NAME
KX_SYNTH2_NAME=      _KX_SYNTH2_NAME
KX_RECIN_NAME=       _KX_RECIN_NAME
KX_WAVEOUT01_NAME=   _KX_WAVEOUT01_NAME
KX_WAVEOUT23_NAME=   _KX_WAVEOUT23_NAME
KX_WAVEOUT45_NAME=   _KX_WAVEOUT45_NAME
KX_WAVEOUT67_NAME=   _KX_WAVEOUT67_NAME
KX_WAVEOUTHQ_NAME=   _KX_WAVEOUTHQ_NAME
KX_WAVEINHQ_NAME=   _KX_WAVEINHQ_NAME
KX_WAVEOUT01V_NAME=  _KX_WAVEOUT01V_NAME
KX_WAVEOUT23V_NAME=  _KX_WAVEOUT23V_NAME
KX_WAVEOUT45V_NAME=  _KX_WAVEOUT45V_NAME
KX_WAVEOUT67V_NAME=  _KX_WAVEOUT67V_NAME
KX_WAVEOUTHQV_NAME=  _KX_WAVEOUTHQV_NAME
KX_WAVEOUT01M_NAME=  _KX_WAVEOUT01M_NAME
KX_WAVEOUT23M_NAME=  _KX_WAVEOUT23M_NAME
KX_WAVEOUT45M_NAME=  _KX_WAVEOUT45M_NAME
KX_WAVEOUT67M_NAME=  _KX_WAVEOUT67M_NAME
KX_WAVEOUTHQM_NAME=  _KX_WAVEOUTHQM_NAME

KX_WAVEIN_NAME=      _KX_WAVEIN_NAME
KX_SYNTH1V_NAME=     _KX_SYNTH1V_NAME
KX_SYNTH1M_NAME=     _KX_SYNTH1M_NAME
KX_SYNTH2V_NAME=     _KX_SYNTH2V_NAME
KX_SYNTH2M_NAME=     _KX_SYNTH2M_NAME
KX_MASTERV_NAME=     _KX_MASTERV_NAME
KX_MASTERM_NAME=     _KX_MASTERM_NAME
KX_RECINV_NAME=      _KX_RECINV_NAME
KX_RECINM_NAME=      _KX_RECINM_NAME
KX_UARTOUT_NAME=     _KX_UARTOUT_NAME
KX_UARTIN_NAME=      _KX_UARTIN_NAME
KX_CTRLOUT_NAME=     _KX_CTRLOUT_NAME
KX_CTRLIN_NAME=      _KX_CTRLIN_NAME
KX_UARTOUT2_NAME=    _KX_UARTOUT2_NAME
KX_UARTIN2_NAME=     _KX_UARTIN2_NAME
KX_AC3_NAME=         _KX_AC3_NAME
                                          
KX_RECMIXER_NAME=    _KX_RECMIXER_NAME
KX_WAVEOUTPUT_NAME=  _KX_WAVEOUTPUT_NAME
                                          
KX_WAVEV_NAME=       _KX_WAVEV_NAME
KX_WAVEM_NAME=       _KX_WAVEM_NAME
                                          
KX_LINEIN_NAME=      _KX_LINEIN_NAME
KX_MICIN_NAME=       _KX_MICIN_NAME
KX_LINEIN_MUTE_NAME= _KX_LINEIN_MUTE_NAME
KX_MICIN_MUTE_NAME=  _KX_MICIN_MUTE_NAME
