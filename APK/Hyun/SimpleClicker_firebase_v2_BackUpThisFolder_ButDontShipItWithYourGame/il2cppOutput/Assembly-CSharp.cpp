#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<GooglePlayGames.BasicApi.SignInStatus>
struct Action_1_t38A40574AB80CC30FF578C805B326880626B49AF;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth>
struct Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// App
struct App_t506E67571D38775D872E90C5C8A28E216246A66A;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Firebase.Auth.Credential
struct Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF;
// Firebase.Auth.FirebaseUser
struct FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GPGSManager
struct GPGSManager_t0017A3605213D0557FB238FD03B04CE992136FA7;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6;
// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient
struct INearbyConnectionClient_tBFE8F3C727285D4A45458AAD496AFBB7816429AD;
// GooglePlayGames.BasicApi.IPlayGamesClient
struct IPlayGamesClient_tD4A3FB7D57BFF95CCE85912B197D18627787D58D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73;
// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9;
// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_tEC3D4D5F9E3BCF681A4E64A7C3D73489F7BB6D32;
// GooglePlayGames.BasicApi.PlayerStats
struct PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// App/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tBAF0DA78EB88665DF7DBED943AE6C1734EE5979D;
// App/<WaitForAuthenticate>d__3
struct U3CWaitForAuthenticateU3Ed__3_t832678D1518E17550528E496803A8E39D75F371B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t38A40574AB80CC30FF578C805B326880626B49AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPGSManager_t0017A3605213D0557FB238FD03B04CE992136FA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUserProfile_tF23DFE5CF90A1020C168F5751F7C4F2B628E22E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesAuthProvider_tA88971B9E490F90C4D38EA679FD693CC08371FB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInStatus_t7DA6625C4819AB74C191FCDE336DC602FF4782F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tBAF0DA78EB88665DF7DBED943AE6C1734EE5979D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForAuthenticateU3Ed__3_t832678D1518E17550528E496803A8E39D75F371B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0976EEC9F6D44C811C89E574BB2FACB53AEBC479;
IL2CPP_EXTERN_C String_t* _stringLiteral57450D0AC4A9BEF7AB4584D11DED9144C554DA8F;
IL2CPP_EXTERN_C String_t* _stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4;
IL2CPP_EXTERN_C String_t* _stringLiteral8006218D2F3FFE24B5000B0D23B249DF2BCF2A5B;
IL2CPP_EXTERN_C String_t* _stringLiteral88D19FFC2BF3C0C1FF5984DB06DAF954BF4C1288;
IL2CPP_EXTERN_C String_t* _stringLiteral8ABB8684B5881636CD8671B00BA72BED922B47CD;
IL2CPP_EXTERN_C String_t* _stringLiteralC0C8227C0252EDE2510740FD9A71B958752B1A8C;
IL2CPP_EXTERN_C String_t* _stringLiteralD2D7DC86DBF32245A40016AB3D70B95306B8F122;
IL2CPP_EXTERN_C String_t* _stringLiteralFF65EACA11C9D5B7391F5F22C91036D5BEFB38F8;
IL2CPP_EXTERN_C const RuntimeMethod* App_U3CStartU3Eb__2_0_mB062B3DED4183E89592B43ADAA9C9CB0646A8CEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* App_U3CStartU3Eb__2_1_m2E010B3AFBB04A7F294603161156BDFD148EAD8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* App_U3CStartU3Eb__2_2_m94FE04186831B6446A3FD75B4B6287D5F6FB61C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GPGSManager_U3CSignInU3Eb__3_0_m553AB5B8731DDF3793B4143B6D4E8B09C077BFC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m549608C19B9ED5ECA2FD9094527278477B3A2E38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CStartU3Eb__3_mBAC6136F73BCCA53B083DC6B3256B9AEFC8EC123_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForAuthenticateU3Ed__3_System_Collections_IEnumerator_Reset_mE30B1BC764F83EB0800E7884E06820E8B70B7223_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};
struct Il2CppArrayBounds;

// GPGSIds
struct GPGSIds_tFFFE7193525F360B8D42D2E05A5034EA4B080069  : public RuntimeObject
{
};

// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9  : public RuntimeObject
{
	// GooglePlayGames.PlayGamesLocalUser GooglePlayGames.PlayGamesPlatform::mLocalUser
	PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73* ___mLocalUser_3;
	// GooglePlayGames.BasicApi.IPlayGamesClient GooglePlayGames.PlayGamesPlatform::mClient
	RuntimeObject* ___mClient_4;
	// System.String GooglePlayGames.PlayGamesPlatform::mDefaultLbUi
	String_t* ___mDefaultLbUi_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GooglePlayGames.PlayGamesPlatform::mIdMap
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___mIdMap_6;
};

struct PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9_StaticFields
{
	// GooglePlayGames.PlayGamesPlatform modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sInstance
	PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* ___sInstance_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyInitializePending
	bool ___sNearbyInitializePending_1;
	// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyConnectionClient
	RuntimeObject* ___sNearbyConnectionClient_2;
};

// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_tEC3D4D5F9E3BCF681A4E64A7C3D73489F7BB6D32  : public RuntimeObject
{
	// System.String GooglePlayGames.PlayGamesUserProfile::mDisplayName
	String_t* ___mDisplayName_0;
	// System.String GooglePlayGames.PlayGamesUserProfile::mPlayerId
	String_t* ___mPlayerId_1;
	// System.String GooglePlayGames.PlayGamesUserProfile::mAvatarUrl
	String_t* ___mAvatarUrl_2;
	// System.Boolean GooglePlayGames.PlayGamesUserProfile::mIsFriend
	bool ___mIsFriend_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesUserProfile::mImageLoading
	bool ___mImageLoading_4;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesUserProfile::mImage
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mImage_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// App/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tBAF0DA78EB88665DF7DBED943AE6C1734EE5979D  : public RuntimeObject
{
	// Firebase.Auth.FirebaseAuth App/<>c__DisplayClass2_0::auth
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___auth_0;
	// App App/<>c__DisplayClass2_0::<>4__this
	App_t506E67571D38775D872E90C5C8A28E216246A66A* ___U3CU3E4__this_1;
};

// App/<WaitForAuthenticate>d__3
struct U3CWaitForAuthenticateU3Ed__3_t832678D1518E17550528E496803A8E39D75F371B  : public RuntimeObject
{
	// System.Int32 App/<WaitForAuthenticate>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object App/<WaitForAuthenticate>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// App App/<WaitForAuthenticate>d__3::<>4__this
	App_t506E67571D38775D872E90C5C8A28E216246A66A* ___U3CU3E4__this_2;
	// System.Action App/<WaitForAuthenticate>d__3::callback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback_3;
};

// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___m_result_22;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73  : public PlayGamesUserProfile_tEC3D4D5F9E3BCF681A4E64A7C3D73489F7BB6D32
{
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesLocalUser::mPlatform
	PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* ___mPlatform_6;
	// GooglePlayGames.BasicApi.PlayerStats GooglePlayGames.PlayGamesLocalUser::mStats
	PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* ___mStats_7;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Firebase.Auth.Credential
struct Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.Credential::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.Credential::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.FirebaseAuth::swigCMemOwn
	bool ___swigCMemOwn_1;
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth::appProxy
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___appProxy_2;
	// System.IntPtr Firebase.Auth.FirebaseAuth::appCPtr
	intptr_t ___appCPtr_3;
	// System.IntPtr Firebase.Auth.FirebaseAuth::authStateListener
	intptr_t ___authStateListener_4;
	// System.IntPtr Firebase.Auth.FirebaseAuth::idTokenListener
	intptr_t ___idTokenListener_5;
	// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::currentUser
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* ___currentUser_6;
	// System.EventHandler Firebase.Auth.FirebaseAuth::stateChangedImpl
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___stateChangedImpl_7;
	// System.EventHandler Firebase.Auth.FirebaseAuth::idTokenChangedImpl
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___idTokenChangedImpl_8;
	// System.Boolean Firebase.Auth.FirebaseAuth::persistentLoaded
	bool ___persistentLoaded_9;
};

struct FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::appCPtrToAuth
	Dictionary_2_tE6C974D759883C66869D32F24D139F20300122F2* ___appCPtrToAuth_10;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Firebase.Auth.UserInfoInterface
struct UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.UserInfoInterface::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Auth.UserInfoInterface::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9  : public MulticastDelegate_t
{
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.SignInStatus>
struct Action_1_t38A40574AB80CC30FF578C805B326880626B49AF  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Firebase.Auth.FirebaseUser
struct FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A  : public UserInfoInterface_t3FA671C36EBB6479D7F8BE1C1040D99E7E5D4062
{
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseUser::authProxy
	FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* ___authProxy_3;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// App
struct App_t506E67571D38775D872E90C5C8A28E216246A66A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text App::textUserId
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textUserId_4;
	// GooglePlayGames.PlayGamesLocalUser App::localUser
	PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73* ___localUser_5;
};

// GPGSManager
struct GPGSManager_t0017A3605213D0557FB238FD03B04CE992136FA7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<System.Boolean> GPGSManager::onSignIn
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___onSignIn_5;
};

struct GPGSManager_t0017A3605213D0557FB238FD03B04CE992136FA7_StaticFields
{
	// GPGSManager GPGSManager::instance
	GPGSManager_t0017A3605213D0557FB238FD03B04CE992136FA7* ___instance_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678* ___continuationAction0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) ;

// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_runInBackground_mF66D0FBF81A7EB10E9EB64666E02F1FF488D8C70 (bool ___value0, const RuntimeMethod* method) ;
// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* PlayGamesPlatform_get_Instance_m8CAF47CD84B66E81A3F6DD2D00CACA87909A4565 (const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.SignInStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m24EBA5E2D3AA733A71F462D8A93C172F7CCA8926 (Action_1_t38A40574AB80CC30FF578C805B326880626B49AF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t38A40574AB80CC30FF578C805B326880626B49AF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform::Authenticate(System.Action`1<GooglePlayGames.BasicApi.SignInStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_Authenticate_m75BB906DCAE3761C35DC362CEF42CE369C80BAF4 (PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* __this, Action_1_t38A40574AB80CC30FF578C805B326880626B49AF* ___callback0, const RuntimeMethod* method) ;
// System.Void App/<WaitForAuthenticate>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForAuthenticateU3Ed__3__ctor_mD4B3D049AE1EED16EE3ADCB08E2F2B9B15895D2C (U3CWaitForAuthenticateU3Ed__3_t832678D1518E17550528E496803A8E39D75F371B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator App::WaitForAuthenticate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* App_WaitForAuthenticate_m4251FADAF12A2CCDAE92A25F2DC8E22DFB9D5AD6 (App_t506E67571D38775D872E90C5C8A28E216246A66A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Social_get_localUser_mD8E23AB2D7091CC74F5F6D2F509426A5B892809D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.SocialPlatforms.ILocalUser GooglePlayGames.PlayGamesPlatform::get_localUser()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayGamesPlatform_get_localUser_m4ED16ED7C1ABAA79D5E6CAD96C2DF563E5E79AA4_inline (PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.PlayGamesUserProfile::get_gameId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_gameId_mB83996F3390539FEFFC0F6752B3A7EBCDB8E676C_inline (PlayGamesUserProfile_tEC3D4D5F9E3BCF681A4E64A7C3D73489F7BB6D32* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.PlayGamesLocalUser::get_authenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesLocalUser_get_authenticated_m5E4FC88391A6FBB723428F7B43A7B3B48EC78DE9 (PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform::RequestServerSideAccess(System.Boolean,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_RequestServerSideAccess_mCDDE95E76080EE7D9AF8234FBE380275F0B1AB32 (PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* __this, bool ___forceRefreshToken0, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___callback1, const RuntimeMethod* method) ;
// System.Void App/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m5AA458F8554116413C1D59DC4ADE9B22BBC37A92 (U3CU3Ec__DisplayClass2_0_tBAF0DA78EB88665DF7DBED943AE6C1734EE5979D* __this, const RuntimeMethod* method) ;
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* FirebaseAuth_get_DefaultInstance_m1DAD548CF76FE2B9B9DFB407D5B3058A932D1B9D (const RuntimeMethod* method) ;
// Firebase.Auth.Credential Firebase.Auth.PlayGamesAuthProvider::GetCredential(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* PlayGamesAuthProvider_GetCredential_m665A5562872F816D273FA8813BA76DDA84960DC2 (String_t* ___serverAuthCode0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithCredentialAsync(Firebase.Auth.Credential)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* FirebaseAuth_SignInWithCredentialAsync_m113AA2F02FEE5A28A9D49492AC5F33AA54A55D74 (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* ___credential0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA1A3987C0999C379F2DE5C4FC11270A1C6B91007 (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m549608C19B9ED5ECA2FD9094527278477B3A2E38 (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* __this, Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B*, Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*, const RuntimeMethod*))Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared)(__this, ___continuationAction0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::get_Result()
inline FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* __this, const RuntimeMethod* method)
{
	return ((  FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* (*) (Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.String Firebase.Auth.FirebaseUser::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_DisplayName_m813DCB1BFDE089FBF49FF697E77A48C85183CC6C (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, const RuntimeMethod* method) ;
// System.String Firebase.Auth.FirebaseUser::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0 (FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* __this, const RuntimeMethod* method) ;
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF (FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___obj0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void App::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void App_Start_m87C870577A97FF8C0E70BB6A396925E502F934A9 (App_t506E67571D38775D872E90C5C8A28E216246A66A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t38A40574AB80CC30FF578C805B326880626B49AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&App_U3CStartU3Eb__2_0_mB062B3DED4183E89592B43ADAA9C9CB0646A8CEB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325(((int32_t)60), NULL);
		// Application.runInBackground = true;
		Application_set_runInBackground_mF66D0FBF81A7EB10E9EB64666E02F1FF488D8C70((bool)1, NULL);
		// PlayGamesPlatform.Instance.Authenticate((status) =>
		// {
		//     if (status == SignInStatus.Success)
		//     {
		//         this.StartCoroutine(this.WaitForAuthenticate(() =>
		//         {
		//             Debug.Log(Social.localUser.id);
		//             Debug.Log(PlayGamesPlatform.Instance.localUser.id);
		//             Debug.Log(this.localUser);
		//             Debug.Log(this.localUser.gameId);
		//             Debug.Log(this.localUser.authenticated);
		// 
		//             //this.textUserId.text = this.localUser.id;
		// 
		//             PlayGamesPlatform.Instance.RequestServerSideAccess(true, (token) => {
		// 
		//                 Debug.Log("********* token *********");
		//                 Debug.Log(token);
		//                 Debug.Log("*************************");
		// 
		// 
		//                 FirebaseAuth auth = FirebaseAuth.DefaultInstance;
		// 
		//                 Credential credential = PlayGamesAuthProvider.GetCredential(token);
		// 
		//                 auth.SignInWithCredentialAsync(credential).ContinueWith(task => {
		//                     if (task.IsCanceled)
		//                     {
		//                         Debug.LogFormat("******** task.IsCanceled ********");
		//                         return;
		//                     }
		// 
		//                     if (task.IsFaulted)
		//                     {
		//                         Debug.LogFormat("******** task.IsFaulted ********");
		//                         return;
		//                     }
		// 
		//                     FirebaseUser newUser = task.Result;
		//                     if (newUser != null)
		//                     {
		//                         Debug.LogFormat("[newUser] DisplayName: {0}, UserId: {1}", newUser.DisplayName, newUser.UserId);
		//                     }
		//                     else
		//                     {
		//                         Debug.Log("newUser is null");
		//                     }
		// 
		// 
		//                     FirebaseUser currentUser = auth.CurrentUser;
		// 
		//                     if (currentUser != null)
		//                     {
		//                         Debug.LogFormat("[currentUser] DisplayName: {0}, UserId: {1}", currentUser.DisplayName, currentUser.UserId);
		//                         string uid = currentUser.UserId;
		//                         this.textUserId.text = uid;
		//                     }
		//                     else
		//                     {
		//                         Debug.LogFormat("currentUser is null");
		//                     }
		// 
		//                 });
		// 
		// 
		//             });
		// 
		// 
		//         }));
		//     }
		// 
		// });
		PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* L_0;
		L_0 = PlayGamesPlatform_get_Instance_m8CAF47CD84B66E81A3F6DD2D00CACA87909A4565(NULL);
		Action_1_t38A40574AB80CC30FF578C805B326880626B49AF* L_1 = (Action_1_t38A40574AB80CC30FF578C805B326880626B49AF*)il2cpp_codegen_object_new(Action_1_t38A40574AB80CC30FF578C805B326880626B49AF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m24EBA5E2D3AA733A71F462D8A93C172F7CCA8926(L_1, __this, (intptr_t)((void*)App_U3CStartU3Eb__2_0_mB062B3DED4183E89592B43ADAA9C9CB0646A8CEB_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		PlayGamesPlatform_Authenticate_m75BB906DCAE3761C35DC362CEF42CE369C80BAF4(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator App::WaitForAuthenticate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* App_WaitForAuthenticate_m4251FADAF12A2CCDAE92A25F2DC8E22DFB9D5AD6 (App_t506E67571D38775D872E90C5C8A28E216246A66A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForAuthenticateU3Ed__3_t832678D1518E17550528E496803A8E39D75F371B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForAuthenticateU3Ed__3_t832678D1518E17550528E496803A8E39D75F371B* L_0 = (U3CWaitForAuthenticateU3Ed__3_t832678D1518E17550528E496803A8E39D75F371B*)il2cpp_codegen_object_new(U3CWaitForAuthenticateU3Ed__3_t832678D1518E17550528E496803A8E39D75F371B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitForAuthenticateU3Ed__3__ctor_mD4B3D049AE1EED16EE3ADCB08E2F2B9B15895D2C(L_0, 0, NULL);
		U3CWaitForAuthenticateU3Ed__3_t832678D1518E17550528E496803A8E39D75F371B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CWaitForAuthenticateU3Ed__3_t832678D1518E17550528E496803A8E39D75F371B* L_2 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___callback0;
		NullCheck(L_2);
		L_2->___callback_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___callback_3), (void*)L_3);
		return L_2;
	}
}
// System.Void App::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void App__ctor_mA12E1EAC0E6761DB7C7F1FF95E4A8FECD4E38084 (App_t506E67571D38775D872E90C5C8A28E216246A66A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void App::<Start>b__2_0(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void App_U3CStartU3Eb__2_0_mB062B3DED4183E89592B43ADAA9C9CB0646A8CEB (App_t506E67571D38775D872E90C5C8A28E216246A66A* __this, int32_t ___status0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&App_U3CStartU3Eb__2_1_m2E010B3AFBB04A7F294603161156BDFD148EAD8E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (status == SignInStatus.Success)
		int32_t L_0 = ___status0;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// this.StartCoroutine(this.WaitForAuthenticate(() =>
		// {
		//     Debug.Log(Social.localUser.id);
		//     Debug.Log(PlayGamesPlatform.Instance.localUser.id);
		//     Debug.Log(this.localUser);
		//     Debug.Log(this.localUser.gameId);
		//     Debug.Log(this.localUser.authenticated);
		// 
		//     //this.textUserId.text = this.localUser.id;
		// 
		//     PlayGamesPlatform.Instance.RequestServerSideAccess(true, (token) => {
		// 
		//         Debug.Log("********* token *********");
		//         Debug.Log(token);
		//         Debug.Log("*************************");
		// 
		// 
		//         FirebaseAuth auth = FirebaseAuth.DefaultInstance;
		// 
		//         Credential credential = PlayGamesAuthProvider.GetCredential(token);
		// 
		//         auth.SignInWithCredentialAsync(credential).ContinueWith(task => {
		//             if (task.IsCanceled)
		//             {
		//                 Debug.LogFormat("******** task.IsCanceled ********");
		//                 return;
		//             }
		// 
		//             if (task.IsFaulted)
		//             {
		//                 Debug.LogFormat("******** task.IsFaulted ********");
		//                 return;
		//             }
		// 
		//             FirebaseUser newUser = task.Result;
		//             if (newUser != null)
		//             {
		//                 Debug.LogFormat("[newUser] DisplayName: {0}, UserId: {1}", newUser.DisplayName, newUser.UserId);
		//             }
		//             else
		//             {
		//                 Debug.Log("newUser is null");
		//             }
		// 
		// 
		//             FirebaseUser currentUser = auth.CurrentUser;
		// 
		//             if (currentUser != null)
		//             {
		//                 Debug.LogFormat("[currentUser] DisplayName: {0}, UserId: {1}", currentUser.DisplayName, currentUser.UserId);
		//                 string uid = currentUser.UserId;
		//                 this.textUserId.text = uid;
		//             }
		//             else
		//             {
		//                 Debug.LogFormat("currentUser is null");
		//             }
		// 
		//         });
		// 
		// 
		//     });
		// 
		// 
		// }));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)App_U3CStartU3Eb__2_1_m2E010B3AFBB04A7F294603161156BDFD148EAD8E_RuntimeMethod_var), NULL);
		RuntimeObject* L_2;
		L_2 = App_WaitForAuthenticate_m4251FADAF12A2CCDAE92A25F2DC8E22DFB9D5AD6(__this, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
	}

IL_001c:
	{
		// });
		return;
	}
}
// System.Void App::<Start>b__2_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void App_U3CStartU3Eb__2_1_m2E010B3AFBB04A7F294603161156BDFD148EAD8E (App_t506E67571D38775D872E90C5C8A28E216246A66A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&App_U3CStartU3Eb__2_2_m94FE04186831B6446A3FD75B4B6287D5F6FB61C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUserProfile_tF23DFE5CF90A1020C168F5751F7C4F2B628E22E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(Social.localUser.id);
		RuntimeObject* L_0;
		L_0 = Social_get_localUser_mD8E23AB2D7091CC74F5F6D2F509426A5B892809D(NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.IUserProfile::get_id() */, IUserProfile_tF23DFE5CF90A1020C168F5751F7C4F2B628E22E3_il2cpp_TypeInfo_var, L_0);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// Debug.Log(PlayGamesPlatform.Instance.localUser.id);
		PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* L_2;
		L_2 = PlayGamesPlatform_get_Instance_m8CAF47CD84B66E81A3F6DD2D00CACA87909A4565(NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = PlayGamesPlatform_get_localUser_m4ED16ED7C1ABAA79D5E6CAD96C2DF563E5E79AA4_inline(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.IUserProfile::get_id() */, IUserProfile_tF23DFE5CF90A1020C168F5751F7C4F2B628E22E3_il2cpp_TypeInfo_var, L_3);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		// Debug.Log(this.localUser);
		PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73* L_5 = __this->___localUser_5;
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// Debug.Log(this.localUser.gameId);
		PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73* L_6 = __this->___localUser_5;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = PlayGamesUserProfile_get_gameId_mB83996F3390539FEFFC0F6752B3A7EBCDB8E676C_inline(L_6, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_7, NULL);
		// Debug.Log(this.localUser.authenticated);
		PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73* L_8 = __this->___localUser_5;
		NullCheck(L_8);
		bool L_9;
		L_9 = PlayGamesLocalUser_get_authenticated_m5E4FC88391A6FBB723428F7B43A7B3B48EC78DE9(L_8, NULL);
		bool L_10 = L_9;
		RuntimeObject* L_11 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_10);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_11, NULL);
		// PlayGamesPlatform.Instance.RequestServerSideAccess(true, (token) => {
		// 
		//     Debug.Log("********* token *********");
		//     Debug.Log(token);
		//     Debug.Log("*************************");
		// 
		// 
		//     FirebaseAuth auth = FirebaseAuth.DefaultInstance;
		// 
		//     Credential credential = PlayGamesAuthProvider.GetCredential(token);
		// 
		//     auth.SignInWithCredentialAsync(credential).ContinueWith(task => {
		//         if (task.IsCanceled)
		//         {
		//             Debug.LogFormat("******** task.IsCanceled ********");
		//             return;
		//         }
		// 
		//         if (task.IsFaulted)
		//         {
		//             Debug.LogFormat("******** task.IsFaulted ********");
		//             return;
		//         }
		// 
		//         FirebaseUser newUser = task.Result;
		//         if (newUser != null)
		//         {
		//             Debug.LogFormat("[newUser] DisplayName: {0}, UserId: {1}", newUser.DisplayName, newUser.UserId);
		//         }
		//         else
		//         {
		//             Debug.Log("newUser is null");
		//         }
		// 
		// 
		//         FirebaseUser currentUser = auth.CurrentUser;
		// 
		//         if (currentUser != null)
		//         {
		//             Debug.LogFormat("[currentUser] DisplayName: {0}, UserId: {1}", currentUser.DisplayName, currentUser.UserId);
		//             string uid = currentUser.UserId;
		//             this.textUserId.text = uid;
		//         }
		//         else
		//         {
		//             Debug.LogFormat("currentUser is null");
		//         }
		// 
		//     });
		// 
		// 
		// });
		PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* L_12;
		L_12 = PlayGamesPlatform_get_Instance_m8CAF47CD84B66E81A3F6DD2D00CACA87909A4565(NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_13 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_13, __this, (intptr_t)((void*)App_U3CStartU3Eb__2_2_m94FE04186831B6446A3FD75B4B6287D5F6FB61C0_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		PlayGamesPlatform_RequestServerSideAccess_mCDDE95E76080EE7D9AF8234FBE380275F0B1AB32(L_12, (bool)1, L_13, NULL);
		// }));
		return;
	}
}
// System.Void App::<Start>b__2_2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void App_U3CStartU3Eb__2_2_m94FE04186831B6446A3FD75B4B6287D5F6FB61C0 (App_t506E67571D38775D872E90C5C8A28E216246A66A* __this, String_t* ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesAuthProvider_tA88971B9E490F90C4D38EA679FD693CC08371FB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m549608C19B9ED5ECA2FD9094527278477B3A2E38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CStartU3Eb__3_mBAC6136F73BCCA53B083DC6B3256B9AEFC8EC123_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tBAF0DA78EB88665DF7DBED943AE6C1734EE5979D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ABB8684B5881636CD8671B00BA72BED922B47CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0C8227C0252EDE2510740FD9A71B958752B1A8C);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tBAF0DA78EB88665DF7DBED943AE6C1734EE5979D* V_0 = NULL;
	Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tBAF0DA78EB88665DF7DBED943AE6C1734EE5979D* L_0 = (U3CU3Ec__DisplayClass2_0_tBAF0DA78EB88665DF7DBED943AE6C1734EE5979D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tBAF0DA78EB88665DF7DBED943AE6C1734EE5979D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m5AA458F8554116413C1D59DC4ADE9B22BBC37A92(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tBAF0DA78EB88665DF7DBED943AE6C1734EE5979D* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_1), (void*)__this);
		// Debug.Log("********* token *********");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral8ABB8684B5881636CD8671B00BA72BED922B47CD, NULL);
		// Debug.Log(token);
		String_t* L_2 = ___token0;
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// Debug.Log("*************************");
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralC0C8227C0252EDE2510740FD9A71B958752B1A8C, NULL);
		// FirebaseAuth auth = FirebaseAuth.DefaultInstance;
		U3CU3Ec__DisplayClass2_0_tBAF0DA78EB88665DF7DBED943AE6C1734EE5979D* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF_il2cpp_TypeInfo_var);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_4;
		L_4 = FirebaseAuth_get_DefaultInstance_m1DAD548CF76FE2B9B9DFB407D5B3058A932D1B9D(NULL);
		NullCheck(L_3);
		L_3->___auth_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___auth_0), (void*)L_4);
		// Credential credential = PlayGamesAuthProvider.GetCredential(token);
		String_t* L_5 = ___token0;
		il2cpp_codegen_runtime_class_init_inline(PlayGamesAuthProvider_tA88971B9E490F90C4D38EA679FD693CC08371FB2_il2cpp_TypeInfo_var);
		Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* L_6;
		L_6 = PlayGamesAuthProvider_GetCredential_m665A5562872F816D273FA8813BA76DDA84960DC2(L_5, NULL);
		V_1 = L_6;
		// auth.SignInWithCredentialAsync(credential).ContinueWith(task => {
		//     if (task.IsCanceled)
		//     {
		//         Debug.LogFormat("******** task.IsCanceled ********");
		//         return;
		//     }
		// 
		//     if (task.IsFaulted)
		//     {
		//         Debug.LogFormat("******** task.IsFaulted ********");
		//         return;
		//     }
		// 
		//     FirebaseUser newUser = task.Result;
		//     if (newUser != null)
		//     {
		//         Debug.LogFormat("[newUser] DisplayName: {0}, UserId: {1}", newUser.DisplayName, newUser.UserId);
		//     }
		//     else
		//     {
		//         Debug.Log("newUser is null");
		//     }
		// 
		// 
		//     FirebaseUser currentUser = auth.CurrentUser;
		// 
		//     if (currentUser != null)
		//     {
		//         Debug.LogFormat("[currentUser] DisplayName: {0}, UserId: {1}", currentUser.DisplayName, currentUser.UserId);
		//         string uid = currentUser.UserId;
		//         this.textUserId.text = uid;
		//     }
		//     else
		//     {
		//         Debug.LogFormat("currentUser is null");
		//     }
		// 
		// });
		U3CU3Ec__DisplayClass2_0_tBAF0DA78EB88665DF7DBED943AE6C1734EE5979D* L_7 = V_0;
		NullCheck(L_7);
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_8 = L_7->___auth_0;
		Credential_t32FB2E0F8AAA0B6895D10531CE82C9FBD27E27D1* L_9 = V_1;
		NullCheck(L_8);
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_10;
		L_10 = FirebaseAuth_SignInWithCredentialAsync_m113AA2F02FEE5A28A9D49492AC5F33AA54A55D74(L_8, L_9, NULL);
		U3CU3Ec__DisplayClass2_0_tBAF0DA78EB88665DF7DBED943AE6C1734EE5979D* L_11 = V_0;
		Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9* L_12 = (Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9*)il2cpp_codegen_object_new(Action_1_t7A72BB5CDA51C7604122D1F351F54CD826121DA9_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_mA1A3987C0999C379F2DE5C4FC11270A1C6B91007(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CStartU3Eb__3_mBAC6136F73BCCA53B083DC6B3256B9AEFC8EC123_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_13;
		L_13 = Task_1_ContinueWith_m549608C19B9ED5ECA2FD9094527278477B3A2E38(L_10, L_12, Task_1_ContinueWith_m549608C19B9ED5ECA2FD9094527278477B3A2E38_RuntimeMethod_var);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void App/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m5AA458F8554116413C1D59DC4ADE9B22BBC37A92 (U3CU3Ec__DisplayClass2_0_tBAF0DA78EB88665DF7DBED943AE6C1734EE5979D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void App/<>c__DisplayClass2_0::<Start>b__3(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CStartU3Eb__3_mBAC6136F73BCCA53B083DC6B3256B9AEFC8EC123 (U3CU3Ec__DisplayClass2_0_tBAF0DA78EB88665DF7DBED943AE6C1734EE5979D* __this, Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0976EEC9F6D44C811C89E574BB2FACB53AEBC479);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57450D0AC4A9BEF7AB4584D11DED9144C554DA8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8006218D2F3FFE24B5000B0D23B249DF2BCF2A5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88D19FFC2BF3C0C1FF5984DB06DAF954BF4C1288);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2D7DC86DBF32245A40016AB3D70B95306B8F122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF65EACA11C9D5B7391F5F22C91036D5BEFB38F8);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* V_0 = NULL;
	FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// if (task.IsCanceled)
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogFormat("******** task.IsCanceled ********");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral0976EEC9F6D44C811C89E574BB2FACB53AEBC479, L_2, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// if (task.IsFaulted)
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_3 = ___task0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogFormat("******** task.IsFaulted ********");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral8006218D2F3FFE24B5000B0D23B249DF2BCF2A5B, L_5, NULL);
		// return;
		return;
	}

IL_0030:
	{
		// FirebaseUser newUser = task.Result;
		Task_1_tE57E3A2330CE37367B7296D598E85906D967FF5B* L_6 = ___task0;
		NullCheck(L_6);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_7;
		L_7 = Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F(L_6, Task_1_get_Result_m26F14C4A359E9DF5528B9C5045782846D1ABE73F_RuntimeMethod_var);
		V_0 = L_7;
		// if (newUser != null)
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_8 = V_0;
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		// Debug.LogFormat("[newUser] DisplayName: {0}, UserId: {1}", newUser.DisplayName, newUser.UserId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = FirebaseUser_get_DisplayName_m813DCB1BFDE089FBF49FF697E77A48C85183CC6C(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_10;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_14, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_15);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral57450D0AC4A9BEF7AB4584D11DED9144C554DA8F, L_13, NULL);
		goto IL_0068;
	}

IL_005e:
	{
		// Debug.Log("newUser is null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralD2D7DC86DBF32245A40016AB3D70B95306B8F122, NULL);
	}

IL_0068:
	{
		// FirebaseUser currentUser = auth.CurrentUser;
		FirebaseAuth_tD2FC1EC1E5B6EF920276AFABA103B8B7E2AE2DAF* L_16 = __this->___auth_0;
		NullCheck(L_16);
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_17;
		L_17 = FirebaseAuth_get_CurrentUser_m99426341853624A9A11F81CFE5BEBCC293501ABF(L_16, NULL);
		V_1 = L_17;
		// if (currentUser != null)
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_18 = V_1;
		if (!L_18)
		{
			goto IL_00b2;
		}
	}
	{
		// Debug.LogFormat("[currentUser] DisplayName: {0}, UserId: {1}", currentUser.DisplayName, currentUser.UserId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_21 = V_1;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = FirebaseUser_get_DisplayName_m813DCB1BFDE089FBF49FF697E77A48C85183CC6C(L_21, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_20;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_24 = V_1;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_24, NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_25);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral88D19FFC2BF3C0C1FF5984DB06DAF954BF4C1288, L_23, NULL);
		// string uid = currentUser.UserId;
		FirebaseUser_t119C5023B23CA61BCB1A51D0A2424DC7B4E42A3A* L_26 = V_1;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = FirebaseUser_get_UserId_mAF49403FBD3030631002AAC0B21BAE9E4F9473E0(L_26, NULL);
		V_2 = L_27;
		// this.textUserId.text = uid;
		App_t506E67571D38775D872E90C5C8A28E216246A66A* L_28 = __this->___U3CU3E4__this_1;
		NullCheck(L_28);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = L_28->___textUserId_4;
		String_t* L_30 = V_2;
		NullCheck(L_29);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, L_30);
		return;
	}

IL_00b2:
	{
		// Debug.LogFormat("currentUser is null");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31;
		L_31 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralFF65EACA11C9D5B7391F5F22C91036D5BEFB38F8, L_31, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void App/<WaitForAuthenticate>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForAuthenticateU3Ed__3__ctor_mD4B3D049AE1EED16EE3ADCB08E2F2B9B15895D2C (U3CWaitForAuthenticateU3Ed__3_t832678D1518E17550528E496803A8E39D75F371B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void App/<WaitForAuthenticate>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForAuthenticateU3Ed__3_System_IDisposable_Dispose_m50CCFDFBC9F2265AA2F8B134F37B46A0EC0E3E86 (U3CWaitForAuthenticateU3Ed__3_t832678D1518E17550528E496803A8E39D75F371B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean App/<WaitForAuthenticate>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForAuthenticateU3Ed__3_MoveNext_m460CE0FB6796D3DBBF426D3DAEC57CEDD219F064 (U3CWaitForAuthenticateU3Ed__3_t832678D1518E17550528E496803A8E39D75F371B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	App_t506E67571D38775D872E90C5C8A28E216246A66A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		App_t506E67571D38775D872E90C5C8A28E216246A66A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// if (this.localUser == null)
		App_t506E67571D38775D872E90C5C8A28E216246A66A* L_4 = V_1;
		NullCheck(L_4);
		PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73* L_5 = L_4->___localUser_5;
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		// this.localUser = PlayGamesPlatform.Instance.localUser as PlayGamesLocalUser;
		App_t506E67571D38775D872E90C5C8A28E216246A66A* L_6 = V_1;
		PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* L_7;
		L_7 = PlayGamesPlatform_get_Instance_m8CAF47CD84B66E81A3F6DD2D00CACA87909A4565(NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = PlayGamesPlatform_get_localUser_m4ED16ED7C1ABAA79D5E6CAD96C2DF563E5E79AA4_inline(L_7, NULL);
		NullCheck(L_6);
		L_6->___localUser_5 = ((PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73*)IsInstClass((RuntimeObject*)L_8, PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___localUser_5), (void*)((PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73*)IsInstClass((RuntimeObject*)L_8, PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73_il2cpp_TypeInfo_var)));
		// break;
		goto IL_0056;
	}

IL_003d:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_001e;
	}

IL_0056:
	{
		// callback();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = __this->___callback_3;
		NullCheck(L_9);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_9, NULL);
		// }
		return (bool)0;
	}
}
// System.Object App/<WaitForAuthenticate>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForAuthenticateU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA44836C9F41E24121EBBE7CB7A06E6A3EEBE02B7 (U3CWaitForAuthenticateU3Ed__3_t832678D1518E17550528E496803A8E39D75F371B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void App/<WaitForAuthenticate>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForAuthenticateU3Ed__3_System_Collections_IEnumerator_Reset_mE30B1BC764F83EB0800E7884E06820E8B70B7223 (U3CWaitForAuthenticateU3Ed__3_t832678D1518E17550528E496803A8E39D75F371B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForAuthenticateU3Ed__3_System_Collections_IEnumerator_Reset_mE30B1BC764F83EB0800E7884E06820E8B70B7223_RuntimeMethod_var)));
	}
}
// System.Object App/<WaitForAuthenticate>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForAuthenticateU3Ed__3_System_Collections_IEnumerator_get_Current_m37084FB771E7DE8B74322F341E65931DD7B7AB2C (U3CWaitForAuthenticateU3Ed__3_t832678D1518E17550528E496803A8E39D75F371B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GPGSManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPGSManager_Awake_mFF1140CD9255AEC1A9D7A59F3646231A4DDD8DEA (GPGSManager_t0017A3605213D0557FB238FD03B04CE992136FA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPGSManager_t0017A3605213D0557FB238FD03B04CE992136FA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GPGSManager.instance = this;
		((GPGSManager_t0017A3605213D0557FB238FD03B04CE992136FA7_StaticFields*)il2cpp_codegen_static_fields_for(GPGSManager_t0017A3605213D0557FB238FD03B04CE992136FA7_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GPGSManager_t0017A3605213D0557FB238FD03B04CE992136FA7_StaticFields*)il2cpp_codegen_static_fields_for(GPGSManager_t0017A3605213D0557FB238FD03B04CE992136FA7_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void GPGSManager::SignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPGSManager_SignIn_m288A9F0A8D9467096F528A0D7B9D4F7D4BC1615A (GPGSManager_t0017A3605213D0557FB238FD03B04CE992136FA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t38A40574AB80CC30FF578C805B326880626B49AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPGSManager_U3CSignInU3Eb__3_0_m553AB5B8731DDF3793B4143B6D4E8B09C077BFC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesPlatform.Instance.Authenticate((status) => {
		//     Debug.Log(status);
		//     if (status == SignInStatus.Success)
		//     {
		//         Debug.Log("success");
		//         // Continue with Play Games Services
		//         this.onSignIn(true);
		//     }
		//     else
		//     {
		//         // Disable your integration with Play Games Services or show a login button
		//         // to ask users to sign-in. Clicking it should call
		//         // PlayGamesPlatform.Instance.ManuallyAuthenticate(ProcessAuthentication).
		//         this.onSignIn(false);
		//     }
		// });
		PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* L_0;
		L_0 = PlayGamesPlatform_get_Instance_m8CAF47CD84B66E81A3F6DD2D00CACA87909A4565(NULL);
		Action_1_t38A40574AB80CC30FF578C805B326880626B49AF* L_1 = (Action_1_t38A40574AB80CC30FF578C805B326880626B49AF*)il2cpp_codegen_object_new(Action_1_t38A40574AB80CC30FF578C805B326880626B49AF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m24EBA5E2D3AA733A71F462D8A93C172F7CCA8926(L_1, __this, (intptr_t)((void*)GPGSManager_U3CSignInU3Eb__3_0_m553AB5B8731DDF3793B4143B6D4E8B09C077BFC9_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		PlayGamesPlatform_Authenticate_m75BB906DCAE3761C35DC362CEF42CE369C80BAF4(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void GPGSManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPGSManager__ctor_m7F27827E74247A000CE720C3BD76592168193D6E (GPGSManager_t0017A3605213D0557FB238FD03B04CE992136FA7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void GPGSManager::<SignIn>b__3_0(GooglePlayGames.BasicApi.SignInStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPGSManager_U3CSignInU3Eb__3_0_m553AB5B8731DDF3793B4143B6D4E8B09C077BFC9 (GPGSManager_t0017A3605213D0557FB238FD03B04CE992136FA7* __this, int32_t ___status0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInStatus_t7DA6625C4819AB74C191FCDE336DC602FF4782F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(status);
		int32_t L_0 = ___status0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(SignInStatus_t7DA6625C4819AB74C191FCDE336DC602FF4782F1_il2cpp_TypeInfo_var, &L_1);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// if (status == SignInStatus.Success)
		int32_t L_3 = ___status0;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		// Debug.Log("success");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4, NULL);
		// this.onSignIn(true);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = __this->___onSignIn_5;
		NullCheck(L_4);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_4, (bool)1, NULL);
		return;
	}

IL_0025:
	{
		// this.onSignIn(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_5 = __this->___onSignIn_5;
		NullCheck(L_5);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_5, (bool)0, NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PlayGamesPlatform_get_localUser_m4ED16ED7C1ABAA79D5E6CAD96C2DF563E5E79AA4_inline (PlayGamesPlatform_tD21BC276B673A2B5309AF3B508E069C8594FAED9* __this, const RuntimeMethod* method) 
{
	{
		// get { return mLocalUser; }
		PlayGamesLocalUser_t518DD2559306213379CC2DF858E7DD18B46ADE73* L_0 = __this->___mLocalUser_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_gameId_mB83996F3390539FEFFC0F6752B3A7EBCDB8E676C_inline (PlayGamesUserProfile_tEC3D4D5F9E3BCF681A4E64A7C3D73489F7BB6D32* __this, const RuntimeMethod* method) 
{
	{
		// get { return mPlayerId; }
		String_t* L_0 = __this->___mPlayerId_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
