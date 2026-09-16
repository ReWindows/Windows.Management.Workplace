#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Management.Workplace.dll by Windissect. 33 member(s).
namespace Windows::Management {
class MdmAlert {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MdmAlert@Management@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertAlertArrayToMdmAlerts@MdmAlert@Management@Windows@@SAJIPEAUOMADMALERTINFO@@PEAPEAU?$IVectorView@PEAVMdmAlert@Management@Windows@@@Collections@Foundation@3@@Z
    static long ConvertAlertArrayToMdmAlerts(unsigned int, OMADMALERTINFO *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertAlertToMdmAlert@MdmAlert@Management@Windows@@SAJPEAUOMADMALERTINFO@@PEAPEAV123@@Z
    static long ConvertAlertToMdmAlert(OMADMALERTINFO *, ::Windows::Management::MdmAlert * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertMdmAlertToAlert@MdmAlert@Management@Windows@@SAJPEAUIMdmAlert@23@PEAUOMADMALERTINFO@@@Z
    static long ConvertMdmAlertToAlert(::Windows::Management::IMdmAlert *, OMADMALERTINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertMdmAlertsToAlertArray@MdmAlert@Management@Windows@@SAJPEAU?$IIterable@PEAVMdmAlert@Management@Windows@@@Collections@Foundation@3@PEAIPEAPEAUOMADMALERTINFO@@@Z
    static long ConvertMdmAlertsToAlertArray(WindissectOpaque *, unsigned int *, OMADMALERTINFO * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MdmAlert@Management@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MdmAlert@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MdmAlert@Management@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@MdmAlert@Management@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@MdmAlert@Management@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MdmAlert@Management@Windows@@QEAA@XZ
    MdmAlert();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MdmAlert@Management@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MdmAlert@Management@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MdmAlert@Management@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@MdmAlert@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Data(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Format@MdmAlert@Management@Windows@@UEAAJPEAW4MdmAlertDataType@23@@Z
    virtual long get_Format(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mark@MdmAlert@Management@Windows@@UEAAJPEAW4MdmAlertMark@23@@Z
    virtual long get_Mark(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Source@MdmAlert@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Source(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@MdmAlert@Management@Windows@@UEAAJPEAI@Z
    virtual long get_Status(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Target@MdmAlert@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Target(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@MdmAlert@Management@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Type(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Data@MdmAlert@Management@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Data(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Format@MdmAlert@Management@Windows@@UEAAJW4MdmAlertDataType@23@@Z
    virtual long put_Format(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Mark@MdmAlert@Management@Windows@@UEAAJW4MdmAlertMark@23@@Z
    virtual long put_Mark(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Source@MdmAlert@Management@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Source(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Target@MdmAlert@Management@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Target(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Type@MdmAlert@Management@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Type(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MdmAlert@Management@Windows@@UEAA@XZ
    virtual ~MdmAlert();
};
} // namespace Windows::Management
