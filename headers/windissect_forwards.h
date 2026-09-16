#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
namespace Microsoft { namespace WRL { class Details; } } 
namespace Windows { namespace Storage { class Streams; } } 
class AutoStubBias; class CloseHandle; class Destroy; class EventRegistrationToken; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class HINSTANCE__; class HSTRING__; class IActivationFactory; class IClassFactory; class IInspectable; class IMarshal; class IRpcOptions; class IStream; class IUnknown; class IWeakReference; class MdmSyncTraceProvider; class OMADMALERTINFO; class ReleaseSRWLockExclusive; class RpcOptionsHelper; class WilFailureReport; class WilFailureReportInformation; class _CONTEXT; class _EXCEPTION_RECORD; class _GUID; class _RO_REGISTRATION_COOKIE; class _RTL_RUN_ONCE; class _RTL_SRWLOCK; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class _WNF_STATE_NAME; class _WNF_TYPE_ID; class _WNF_USER_SUBSCRIPTION; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByVal; class lambda_05cef1f6fdf474c9f3ed207deba0f73b; class lambda_0bc69edfe70954defaa36004dbdb27f8; class lambda_b5dd905b95e86fe50f5c34367efd8b32; class lambda_c2fd7731c5ae0d37e65ea73be67c0f1b; class thunk; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; 
namespace Microsoft { namespace WRL { class ActivationFactory; class AgileRef; class CloakedIid; class ComPtr; class Details; class EventSource; class FtmBase; class Implements; class InvokeModeOptions; class RuntimeClassFlags; class SimpleSealedActivationFactory; class WeakRef; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class HString; class HStringReference; class SRWLock; } } } 
namespace Microsoft { namespace WRL { namespace Wrappers { namespace Details { class SyncLockExclusive; class SyncLockShared; } } } } 
namespace Windows { } 
namespace Windows { namespace Foundation { namespace Collections { namespace Internal { class detail; } } } } 
namespace Windows { namespace Internal { class ComTaskPoolHandler; class IAsyncFireCompletion; class IComPoolTask; class INilDelegate; } } 
namespace Windows { namespace Internal { namespace ComTaskPool { class CTaskWrapper; } } } 
namespace Windows { namespace Management { class IMdmAlert; class IMdmSession; class MdmAlert; class MdmSession; class MdmSessionManagerStatics; class MdmSyncBucket; } } 
namespace Windows { namespace Management { namespace Policies { class INamedPolicyData; class INamedPolicySetter; class INamedPolicyStatics; class INamedPolicyStatics2; class NamedPolicyData; class NamedPolicyStatics; } } } 
namespace Windows { namespace Management { namespace Workplace { class IMdmAllowPolicyStatics; class IMdmPolicyStatics2; class MdmAllowPolicyStatics; } } } 
namespace Windows { namespace Storage { class Streams; } } 
namespace Windows { namespace System { class IUser; } } 
namespace std { class _Zero_then_variadic_args_t; class allocator; class bad_alloc; class bad_array_new_length; class basic_string; class char_traits; class exception; class nothrow_t; class nullptr_t; } 
namespace wil { class FailureInfo; class ResultException; class process_heap_deleter; class srwlock; class unique_any_t; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class FeatureStateManager; class ResultStatus; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class empty_wnf_state; class handle_null_resource_policy; class resource_policy; class unique_storage; class wnf_subscription_state; class wnf_subscription_state_base; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexProperty; class UsageIndexes; class heap_buffer; class heap_vector; } } 
namespace wistd { class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

