#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Management.Workplace.dll by Windissect. 32 member(s).
namespace Windows::Management::Policies {
class NamedPolicyData {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NamedPolicyData@Policies@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBinary@NamedPolicyData@Policies@Management@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@4@@Z
    virtual long GetBinary(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoolean@NamedPolicyData@Policies@Management@Windows@@UEAAJPEAE@Z
    virtual long GetBoolean(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@NamedPolicyData@Policies@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInt32@NamedPolicyData@Policies@Management@Windows@@UEAAJPEAH@Z
    virtual long GetInt32(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInt64@NamedPolicyData@Policies@Management@Windows@@UEAAJPEA_J@Z
    virtual long GetInt64(int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@NamedPolicyData@Policies@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@NamedPolicyData@Policies@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetString(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@NamedPolicyData@Policies@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NamedPolicyData@Policies@Management@Windows@@QEAA@XZ
    NamedPolicyData();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NamedPolicyData@Policies@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NamedPolicyData@Policies@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@NamedPolicyData@Policies@Management@Windows@@QEAAJPEAUHSTRING__@@0KU_WNF_STATE_NAME@@PEAUIUser@System@4@@Z
    long RuntimeClassInitialize(HSTRING__*, HSTRING__*, unsigned long, _WNF_STATE_NAME, ::Windows::System::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Changed@NamedPolicyData@Policies@Management@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVNamedPolicyData@Policies@Management@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Changed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Area@NamedPolicyData@Policies@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Area(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsManaged@NamedPolicyData@Policies@Management@Windows@@UEAAJPEAE@Z
    virtual long get_IsManaged(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsUserPolicy@NamedPolicyData@Policies@Management@Windows@@UEAAJPEAE@Z
    virtual long get_IsUserPolicy(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@NamedPolicyData@Policies@Management@Windows@@UEAAJPEAW4NamedPolicyKind@234@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@NamedPolicyData@Policies@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@NamedPolicyData@Policies@Management@Windows@@UEAAJPEAPEAUIUser@System@4@@Z
    virtual long get_User(::Windows::System::IUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Changed@NamedPolicyData@Policies@Management@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Changed(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NamedPolicyData@Policies@Management@Windows@@UEAA@XZ
    virtual ~NamedPolicyData();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserSidFromUser@NamedPolicyData@Policies@Management@Windows@@AEAAJPEAUIUser@System@4@PEAPEAG@Z
    long GetUserSidFromUser(::Windows::System::IUser *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseChangedEvent@NamedPolicyData@Policies@Management@Windows@@AEAAJXZ
    long RaiseChangedEvent();
};
} // namespace Windows::Management::Policies
