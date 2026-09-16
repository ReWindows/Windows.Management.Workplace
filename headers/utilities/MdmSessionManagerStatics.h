#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Management.Workplace.dll by Windissect. 28 member(s).
namespace Windows::Management {
class MdmSessionManagerStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MdmSessionManagerStatics@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteSessionById@MdmSessionManagerStatics@Management@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long DeleteSessionById(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnrollmentTypeFromEnrollmentId@MdmSessionManagerStatics@Management@Windows@@SAJPEAGPEAW4EnrollmentEnrollType@@@Z
    static long GetEnrollmentTypeFromEnrollmentId(unsigned short *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnterpriseAccountId@MdmSessionManagerStatics@Management@Windows@@SAJPEAPEAG@Z
    static long GetEnterpriseAccountId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MdmSessionManagerStatics@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MdmSessionManagerStatics@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSessionById@MdmSessionManagerStatics@Management@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIMdmSession@23@@Z
    virtual long GetSessionById(HSTRING__*, ::Windows::Management::IMdmSession * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MdmSessionManagerStatics@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@MdmSessionManagerStatics@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@MdmSessionManagerStatics@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MdmSessionManagerStatics@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MdmSessionManagerStatics@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateSession@MdmSessionManagerStatics@Management@Windows@@UEAAJPEAPEAUIMdmSession@23@@Z
    virtual long TryCreateSession(::Windows::Management::IMdmSession * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SessionIds@MdmSessionManagerStatics@Management@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@3@@Z
    virtual long get_SessionIds(WindissectOpaque * *);
};
} // namespace Windows::Management
