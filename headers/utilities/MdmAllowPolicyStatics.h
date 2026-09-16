#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Management.Workplace.dll by Windissect. 36 member(s).
namespace Windows::Management::Workplace {
class MdmAllowPolicyStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MdmAllowPolicyStatics@Workplace@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MdmAllowPolicyStatics@Workplace@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessagingSyncPolicy@MdmAllowPolicyStatics@Workplace@Management@Windows@@UEAAJPEAW4MessagingSyncPolicy@234@@Z
    virtual long GetMessagingSyncPolicy(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MdmAllowPolicyStatics@Workplace@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MdmAllowPolicyStatics@Workplace@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@MdmAllowPolicyStatics@Workplace@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@MdmAllowPolicyStatics@Workplace@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBrowserAllowed@MdmAllowPolicyStatics@Workplace@Management@Windows@@UEAAJPEAE@Z
    virtual long IsBrowserAllowed(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCameraAllowed@MdmAllowPolicyStatics@Workplace@Management@Windows@@UEAAJPEAE@Z
    virtual long IsCameraAllowed(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMicrosoftAccountAllowed@MdmAllowPolicyStatics@Workplace@Management@Windows@@UEAAJPEAE@Z
    virtual long IsMicrosoftAccountAllowed(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStoreAllowed@MdmAllowPolicyStatics@Workplace@Management@Windows@@UEAAJPEAE@Z
    virtual long IsStoreAllowed(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MdmAllowPolicyStatics@Workplace@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MdmAllowPolicyStatics@Workplace@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::Management::Workplace
