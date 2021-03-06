%ifndef __NASMX_KERNEL32_INC__
%define __NASMX_KERNEL32_INC__

IMPORT ActivateActCtx, 8
IMPORT AddAtomA, 4
IMPORT AddAtomW, 4
IMPORT AddConsoleAliasA, 12
IMPORT AddConsoleAliasW, 12
IMPORT AddLocalAlternateComputerNameA, 8
IMPORT AddLocalAlternateComputerNameW, 8
IMPORT AddRefActCtx, 4
IMPORT AddVectoredContinueHandler, 8
IMPORT AddVectoredExceptionHandler, 8
IMPORT AllocConsole, 0
IMPORT AllocateUserPhysicalPages, 12
IMPORT AreFileApisANSI, 0
IMPORT AssignProcessToJobObject, 8
IMPORT AttachConsole, 4
IMPORT BackupRead, 28
IMPORT BackupSeek, 24
IMPORT BackupWrite, 28
IMPORT Beep, 8
IMPORT BeginUpdateResourceA, 8
IMPORT BeginUpdateResourceW, 8
IMPORT BindIoCompletionCallback, 12
IMPORT BuildCommDCBA, 8
IMPORT BuildCommDCBAndTimeoutsA, 12
IMPORT BuildCommDCBAndTimeoutsW, 12
IMPORT BuildCommDCBW, 8
IMPORT CallNamedPipeA, 28
IMPORT CallNamedPipeW, 28
IMPORT CancelDeviceWakeupRequest, 4
IMPORT CancelIo, 4
IMPORT CancelTimerQueueTimer, 8
IMPORT CancelWaitableTimer, 4
IMPORT ChangeTimerQueueTimer, 16
IMPORT CheckNameLegalDOS8Dot3A, 20
IMPORT CheckNameLegalDOS8Dot3W, 20
IMPORT CheckRemoteDebuggerPresent, 8
IMPORT ClearCommBreak, 4
IMPORT ClearCommError, 12
IMPORT CloseHandle, 4
IMPORT CommConfigDialogA, 12
IMPORT CommConfigDialogW, 12
IMPORT CompareFileTime, 8
IMPORT ConnectNamedPipe, 8
IMPORT ContinueDebugEvent, 12
IMPORT ConvertFiberToThread, 0
IMPORT ConvertThreadToFiber, 4
IMPORT ConvertThreadToFiberEx, 8
IMPORT CopyFileA, 12
IMPORT CopyFileExA, 24
IMPORT CopyFileExW, 24
IMPORT CopyFileW, 12
IMPORT CreateActCtxA, 4
IMPORT CreateActCtxW, 4
IMPORT CreateConsoleScreenBuffer, 20
IMPORT CreateDirectoryA, 8
IMPORT CreateDirectoryExA, 12
IMPORT CreateDirectoryExW, 12
IMPORT CreateDirectoryW, 8
IMPORT CreateEventA, 16
IMPORT CreateEventW, 16
IMPORT CreateFiber, 12
IMPORT CreateFiberEx, 20
IMPORT CreateFileA, 28
IMPORT CreateFileMappingA, 24
IMPORT CreateFileMappingW, 24
IMPORT CreateFileW, 28
IMPORT CreateHardLinkA, 12
IMPORT CreateHardLinkW, 12
IMPORT CreateIoCompletionPort, 16
IMPORT CreateJobObjectA, 8
IMPORT CreateJobObjectW, 8
IMPORT CreateJobSet, 12
IMPORT CreateMailslotA, 16
IMPORT CreateMailslotW, 16
IMPORT CreateMemoryResourceNotification, 4
IMPORT CreateMutexA, 12
IMPORT CreateMutexW, 12
IMPORT CreateNamedPipeA, 32
IMPORT CreateNamedPipeW, 32
IMPORT CreatePipe, 16
IMPORT CreateProcessA, 40
IMPORT CreateProcessW, 40
IMPORT CreateRemoteThread, 28
IMPORT CreateSemaphoreA, 16
IMPORT CreateSemaphoreW, 16
IMPORT CreateTapePartition, 16
IMPORT CreateThread, 24
IMPORT CreateTimerQueue, 0
IMPORT CreateTimerQueueTimer, 28
IMPORT CreateToolhelp32Snapshot, 8
IMPORT CreateWaitableTimerA, 12
IMPORT CreateWaitableTimerW, 12
IMPORT DeactivateActCtx, 8
IMPORT DebugActiveProcess, 4
IMPORT DebugActiveProcessStop, 4
IMPORT DebugBreak, 0
IMPORT DebugBreakProcess, 4
IMPORT DebugSetProcessKillOnExit, 4
IMPORT DecodePointer, 4
IMPORT DecodeSystemPointer, 4
IMPORT DefineDosDeviceA, 12
IMPORT DefineDosDeviceW, 12
IMPORT DeleteAtom, 4
IMPORT DeleteCriticalSection, 4
IMPORT DeleteFiber, 4
IMPORT DeleteFileA, 4
IMPORT DeleteFileW, 4
IMPORT DeleteTimerQueue, 4
IMPORT DeleteTimerQueueEx, 8
IMPORT DeleteTimerQueueTimer, 12
IMPORT DeleteVolumeMountPointA, 4
IMPORT DeleteVolumeMountPointW, 4
IMPORT DeviceIoControl, 32
IMPORT DisableThreadLibraryCalls, 4
IMPORT DisconnectNamedPipe, 4
IMPORT DnsHostnameToComputerNameA, 12
IMPORT DnsHostnameToComputerNameW, 12
IMPORT DosDateTimeToFileTime, 12
IMPORT DuplicateHandle, 28
IMPORT EncodePointer, 4
IMPORT EncodeSystemPointer, 4
IMPORT EndUpdateResourceA, 8
IMPORT EndUpdateResourceW, 8
IMPORT EnterCriticalSection, 4
IMPORT EnumResourceLanguagesA, 20
IMPORT EnumResourceLanguagesW, 20
IMPORT EnumResourceNamesA, 16
IMPORT EnumResourceNamesW, 16
IMPORT EnumResourceTypesA, 12
IMPORT EnumResourceTypesW, 12
IMPORT EnumSystemFirmwareTables, 12
IMPORT EnumerateLocalComputerNamesA, 16
IMPORT EnumerateLocalComputerNamesW, 16
IMPORT EraseTape, 12
IMPORT EscapeCommFunction, 8
IMPORT ExitProcess, 4
IMPORT ExitThread, 4
IMPORT ExpandEnvironmentStringsA, 12
IMPORT ExpandEnvironmentStringsW, 12
IMPORT FatalAppExitA, 8
IMPORT FatalAppExitW, 8
IMPORT FatalExit, 4
IMPORT FileTimeToDosDateTime, 12
IMPORT FileTimeToLocalFileTime, 8
IMPORT FileTimeToSystemTime, 8
IMPORT FillConsoleOutputAttribute, 20
IMPORT FillConsoleOutputCharacterA, 20
IMPORT FillConsoleOutputCharacterW, 20
IMPORT FindActCtxSectionGuid, 20
IMPORT FindActCtxSectionStringA, 20
IMPORT FindActCtxSectionStringW, 20
IMPORT FindAtomA, 4
IMPORT FindAtomW, 4
IMPORT FindClose, 4
IMPORT FindCloseChangeNotification, 4
IMPORT FindFirstChangeNotificationA, 12
IMPORT FindFirstChangeNotificationW, 12
IMPORT FindFirstFileA, 8
IMPORT FindFirstFileExA, 24
IMPORT FindFirstFileExW, 24
IMPORT FindFirstFileW, 8
IMPORT FindFirstStreamW, 16
IMPORT FindFirstVolumeA, 8
IMPORT FindFirstVolumeMountPointA, 12
IMPORT FindFirstVolumeMountPointW, 12
IMPORT FindFirstVolumeW, 8
IMPORT FindNextChangeNotification, 4
IMPORT FindNextFileA, 8
IMPORT FindNextFileW, 8
IMPORT FindNextStreamW, 8
IMPORT FindNextVolumeA, 12
IMPORT FindNextVolumeMountPointA, 12
IMPORT FindNextVolumeMountPointW, 12
IMPORT FindNextVolumeW, 12
IMPORT FindResourceA, 12
IMPORT FindResourceExA, 16
IMPORT FindResourceExW, 16
IMPORT FindResourceW, 12
IMPORT FindVolumeClose, 4
IMPORT FindVolumeMountPointClose, 4
IMPORT FlsAlloc, 4
IMPORT FlsFree, 4
IMPORT FlsGetValue, 4
IMPORT FlsSetValue, 8
IMPORT FlushConsoleInputBuffer, 4
IMPORT FlushFileBuffers, 4
IMPORT FlushInstructionCache, 12
IMPORT FlushViewOfFile, 8
IMPORT FormatMessageA, 28
IMPORT FormatMessageW, 28
IMPORT FreeConsole, 0
IMPORT FreeEnvironmentStringsA, 4
IMPORT FreeEnvironmentStringsW, 4
IMPORT FreeLibrary, 4
IMPORT FreeLibraryAndExitThread, 8
IMPORT FreeResource, 4
IMPORT FreeUserPhysicalPages, 12
IMPORT GenerateConsoleCtrlEvent, 8
IMPORT GetACP, 0
IMPORT GetAtomNameA, 12
IMPORT GetAtomNameW, 12
IMPORT GetBinaryTypeA, 8
IMPORT GetBinaryTypeW, 8
IMPORT GetCommConfig, 12
IMPORT GetCommMask, 8
IMPORT GetCommModemStatus, 8
IMPORT GetCommProperties, 8
IMPORT GetCommState, 8
IMPORT GetCommTimeouts, 8
IMPORT GetCommandLineA, 0
IMPORT GetCommandLineW, 0
IMPORT GetCompressedFileSizeA, 8
IMPORT GetCompressedFileSizeW, 8
IMPORT GetComputerNameA, 8
IMPORT GetComputerNameExA, 12
IMPORT GetComputerNameExW, 12
IMPORT GetComputerNameW, 8
IMPORT GetConsoleAliasA, 16
IMPORT GetConsoleAliasExesA, 8
IMPORT GetConsoleAliasExesLengthA, 0
IMPORT GetConsoleAliasExesLengthW, 0
IMPORT GetConsoleAliasExesW, 8
IMPORT GetConsoleAliasW, 16
IMPORT GetConsoleAliasesA, 12
IMPORT GetConsoleAliasesLengthA, 4
IMPORT GetConsoleAliasesLengthW, 4
IMPORT GetConsoleAliasesW, 12
IMPORT GetConsoleCP, 0
IMPORT GetConsoleCursorInfo, 8
IMPORT GetConsoleDisplayMode, 4
IMPORT GetConsoleFontSize, 8
IMPORT GetConsoleMode, 8
IMPORT GetConsoleOutputCP, 0
IMPORT GetConsoleProcessList, 8
IMPORT GetConsoleScreenBufferInfo, 8
IMPORT GetConsoleSelectionInfo, 4
IMPORT GetConsoleTitleA, 8
IMPORT GetConsoleTitleW, 8
IMPORT GetConsoleWindow, 0
IMPORT GetCurrentActCtx, 4
IMPORT GetCurrentConsoleFont, 12
IMPORT GetCurrentDirectoryA, 8
IMPORT GetCurrentDirectoryW, 8
IMPORT GetCurrentProcess, 0
IMPORT GetCurrentProcessId, 0
IMPORT GetCurrentProcessorNumber, 0
IMPORT GetCurrentThread, 0
IMPORT GetCurrentThreadId, 0
IMPORT GetDefaultCommConfigA, 12
IMPORT GetDefaultCommConfigW, 12
IMPORT GetDevicePowerState, 8
IMPORT GetDiskFreeSpaceA, 20
IMPORT GetDiskFreeSpaceExA, 16
IMPORT GetDiskFreeSpaceExW, 16
IMPORT GetDiskFreeSpaceW, 20
IMPORT GetDllDirectoryA, 8
IMPORT GetDllDirectoryW, 8
IMPORT GetDriveTypeA, 4
IMPORT GetDriveTypeW, 4
IMPORT GetEnvironmentStringsA, 0
IMPORT GetEnvironmentStringsW, 0
IMPORT GetEnvironmentVariableA, 12
IMPORT GetEnvironmentVariableW, 12
IMPORT GetExitCodeProcess, 8
IMPORT GetExitCodeThread, 8
IMPORT GetFileAttributesA, 4
IMPORT GetFileAttributesExA, 12
IMPORT GetFileAttributesExW, 12
IMPORT GetFileAttributesW, 4
IMPORT GetFileInformationByHandle, 8
IMPORT GetFileSize, 8
IMPORT GetFileSizeEx, 8
IMPORT GetFileTime, 16
IMPORT GetFileType, 4
IMPORT GetFirmwareEnvironmentVariableA, 16
IMPORT GetFirmwareEnvironmentVariableW, 16
IMPORT GetFullPathNameA, 16
IMPORT GetFullPathNameW, 16
IMPORT GetHandleInformation, 8
IMPORT GetLargePageMinimum, 0
IMPORT GetLargestConsoleWindowSize, 4
IMPORT GetLastError, 0
IMPORT GetLocalTime, 4
IMPORT GetLogicalDriveStringsA, 8
IMPORT GetLogicalDriveStringsW, 8
IMPORT GetLogicalDrives, 0
IMPORT GetLogicalProcessorInformation, 8
IMPORT GetLongPathNameA, 12
IMPORT GetLongPathNameW, 12
IMPORT GetMailslotInfo, 20
IMPORT GetModuleFileNameA, 12
IMPORT GetModuleFileNameW, 12
IMPORT GetModuleHandleA, 4
IMPORT GetModuleHandleExA, 12
IMPORT GetModuleHandleExW, 12
IMPORT GetModuleHandleW, 4
IMPORT GetNamedPipeHandleStateA, 28
IMPORT GetNamedPipeHandleStateW, 28
IMPORT GetNamedPipeInfo, 20
IMPORT GetNativeSystemInfo, 4
IMPORT GetNumaAvailableMemoryNode, 8
IMPORT GetNumaHighestNodeNumber, 4
IMPORT GetNumaNodeProcessorMask, 8
IMPORT GetNumaProcessorNode, 8
IMPORT GetNumberOfConsoleInputEvents, 8
IMPORT GetNumberOfConsoleMouseButtons, 4
IMPORT GetOEMCP, 0
IMPORT GetOverlappedResult, 16
IMPORT GetPriorityClass, 4
IMPORT GetPrivateProfileIntA, 16
IMPORT GetPrivateProfileIntW, 16
IMPORT GetPrivateProfileSectionA, 16
IMPORT GetPrivateProfileSectionNamesA, 12
IMPORT GetPrivateProfileSectionNamesW, 12
IMPORT GetPrivateProfileSectionW, 16
IMPORT GetPrivateProfileStringA, 24
IMPORT GetPrivateProfileStringW, 24
IMPORT GetPrivateProfileStructA, 20
IMPORT GetPrivateProfileStructW, 20
IMPORT GetProcAddress, 8
IMPORT GetProcessAffinityMask, 12
IMPORT GetProcessHandleCount, 8
IMPORT GetProcessHeap, 0
IMPORT GetProcessHeaps, 8
IMPORT GetProcessId, 4
IMPORT GetProcessIdOfThread, 4
IMPORT GetProcessIoCounters, 8
IMPORT GetProcessPriorityBoost, 8
IMPORT GetProcessShutdownParameters, 8
IMPORT GetProcessTimes, 20
IMPORT GetProcessVersion, 4
IMPORT GetProcessWorkingSetSize, 12
IMPORT GetProcessWorkingSetSizeEx, 16
IMPORT GetProfileIntA, 12
IMPORT GetProfileIntW, 12
IMPORT GetProfileSectionA, 12
IMPORT GetProfileSectionW, 12
IMPORT GetProfileStringA, 20
IMPORT GetProfileStringW, 20
IMPORT GetQueuedCompletionStatus, 20
IMPORT GetShortPathNameA, 12
IMPORT GetShortPathNameW, 12
IMPORT GetStartupInfoA, 4
IMPORT GetStartupInfoW, 4
IMPORT GetStdHandle, 4
IMPORT GetSystemDefaultLCID, 0
IMPORT GetSystemDirectoryA, 8
IMPORT GetSystemDirectoryW, 8
IMPORT GetSystemFileCacheSize, 12
IMPORT GetSystemFirmwareTable, 16
IMPORT GetSystemInfo, 4
IMPORT GetSystemPowerStatus, 4
IMPORT GetSystemRegistryQuota, 8
IMPORT GetSystemTime, 4
IMPORT GetSystemTimeAdjustment, 12
IMPORT GetSystemTimeAsFileTime, 4
IMPORT GetSystemTimes, 12
IMPORT GetSystemWindowsDirectoryA, 8
IMPORT GetSystemWindowsDirectoryW, 8
IMPORT GetSystemWow64DirectoryA, 8
IMPORT GetSystemWow64DirectoryW, 8
IMPORT GetTapeParameters, 16
IMPORT GetTapePosition, 20
IMPORT GetTapeStatus, 4
IMPORT GetTempFileNameA, 16
IMPORT GetTempFileNameW, 16
IMPORT GetTempPathA, 8
IMPORT GetTempPathW, 8
IMPORT GetThreadContext, 8
IMPORT GetThreadIOPendingFlag, 8
IMPORT GetThreadId, 4
IMPORT GetThreadPriority, 4
IMPORT GetThreadPriorityBoost, 8
IMPORT GetThreadSelectorEntry, 12
IMPORT GetThreadTimes, 20
IMPORT GetTickCount, 0
IMPORT GetTimeZoneInformation, 4
IMPORT GetUserDefaultUILanguage, 0
IMPORT GetVersion, 0
IMPORT GetVersionExA, 4
IMPORT GetVersionExW, 4
IMPORT GetVolumeInformationA, 32
IMPORT GetVolumeInformationW, 32
IMPORT GetVolumeNameForVolumeMountPointA, 12
IMPORT GetVolumeNameForVolumeMountPointW, 12
IMPORT GetVolumePathNameA, 12
IMPORT GetVolumePathNameW, 12
IMPORT GetVolumePathNamesForVolumeNameA, 16
IMPORT GetVolumePathNamesForVolumeNameW, 16
IMPORT GetWindowsDirectoryA, 8
IMPORT GetWindowsDirectoryW, 8
IMPORT GetWriteWatch, 24
IMPORT GlobalAddAtomA, 4
IMPORT GlobalAddAtomW, 4
IMPORT GlobalAlloc, 8
IMPORT GlobalCompact, 4
IMPORT GlobalDeleteAtom, 4
IMPORT GlobalFindAtomA, 4
IMPORT GlobalFindAtomW, 4
IMPORT GlobalFix, 4
IMPORT GlobalFlags, 4
IMPORT GlobalFree, 4
IMPORT GlobalGetAtomNameA, 12
IMPORT GlobalGetAtomNameW, 12
IMPORT GlobalHandle, 4
IMPORT GlobalLock, 4
IMPORT GlobalMemoryStatus, 4
IMPORT GlobalMemoryStatusEx, 4
IMPORT GlobalReAlloc, 12
IMPORT GlobalSize, 4
IMPORT GlobalUnWire, 4
IMPORT GlobalUnfix, 4
IMPORT GlobalUnlock, 4
IMPORT GlobalWire, 4
IMPORT Heap32First, 12
IMPORT Heap32ListFirst, 8
IMPORT Heap32ListNext, 8
IMPORT Heap32Next, 4
IMPORT HeapAlloc, 12
IMPORT HeapCompact, 8
IMPORT HeapCreate, 12
IMPORT HeapDestroy, 4
IMPORT HeapFree, 12
IMPORT HeapLock, 4
IMPORT HeapQueryInformation, 20
IMPORT HeapReAlloc, 16
IMPORT HeapSetInformation, 16
IMPORT HeapSize, 12
IMPORT HeapUnlock, 4
IMPORT HeapValidate, 12
IMPORT HeapWalk, 8
IMPORT InitAtomTable, 4
IMPORT InitializeCriticalSection, 4
IMPORT InitializeCriticalSectionAndSpinCount, 8
IMPORT InitializeSListHead, 4
IMPORT InterlockedCompareExchange64, 20
IMPORT InterlockedCompareExchange, 12
IMPORT InterlockedDecrement, 4
IMPORT InterlockedExchange, 8
IMPORT InterlockedExchangeAdd, 8
IMPORT InterlockedFlushSList, 4
IMPORT InterlockedIncrement, 4
IMPORT InterlockedPopEntrySList, 4
IMPORT InterlockedPushEntrySList, 8
IMPORT IsBadCodePtr, 4
IMPORT IsBadHugeReadPtr, 8
IMPORT IsBadHugeWritePtr, 8
IMPORT IsBadReadPtr, 8
IMPORT IsBadStringPtrA, 8
IMPORT IsBadStringPtrW, 8
IMPORT IsBadWritePtr, 8
IMPORT IsDBCSLeadByte, 4
IMPORT IsDBCSLeadByteEx, 8
IMPORT IsDebuggerPresent, 0
IMPORT IsProcessInJob, 12
IMPORT IsProcessorFeaturePresent, 4
IMPORT IsSystemResumeAutomatic, 0
IMPORT IsValidCodePage, 4
IMPORT IsWow64Process, 8
IMPORT LeaveCriticalSection, 4
IMPORT LoadLibraryA, 4
IMPORT LoadLibraryExA, 12
IMPORT LoadLibraryExW, 12
IMPORT LoadLibraryW, 4
IMPORT LoadModule, 8
IMPORT LoadResource, 8
IMPORT LocalAlloc, 8
IMPORT LocalCompact, 4
IMPORT LocalFileTimeToFileTime, 8
IMPORT LocalFlags, 4
IMPORT LocalFree, 4
IMPORT LocalHandle, 4
IMPORT LocalLock, 4
IMPORT LocalReAlloc, 12
IMPORT LocalShrink, 8
IMPORT LocalSize, 4
IMPORT LocalUnlock, 4
IMPORT LockFile, 20
IMPORT LockFileEx, 24
IMPORT LockResource, 4
IMPORT MapUserPhysicalPages, 12
IMPORT MapUserPhysicalPagesScatter, 12
IMPORT MapViewOfFile, 20
IMPORT MapViewOfFileEx, 24
IMPORT Module32First, 8
IMPORT Module32FirstW, 8
IMPORT Module32Next, 8
IMPORT Module32NextW, 8
IMPORT MoveFileA, 8
IMPORT MoveFileExA, 12
IMPORT MoveFileExW, 12
IMPORT MoveFileW, 8
IMPORT MoveFileWithProgressA, 20
IMPORT MoveFileWithProgressW, 20
IMPORT MulDiv, 12
IMPORT MultiByteToWideChar, 24
IMPORT NeedCurrentDirectoryForExePathA, 4
IMPORT NeedCurrentDirectoryForExePathW, 4
IMPORT OpenEventA, 12
IMPORT OpenEventW, 12
IMPORT OpenFile, 12
IMPORT OpenFileMappingA, 12
IMPORT OpenFileMappingW, 12
IMPORT OpenJobObjectA, 12
IMPORT OpenJobObjectW, 12
IMPORT OpenMutexA, 12
IMPORT OpenMutexW, 12
IMPORT OpenProcess, 12
IMPORT OpenSemaphoreA, 12
IMPORT OpenSemaphoreW, 12
IMPORT OpenThread, 12
IMPORT OpenWaitableTimerA, 12
IMPORT OpenWaitableTimerW, 12
IMPORT OutputDebugStringA, 4
IMPORT OutputDebugStringW, 4
IMPORT PeekConsoleInputA, 16
IMPORT PeekConsoleInputW, 16
IMPORT PeekNamedPipe, 24
IMPORT PostQueuedCompletionStatus, 16
IMPORT PrepareTape, 12
IMPORT Process32First, 8
IMPORT Process32FirstW, 8
IMPORT Process32Next, 8
IMPORT Process32NextW, 8
IMPORT ProcessIdToSessionId, 8
IMPORT PulseEvent, 4
IMPORT PurgeComm, 8
IMPORT QueryActCtxW, 28
IMPORT QueryDepthSList, 4
IMPORT QueryDosDeviceA, 12
IMPORT QueryDosDeviceW, 12
IMPORT QueryInformationJobObject, 20
IMPORT QueryMemoryResourceNotification, 8
IMPORT QueryPerformanceCounter, 4
IMPORT QueryPerformanceFrequency, 4
IMPORT QueueUserAPC, 12
IMPORT QueueUserWorkItem, 12
IMPORT RaiseException, 16
IMPORT ReOpenFile, 16
IMPORT ReadConsoleA, 20
IMPORT ReadConsoleInputA, 16
IMPORT ReadConsoleInputW, 16
IMPORT ReadConsoleOutputA, 20
IMPORT ReadConsoleOutputAttribute, 20
IMPORT ReadConsoleOutputCharacterA, 20
IMPORT ReadConsoleOutputCharacterW, 20
IMPORT ReadConsoleOutputW, 20
IMPORT ReadConsoleW, 20
IMPORT ReadDirectoryChangesW, 32
IMPORT ReadFile, 20
IMPORT ReadFileEx, 20
IMPORT ReadFileScatter, 20
IMPORT ReadProcessMemory, 20
IMPORT RegisterWaitForSingleObject, 24
IMPORT RegisterWaitForSingleObjectEx, 20
IMPORT ReleaseActCtx, 4
IMPORT ReleaseMutex, 4
IMPORT ReleaseSemaphore, 12
IMPORT RemoveDirectoryA, 4
IMPORT RemoveDirectoryW, 4
IMPORT RemoveLocalAlternateComputerNameA, 8
IMPORT RemoveLocalAlternateComputerNameW, 8
IMPORT RemoveVectoredContinueHandler, 4
IMPORT RemoveVectoredExceptionHandler, 4
IMPORT ReplaceFileA, 24
IMPORT ReplaceFileW, 24
IMPORT RequestDeviceWakeup, 4
IMPORT RequestWakeupLatency, 4
IMPORT ResetEvent, 4
IMPORT ResetWriteWatch, 8
IMPORT RestoreLastError, 4
IMPORT ResumeThread, 4
IMPORT RtlCaptureContext, 4
IMPORT RtlCaptureStackBackTrace, 16
IMPORT RtlFillMemory, 12
IMPORT RtlMoveMemory, 12
IMPORT RtlUnwind, 16
IMPORT RtlZeroMemory, 8
IMPORT ScrollConsoleScreenBufferA, 20
IMPORT ScrollConsoleScreenBufferW, 20
IMPORT SearchPathA, 24
IMPORT SearchPathW, 24
IMPORT SetCommBreak, 4
IMPORT SetCommConfig, 12
IMPORT SetCommMask, 8
IMPORT SetCommState, 8
IMPORT SetCommTimeouts, 8
IMPORT SetComputerNameA, 4
IMPORT SetComputerNameExA, 8
IMPORT SetComputerNameExW, 8
IMPORT SetComputerNameW, 4
IMPORT SetConsoleActiveScreenBuffer, 4
IMPORT SetConsoleCP, 4
IMPORT SetConsoleCtrlHandler, 8
IMPORT SetConsoleCursor, 8
IMPORT SetConsoleCursorInfo, 8
IMPORT SetConsoleCursorPosition, 8
IMPORT SetConsoleMode, 8
IMPORT SetConsoleOutputCP, 4
IMPORT SetConsoleScreenBufferSize, 8
IMPORT SetConsoleTextAttribute, 8
IMPORT SetConsoleTitleA, 4
IMPORT SetConsoleTitleW, 4
IMPORT SetConsoleWindowInfo, 12
IMPORT SetCriticalSectionSpinCount, 8
IMPORT SetCurrentDirectoryA, 4
IMPORT SetCurrentDirectoryW, 4
IMPORT SetDefaultCommConfigA, 12
IMPORT SetDefaultCommConfigW, 12
IMPORT SetDllDirectoryA, 4
IMPORT SetDllDirectoryW, 4
IMPORT SetEndOfFile, 4
IMPORT SetEnvironmentStringsA, 4
IMPORT SetEnvironmentStringsW, 4
IMPORT SetEnvironmentVariableA, 8
IMPORT SetEnvironmentVariableW, 8
IMPORT SetErrorMode, 4
IMPORT SetEvent, 4
IMPORT SetFileApisToANSI, 0
IMPORT SetFileApisToOEM, 0
IMPORT SetFileAttributesA, 8
IMPORT SetFileAttributesW, 8
IMPORT SetFilePointer, 16
IMPORT SetFilePointerEx, 20
IMPORT SetFileShortNameA, 8
IMPORT SetFileShortNameW, 8
IMPORT SetFileTime, 16
IMPORT SetFileValidData, 12
IMPORT SetFirmwareEnvironmentVariableA, 16
IMPORT SetFirmwareEnvironmentVariableW, 16
IMPORT SetHandleCount, 4
IMPORT SetHandleInformation, 12
IMPORT SetInformationJobObject, 16
IMPORT SetLastError, 4
IMPORT SetLocalPrimaryComputerNameA, 8
IMPORT SetLocalPrimaryComputerNameW, 8
IMPORT SetLocalTime, 4
IMPORT SetMailslotInfo, 8
IMPORT SetMessageWaitingIndicator, 8
IMPORT SetNamedPipeHandleState, 16
IMPORT SetPriorityClass, 8
IMPORT SetProcessAffinityMask, 8
IMPORT SetProcessPriorityBoost, 8
IMPORT SetProcessShutdownParameters, 8
IMPORT SetProcessWorkingSetSize, 12
IMPORT SetProcessWorkingSetSizeEx, 16
IMPORT SetStdHandle, 8
IMPORT SetSystemFileCacheSize, 12
IMPORT SetSystemPowerState, 8
IMPORT SetSystemTime, 4
IMPORT SetSystemTimeAdjustment, 8
IMPORT SetTapeParameters, 12
IMPORT SetTapePosition, 24
IMPORT SetThreadAffinityMask, 8
IMPORT SetThreadContext, 8
IMPORT SetThreadExecutionState, 4
IMPORT SetThreadIdealProcessor, 8
IMPORT SetThreadPriority, 8
IMPORT SetThreadPriorityBoost, 8
IMPORT SetThreadStackGuarantee, 4
IMPORT SetTimeZoneInformation, 4
IMPORT SetTimerQueueTimer, 24
IMPORT SetUnhandledExceptionFilter, 4
IMPORT SetVolumeLabelA, 8
IMPORT SetVolumeLabelW, 8
IMPORT SetVolumeMountPointA, 8
IMPORT SetVolumeMountPointW, 8
IMPORT SetWaitableTimer, 24
IMPORT SetupComm, 12
IMPORT SignalObjectAndWait, 16
IMPORT SizeofResource, 8
IMPORT Sleep, 4
IMPORT SleepEx, 8
IMPORT SuspendThread, 4
IMPORT SwitchToFiber, 4
IMPORT SwitchToThread, 0
IMPORT SystemTimeToFileTime, 8
IMPORT SystemTimeToTzSpecificLocalTime, 12
IMPORT TerminateJobObject, 8
IMPORT TerminateProcess, 8
IMPORT TerminateThread, 8
IMPORT Thread32First, 8
IMPORT Thread32Next, 8
IMPORT TlsAlloc, 0
IMPORT TlsFree, 4
IMPORT TlsGetValue, 4
IMPORT TlsSetValue, 8
IMPORT Toolhelp32ReadProcessMemory, 20
IMPORT TransactNamedPipe, 28
IMPORT TransmitCommChar, 8
IMPORT TryEnterCriticalSection, 4
IMPORT TzSpecificLocalTimeToSystemTime, 12
IMPORT UnhandledExceptionFilter, 4
IMPORT UnlockFile, 20
IMPORT UnlockFileEx, 20
IMPORT UnmapViewOfFile, 4
IMPORT UnregisterWait, 4
IMPORT UnregisterWaitEx, 8
IMPORT UpdateResourceA, 24
IMPORT UpdateResourceW, 24
IMPORT VerLanguageNameA, 12
IMPORT VerLanguageNameW, 12
IMPORT VerSetConditionMask, 16
IMPORT VerifyVersionInfoA, 16
IMPORT VerifyVersionInfoW, 16
IMPORT VirtualAlloc, 16
IMPORT VirtualAllocEx, 20
IMPORT VirtualFree, 12
IMPORT VirtualFreeEx, 16
IMPORT VirtualLock, 8
IMPORT VirtualProtect, 16
IMPORT VirtualProtectEx, 20
IMPORT VirtualQuery, 12
IMPORT VirtualQueryEx, 16
IMPORT VirtualUnlock, 8
IMPORT WTSGetActiveConsoleSessionId, 0
IMPORT WaitCommEvent, 12
IMPORT WaitForDebugEvent, 8
IMPORT WaitForMultipleObjects, 16
IMPORT WaitForMultipleObjectsEx, 20
IMPORT WaitForSingleObject, 8
IMPORT WaitForSingleObjectEx, 12
IMPORT WaitNamedPipeA, 8
IMPORT WaitNamedPipeW, 8
IMPORT WideCharToMultiByte, 32
IMPORT WinExec, 8
IMPORT Wow64DisableWow64FsRedirection, 4
IMPORT Wow64EnableWow64FsRedirection, 4
IMPORT Wow64RevertWow64FsRedirection, 4
IMPORT WriteConsoleA, 20
IMPORT WriteConsoleInputA, 16
IMPORT WriteConsoleInputW, 16
IMPORT WriteConsoleOutputA, 20
IMPORT WriteConsoleOutputAttribute, 20
IMPORT WriteConsoleOutputCharacterA, 20
IMPORT WriteConsoleOutputCharacterW, 20
IMPORT WriteConsoleOutputW, 20
IMPORT WriteConsoleW, 20
IMPORT WriteFile, 20
IMPORT WriteFileEx, 20
IMPORT WriteFileGather, 20
IMPORT WritePrivateProfileSectionA, 12
IMPORT WritePrivateProfileSectionW, 12
IMPORT WritePrivateProfileStringA, 16
IMPORT WritePrivateProfileStringW, 16
IMPORT WritePrivateProfileStructA, 20
IMPORT WritePrivateProfileStructW, 20
IMPORT WriteProcessMemory, 20
IMPORT WriteProfileSectionA, 8
IMPORT WriteProfileSectionW, 8
IMPORT WriteProfileStringA, 12
IMPORT WriteProfileStringW, 12
IMPORT WriteTapemark, 16
IMPORT ZombifyActCtx, 4
IMPORT _hread, 12
IMPORT _hwrite, 12
IMPORT _lclose, 4
IMPORT _lcreat, 8
IMPORT _llseek, 12
IMPORT _lopen, 8
IMPORT _lread, 12
IMPORT _lwrite, 12
IMPORT lstrcatA, 8
IMPORT lstrcatW, 8
IMPORT lstrcmpA, 8
IMPORT lstrcmpW, 8
IMPORT lstrcmpiA, 8
IMPORT lstrcmpiW, 8
IMPORT lstrcpyA, 8
IMPORT lstrcpyW, 8
IMPORT lstrcpynA, 12
IMPORT lstrcpynW, 12
IMPORT lstrlenA, 4
IMPORT lstrlenW, 4

