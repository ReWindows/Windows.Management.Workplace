#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Management.Workplace.dll by Windissect. 38 member(s).
namespace Windows::Management::Policies {
class NamedPolicyStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NamedPolicyStatics@Policies@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllPoliciesAsync@NamedPolicyStatics@Policies@Management@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long ClearAllPoliciesAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllPoliciesForAccountAsync@NamedPolicyStatics@Policies@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long ClearAllPoliciesForAccountAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@NamedPolicyStatics@Policies@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPolicyFromPath@NamedPolicyStatics@Policies@Management@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUINamedPolicyData@234@@Z
    virtual long GetPolicyFromPath(HSTRING__*, HSTRING__*, ::Windows::Management::Policies::INamedPolicyData * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPolicyFromPathForUser@NamedPolicyStatics@Policies@Management@Windows@@UEAAJPEAUIUser@System@4@PEAUHSTRING__@@1PEAPEAUINamedPolicyData@234@@Z
    virtual long GetPolicyFromPathForUser(::Windows::System::IUser *, HSTRING__*, HSTRING__*, ::Windows::Management::Policies::INamedPolicyData * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@NamedPolicyStatics@Policies@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@NamedPolicyStatics@Policies@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@NamedPolicyStatics@Policies@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@NamedPolicyStatics@Policies@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NamedPolicyStatics@Policies@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NamedPolicyStatics@Policies@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreatePolicySetter@NamedPolicyStatics@Policies@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUINamedPolicySetter@234@@Z
    virtual long TryCreatePolicySetter(HSTRING__*, ::Windows::Management::Policies::INamedPolicySetter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreatePolicySetterForUser@NamedPolicyStatics@Policies@Management@Windows@@UEAAJPEAUIUser@System@4@PEAUHSTRING__@@PEAPEAUINamedPolicySetter@234@@Z
    virtual long TryCreatePolicySetterForUser(::Windows::System::IUser *, HSTRING__*, ::Windows::Management::Policies::INamedPolicySetter * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPolicyMetadata@NamedPolicyStatics@Policies@Management@Windows@@CAJPEAUHSTRING__@@0PEAKPEAU_WNF_STATE_NAME@@@Z
    static long GetPolicyMetadata(HSTRING__*, HSTRING__*, unsigned long *, _WNF_STATE_NAME *);
};
} // namespace Windows::Management::Policies
