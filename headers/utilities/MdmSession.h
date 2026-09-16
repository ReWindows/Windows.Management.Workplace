#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Management.Workplace.dll by Windissect. 29 member(s).
namespace Windows::Management {
class MdmSession {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MdmSession@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachAsync@MdmSession@Management@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@3@@Z
    virtual long AttachAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@MdmSession@Management@Windows@@UEAAJXZ
    virtual long Delete();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MdmSession@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MdmSession@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MdmSession@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MdmSession@Management@Windows@@QEAA@XZ
    MdmSession();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MdmSession@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MdmSession@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MdmSession@Management@Windows@@QEAAJPEBG0@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAsync@MdmSession@Management@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@3@@Z
    virtual long StartAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartWithAlertsAsync@MdmSession@Management@Windows@@UEAAJPEAU?$IIterable@PEAVMdmAlert@Management@Windows@@@Collections@Foundation@3@PEAPEAUIAsyncAction@63@@Z
    virtual long StartWithAlertsAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Alerts@MdmSession@Management@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVMdmAlert@Management@Windows@@@Collections@Foundation@3@@Z
    virtual long get_Alerts(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedError@MdmSession@Management@Windows@@UEAAJPEAJ@Z
    virtual long get_ExtendedError(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@MdmSession@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@MdmSession@Management@Windows@@UEAAJPEAW4MdmSessionState@23@@Z
    virtual long get_State(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MdmSession@Management@Windows@@UEAA@XZ
    virtual ~MdmSession();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSessionTimer@MdmSession@Management@Windows@@AEAAXXZ
    void CreateSessionTimer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerAuthenticatedUserSid@MdmSession@Management@Windows@@AEAAJPEAPEAG@Z
    long GetCallerAuthenticatedUserSid(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWellKnownSid@MdmSession@Management@Windows@@AEAAJPEBGPEA_N@Z
    long IsWellKnownSid(unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OmaDmInitiateSessionInternal@MdmSession@Management@Windows@@AEAAJIPEAUOMADMALERTINFO@@PEAPEAUIAsyncAction@Foundation@3@@Z
    long OmaDmInitiateSessionInternal(unsigned int, OMADMALERTINFO *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSessionLock@MdmSession@Management@Windows@@AEAAXXZ
    void ReleaseSessionLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionTimerCallback@MdmSession@Management@Windows@@CAXQEAXE@Z
    static void SessionTimerCallback(void * const, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitSessionLock@MdmSession@Management@Windows@@AEAAXPEAU_RTL_SRWLOCK@@@Z
    void WaitSessionLock(_RTL_SRWLOCK *);
};
} // namespace Windows::Management