%ifdef UNICODE

%define AddAtom AddAtomW
%define AddConsoleAlias AddConsoleAliasW
%define AddLocalAlternateComputerName AddLocalAlternateComputerNameW
%define BeginUpdateResource BeginUpdateResourceW
%define BuildCommDCB BuildCommDCBW
%define BuildCommDCBAndTimeouts BuildCommDCBAndTimeoutsW
%define CallNamedPipe CallNamedPipeW
%define CheckNameLegalDOS8Dot3 CheckNameLegalDOS8Dot3W
%define CommConfigDialog CommConfigDialogW
%define CopyFile CopyFileW
%define CopyFileEx CopyFileExW
%define CreateActCtx CreateActCtxW
%define CreateDirectory CreateDirectoryW
%define CreateDirectoryEx CreateDirectoryExW
%define CreateEvent CreateEventW
%define CreateFile CreateFileW
%define CreateFileMapping CreateFileMappingW
%define CreateHardLink CreateHardLinkW
%define CreateJobObject CreateJobObjectW
%define CreateMailslot CreateMailslotW
%define CreateMutex CreateMutexW
%define CreateNamedPipe CreateNamedPipeW
%define CreateProcess CreateProcessW
%define CreateSemaphore CreateSemaphoreW
%define CreateWaitableTimer CreateWaitableTimerW
%define DefineDosDevice DefineDosDeviceW
%define DeleteFile DeleteFileW
%define DeleteVolumeMountPoint DeleteVolumeMountPointW
%define DnsHostnameToComputerName DnsHostnameToComputerNameW
%define EndUpdateResource EndUpdateResourceW
%define EnumResourceLanguages EnumResourceLanguagesW
%define EnumResourceNames EnumResourceNamesW
%define EnumResourceTypes EnumResourceTypesW
%define EnumerateLocalComputerNames EnumerateLocalComputerNamesW
%define ExpandEnvironmentStrings ExpandEnvironmentStringsW
%define FatalAppExit FatalAppExitW
%define FillConsoleOutputCharacter FillConsoleOutputCharacterW
%define FindActCtxSectionString FindActCtxSectionStringW
%define FindAtom FindAtomW
%define FindFirstFile FindFirstFileW
%define FindFirstFileEx FindFirstFileExW
%define FindFirstVolume FindFirstVolumeW
%define FindFirstVolumeMountPoint FindFirstVolumeMountPointW
%define FindNextFile FindNextFileW
%define FindNextVolume FindNextVolumeW
%define FindNextVolumeMountPoint FindNextVolumeMountPointW
%define FindResource FindResourceW
%define FindResourceEx FindResourceExW
%define FormatMessage FormatMessageW
%define GetAtomName GetAtomNameW
%define GetBinaryType GetBinaryTypeW
%define GetCommandLine GetCommandLineW
%define GetCompressedFileSize GetCompressedFileSizeW
%define GetComputerName GetComputerNameW
%define GetComputerNameEx GetComputerNameExW
%define GetConsoleAlias GetConsoleAliasW
%define GetConsoleAliasExes GetConsoleAliasExesW
%define GetConsoleAliasExesLength GetConsoleAliasExesLengthW
%define GetConsoleAliases GetConsoleAliasesW
%define GetConsoleAliasesLength GetConsoleAliasesLengthW
%define GetConsoleTitle GetConsoleTitleW
%define GetCurrentDirectory GetCurrentDirectoryW
%define GetDefaultCommConfig GetDefaultCommConfigW
%define GetDiskFreeSpace GetDiskFreeSpaceW
%define GetDiskFreeSpaceEx GetDiskFreeSpaceExW
%define GetDllDirectory GetDllDirectoryW
%define GetDriveType GetDriveTypeW
%define GetEnvironmentStrings GetEnvironmentStringsW
%define GetEnvironmentVariable GetEnvironmentVariableW
%define GetFileAttributes GetFileAttributesW
%define GetFileAttributesEx GetFileAttributesExW
%define GetFirmwareEnvironmentVariable GetFirmwareEnvironmentVariableW
%define GetFullPathName GetFullPathNameW
%define GetLogicalDriveStrings GetLogicalDriveStringsW
%define GetLongPathName GetLongPathNameW
%define GetModuleFileName GetModuleFileNameW
%define GetModuleHandle GetModuleHandleW
%define GetModuleHandleEx GetModuleHandleExW
%define GetNamedPipeHandleState GetNamedPipeHandleStateW
%define GetPrivateProfileInt GetPrivateProfileIntW
%define GetPrivateProfileSection GetPrivateProfileSectionW
%define GetPrivateProfileSectionNames GetPrivateProfileSectionNamesW
%define GetPrivateProfileString GetPrivateProfileStringW
%define GetPrivateProfileStruct GetPrivateProfileStructW
%define GetProfileInt GetProfileIntW
%define GetProfileSection GetProfileSectionW
%define GetProfileString GetProfileStringW
%define GetShortPathName GetShortPathNameW
%define GetStartupInfo GetStartupInfoW
%define GetSystemDirectory GetSystemDirectoryW
%define GetSystemWindowsDirectory GetSystemWindowsDirectoryW
%define GetSystemWow64Directory GetSystemWow64DirectoryW
%define GetTempFileName GetTempFileNameW
%define GetTempPath GetTempPathW
%define GetVersionEx GetVersionExW
%define GetVolumeInformation GetVolumeInformationW
%define GetVolumeNameForVolumeMountPoint GetVolumeNameForVolumeMountPointW
%define GetVolumePathName GetVolumePathNameW
%define GetVolumePathNamesForVolumeName GetVolumePathNamesForVolumeNameW
%define GetWindowsDirectory GetWindowsDirectoryW
%define GlobalAddAtom GlobalAddAtomW
%define GlobalFindAtom GlobalFindAtomW
%define GlobalGetAtomName GlobalGetAtomNameW
%define IsBadStringPtr IsBadStringPtrW
%define LoadLibrary LoadLibraryW
%define LoadLibraryEx LoadLibraryExW
%define MoveFile MoveFileW
%define MoveFileEx MoveFileExW
%define MoveFileWithProgress MoveFileWithProgressW
%define NeedCurrentDirectoryForExePath NeedCurrentDirectoryForExePathW
%define OpenEvent OpenEventW
%define OpenFileMapping OpenFileMappingW
%define OpenJobObject OpenJobObjectW
%define OpenMutex OpenMutexW
%define OpenSemaphore OpenSemaphoreW
%define OpenWaitableTimer OpenWaitableTimerW
%define OutputDebugString OutputDebugStringW
%define PeekConsoleInput PeekConsoleInputW
%define QueryDosDevice QueryDosDeviceW
%define ReadConsole ReadConsoleW
%define ReadConsoleInput ReadConsoleInputW
%define ReadConsoleOutput ReadConsoleOutputW
%define ReadConsoleOutputCharacter ReadConsoleOutputCharacterW
%define RemoveDirectory RemoveDirectoryW
%define RemoveLocalAlternateComputerName RemoveLocalAlternateComputerNameW
%define ReplaceFile ReplaceFileW
%define ScrollConsoleScreenBuffer ScrollConsoleScreenBufferW
%define SearchPath SearchPathW
%define SetComputerName SetComputerNameW
%define SetComputerNameEx SetComputerNameExW
%define SetConsoleTitle SetConsoleTitleW
%define SetCurrentDirectory SetCurrentDirectoryW
%define SetDefaultCommConfig SetDefaultCommConfigW
%define SetDllDirectory SetDllDirectoryW
%define SetEnvironmentStrings SetEnvironmentStringsW
%define SetEnvironmentVariable SetEnvironmentVariableW
%define SetFileAttributes SetFileAttributesW
%define SetFileShortName SetFileShortNameW
%define SetFirmwareEnvironmentVariable SetFirmwareEnvironmentVariableW
%define SetLocalPrimaryComputerName SetLocalPrimaryComputerNameW
%define SetVolumeLabel SetVolumeLabelW
%define SetVolumeMountPoint SetVolumeMountPointW
%define UpdateResource UpdateResourceW
%define VerLanguageName VerLanguageNameW
%define VerifyVersionInfo VerifyVersionInfoW
%define WaitNamedPipe WaitNamedPipeW
%define WriteConsoleInput WriteConsoleInputW
%define WriteConsoleOutputCharacter WriteConsoleOutputCharacterW
%define WriteConsoleOutput WriteConsoleOutputW
%define WriteConsole WriteConsoleW
%define WritePrivateProfileSection WritePrivateProfileSectionW
%define WritePrivateProfileString WritePrivateProfileStringW
%define WritePrivateProfileStructA WritePrivateProfileStructW
%define WriteProfileSection WriteProfileSectionW
%define WriteProfileString WriteProfileStringW
%define lstrcat lstrcatW
%define lstrcmp lstrcmpW
%define lstrcmpi lstrcmpW
%define lstrcpy lstrcpyW
%define lstrcpyn lstrcpynW
%define lstrlen lstrlenW

%else  ;// ANSI

%define AddAtom AddAtomA
%define AddConsoleAlias AddConsoleAliasA
%define AddLocalAlternateComputerName AddLocalAlternateComputerNameA
%define BeginUpdateResource BeginUpdateResourceA
%define BuildCommDCB BuildCommDCBA
%define BuildCommDCBAndTimeouts BuildCommDCBAndTimeoutsA
%define CallNamedPipe CallNamedPipeA
%define CheckNameLegalDOS8Dot3 CheckNameLegalDOS8Dot3A
%define CommConfigDialog CommConfigDialogA
%define CopyFile CopyFileA
%define CopyFileEx CopyFileExA
%define CreateActCtx CreateActCtxA
%define CreateDirectory CreateDirectoryA
%define CreateDirectoryEx CreateDirectoryExA
%define CreateEvent CreateEventA
%define CreateFile CreateFileA
%define CreateFileMapping CreateFileMappingA
%define CreateHardLink CreateHardLinkA
%define CreateJobObject CreateJobObjectA
%define CreateMailslot CreateMailslotA
%define CreateMutex CreateMutexA
%define CreateNamedPipe CreateNamedPipeA
%define CreateProcess CreateProcessA
%define CreateSemaphore CreateSemaphoreA
%define CreateWaitableTimer CreateWaitableTimerA
%define DefineDosDevice DefineDosDeviceA
%define DeleteFile DeleteFileA
%define DeleteVolumeMountPoint DeleteVolumeMountPointA
%define DnsHostnameToComputerName DnsHostnameToComputerNameA
%define EndUpdateResource EndUpdateResourceA
%define EnumResourceLanguages EnumResourceLanguagesA
%define EnumResourceNames EnumResourceNamesA
%define EnumResourceTypes EnumResourceTypesA
%define EnumerateLocalComputerNames EnumerateLocalComputerNamesA
%define ExpandEnvironmentStrings ExpandEnvironmentStringsA
%define FatalAppExit FatalAppExitA
%define FillConsoleOutputCharacter FillConsoleOutputCharacterA
%define FindActCtxSectionString FindActCtxSectionStringA
%define FindAtom FindAtomA
%define FindFirstFile FindFirstFileA
%define FindFirstFileEx FindFirstFileExA
%define FindFirstVolume FindFirstVolumeA
%define FindFirstVolumeMountPoint FindFirstVolumeMountPointA
%define FindNextFile FindNextFileA
%define FindNextVolume FindNextVolumeA
%define FindNextVolumeMountPoint FindNextVolumeMountPointA
%define FindResource FindResourceA
%define FindResourceEx FindResourceExA
%define FormatMessage FormatMessageA
%define GetAtomName GetAtomNameA
%define GetBinaryType GetBinaryTypeA
%define GetCommandLine GetCommandLineA
%define GetCompressedFileSize GetCompressedFileSizeA
%define GetComputerName GetComputerNameA
%define GetComputerNameEx GetComputerNameExA
%define GetConsoleAlias GetConsoleAliasA
%define GetConsoleAliasExes GetConsoleAliasExesA
%define GetConsoleAliasExesLength GetConsoleAliasExesLengthA
%define GetConsoleAliases GetConsoleAliasesA
%define GetConsoleAliasesLength GetConsoleAliasesLengthA
%define GetConsoleTitle GetConsoleTitleA
%define GetCurrentDirectory GetCurrentDirectoryA
%define GetDefaultCommConfig GetDefaultCommConfigA
%define GetDiskFreeSpace GetDiskFreeSpaceA
%define GetDiskFreeSpaceEx GetDiskFreeSpaceExA
%define GetDllDirectory GetDllDirectoryA
%define GetDriveType GetDriveTypeA
%define GetEnvironmentStrings GetEnvironmentStringsA
%define GetEnvironmentVariable GetEnvironmentVariableA
%define GetFileAttributes GetFileAttributesA
%define GetFileAttributesEx GetFileAttributesExA
%define GetFirmwareEnvironmentVariable GetFirmwareEnvironmentVariableA
%define GetFullPathName GetFullPathNameA
%define GetLogicalDriveStrings GetLogicalDriveStringsA
%define GetLongPathName GetLongPathNameA
%define GetModuleFileName GetModuleFileNameA
%define GetModuleHandle GetModuleHandleA
%define GetModuleHandleEx GetModuleHandleExA
%define GetNamedPipeHandleState GetNamedPipeHandleStateA
%define GetPrivateProfileInt GetPrivateProfileIntA
%define GetPrivateProfileSection GetPrivateProfileSectionA
%define GetPrivateProfileSectionNames GetPrivateProfileSectionNamesA
%define GetPrivateProfileString GetPrivateProfileStringA
%define GetPrivateProfileStruct GetPrivateProfileStructA
%define GetProfileInt GetProfileIntA
%define GetProfileSection GetProfileSectionA
%define GetProfileString GetProfileStringA
%define GetShortPathName GetShortPathNameA
%define GetStartupInfo GetStartupInfoA
%define GetSystemDirectory GetSystemDirectoryA
%define GetSystemWindowsDirectory GetSystemWindowsDirectoryA
%define GetSystemWow64Directory GetSystemWow64DirectoryA
%define GetTempFileName GetTempFileNameA
%define GetTempPath GetTempPathA
%define GetVersionEx GetVersionExA
%define GetVolumeInformation GetVolumeInformationA
%define GetVolumeNameForVolumeMountPoint GetVolumeNameForVolumeMountPointA
%define GetVolumePathName GetVolumePathNameA
%define GetVolumePathNamesForVolumeName GetVolumePathNamesForVolumeNameA
%define GetWindowsDirectory GetWindowsDirectoryA
%define GlobalAddAtom GlobalAddAtomA
%define GlobalFindAtom GlobalFindAtomA
%define GlobalGetAtomName GlobalGetAtomNameA
%define IsBadStringPtr IsBadStringPtrA
%define LoadLibrary LoadLibraryA
%define LoadLibraryEx LoadLibraryExA
%define MoveFile MoveFileA
%define MoveFileEx MoveFileExA
%define MoveFileWithProgress MoveFileWithProgressA
%define NeedCurrentDirectoryForExePath NeedCurrentDirectoryForExePathA
%define OpenEvent OpenEventA
%define OpenFileMapping OpenFileMappingA
%define OpenJobObject OpenJobObjectA
%define OpenMutex OpenMutexA
%define OpenSemaphore OpenSemaphoreA
%define OpenWaitableTimer OpenWaitableTimerA
%define OutputDebugString OutputDebugStringA
%define PeekConsoleInput PeekConsoleInputA
%define QueryDosDevice QueryDosDeviceA
%define ReadConsole ReadConsoleA
%define ReadConsoleInput ReadConsoleInputA
%define ReadConsoleOutput ReadConsoleOutputA
%define ReadConsoleOutputCharacter ReadConsoleOutputCharacterA
%define RemoveDirectory RemoveDirectoryA
%define RemoveLocalAlternateComputerName RemoveLocalAlternateComputerNameA
%define ReplaceFile ReplaceFileA
%define ScrollConsoleScreenBuffer ScrollConsoleScreenBufferA
%define SearchPath SearchPathA
%define SetComputerName SetComputerNameA
%define SetComputerNameEx SetComputerNameExA
%define SetConsoleTitle SetConsoleTitleA
%define SetCurrentDirectory SetCurrentDirectoryA
%define SetDefaultCommConfig SetDefaultCommConfigA
%define SetDllDirectory SetDllDirectoryA
%define SetEnvironmentStrings SetEnvironmentStringsA
%define SetEnvironmentVariable SetEnvironmentVariableA
%define SetFileAttributes SetFileAttributesA
%define SetFileShortName SetFileShortNameA
%define SetFirmwareEnvironmentVariable SetFirmwareEnvironmentVariableA
%define SetLocalPrimaryComputerName SetLocalPrimaryComputerNameA
%define SetVolumeLabel SetVolumeLabelA
%define SetVolumeMountPoint SetVolumeMountPointA
%define UpdateResource UpdateResourceA
%define VerLanguageName VerLanguageNameA
%define VerifyVersionInfo VerifyVersionInfoA
%define WaitNamedPipe WaitNamedPipeA
%define WriteConsoleInput WriteConsoleInputA
%define WriteConsoleOutputCharacter WriteConsoleOutputCharacterA
%define WriteConsoleOutput WriteConsoleOutputA
%define WriteConsole WriteConsoleA
%define WritePrivateProfileSection WritePrivateProfileSectionA
%define WritePrivateProfileString WritePrivateProfileStringA
%define WritePrivateProfileStructA WritePrivateProfileStructA
%define WriteProfileSection WriteProfileSectionA
%define WriteProfileString WriteProfileStringA
%define lstrcat lstrcatA
%define lstrcmp lstrcmpA
%define lstrcmpi lstrcmpA
%define lstrcpy lstrcpyA
%define lstrcpyn lstrcpynA
%define lstrlen lstrlenA

%endif  ;// UNICODE

%endif  ;// __NASMX_KERNEL32_INC__
