#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Curiologix.DotForSound[]
struct DotForSoundU5BU5D_tA9FB589A8B85E9C338BA58A6CD4BA7EF4C34148E;
// Curiologix.DotLight[]
struct DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Curiologix.WheelPart[]
struct WheelPartU5BU5D_t2E8E14E89A105176AED8AC921111458BCA417AC2;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Curiologix.DotForSound
struct DotForSound_tCA41E1C53D2723C8598957A4800027AD727B9D08;
// Curiologix.DotLight
struct DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// Curiologix.FortuneWheel
struct FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00;
// Curiologix.FortuneWheelConfig
struct FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// LevelLoader
struct LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuManager
struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Curiologix.SetSortOrder
struct SetSortOrder_t00B82E8F6AB6D74E90690210AEC37649E3D72896;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734;
// Soundcontroller
struct Soundcontroller_t848003500E1F9F559803EBD92BDE1EAF26715C49;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Curiologix.TimerForSpin
struct TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// VfxSpinner
struct VfxSpinner_tBA40B38B07B13BB0BD034D4B7BE323EC0BE6864A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Curiologix.WheelPart
struct WheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// Curiologix.FortuneWheel/<IncrementCoroutine>d__40
struct U3CIncrementCoroutineU3Ed__40_t6225014E657B2DC5F6EDE9BD0C451CC82333577E;
// Curiologix.FortuneWheel/<LightAnimDuringSpinning>d__44
struct U3CLightAnimDuringSpinningU3Ed__44_tBB28DDA976080673F591183F17B0660656F90B09;
// Curiologix.FortuneWheel/<PlayAnimationWhenStationary>d__43
struct U3CPlayAnimationWhenStationaryU3Ed__43_t47B726FA24F91936DAFF27CAFCD4821408EB3927;
// Curiologix.FortuneWheel/<RotateWheel>d__37
struct U3CRotateWheelU3Ed__37_tC9B0298966D6F6F7CCD86B31654F8DD0C632FE7C;
// Curiologix.FortuneWheel/<ShowHideParticles>d__39
struct U3CShowHideParticlesU3Ed__39_t90379D55FC4B1E99DB43E10726E8C031C741E2E4;
// Curiologix.FortuneWheel/<SymetricLightMovement>d__45
struct U3CSymetricLightMovementU3Ed__45_t7DE666D3ADF85875343B81A02A0E0BC8F867D5D6;
// LevelLoader/<EnableShop>d__9
struct U3CEnableShopU3Ed__9_t4C7AC796935E856C17601F639D1E1AE1EA395F83;
// LevelLoader/<LoadAsyncronously>d__7
struct U3CLoadAsyncronouslyU3Ed__7_tEB0856CB5FF2B40BDD14DD9DDC1B75D86387CF95;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MenuManager/<waitFunc>d__27
struct U3CwaitFuncU3Ed__27_t23587205F5C4303B07895A79FB2C9AE8602E0D6D;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnableShopU3Ed__9_t4C7AC796935E856C17601F639D1E1AE1EA395F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CIncrementCoroutineU3Ed__40_t6225014E657B2DC5F6EDE9BD0C451CC82333577E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLightAnimDuringSpinningU3Ed__44_tBB28DDA976080673F591183F17B0660656F90B09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAsyncronouslyU3Ed__7_tEB0856CB5FF2B40BDD14DD9DDC1B75D86387CF95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPlayAnimationWhenStationaryU3Ed__43_t47B726FA24F91936DAFF27CAFCD4821408EB3927_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRotateWheelU3Ed__37_tC9B0298966D6F6F7CCD86B31654F8DD0C632FE7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowHideParticlesU3Ed__39_t90379D55FC4B1E99DB43E10726E8C031C741E2E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSymetricLightMovementU3Ed__45_t7DE666D3ADF85875343B81A02A0E0BC8F867D5D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CwaitFuncU3Ed__27_t23587205F5C4303B07895A79FB2C9AE8602E0D6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CD979583B209CE71603EFC4A398E6A9EFA8D872;
IL2CPP_EXTERN_C String_t* _stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15;
IL2CPP_EXTERN_C String_t* _stringLiteral1B6389656A573B82D2FA9B8E3FFACD22FA2D4DD6;
IL2CPP_EXTERN_C String_t* _stringLiteral240BE9B5E609F0DD8657150691504C4DE92A0925;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8049D9C06BF1FCE9313E29B5CBA61FD5914E30;
IL2CPP_EXTERN_C String_t* _stringLiteral568704A0AAB2F25B075E4112CA518179589B1DDA;
IL2CPP_EXTERN_C String_t* _stringLiteral5C830828FEBAC0B8FE356B62310CF43ED9A1C00A;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral7F5025CEFE1A803DF878E6CD06EE874B9B130F66;
IL2CPP_EXTERN_C String_t* _stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1;
IL2CPP_EXTERN_C String_t* _stringLiteralBE0646249E244D318C4EF9D3C94A17E48E235140;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDFCAED12F751A68E2304E976EE85885D4B2EA98E;
IL2CPP_EXTERN_C String_t* _stringLiteralEE6D52DC49F4BAA2DD129865CABCCE9455509DF0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisDotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E_m63E844D1292A19DE3535FB87D4395764E770880F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisWheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695_mAC934D1DB26965B342FD72C3C3CB2A86650D71A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FortuneWheel_onClickSpinNow_mF5DB23DCC5AB90DB7BCB60B3BDD82E5AE2A120A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisFortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78_m7586653EDE9AC0C806A8CA74B1D2D7F3B88CF69D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisFortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00_mC446EB88548AEC9AE744E2169E566B42E734E913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnableShopU3Ed__9_System_Collections_IEnumerator_Reset_m37154B3D9B4C12DDEDE574D446E99B5E1D43D2AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIncrementCoroutineU3Ed__40_System_Collections_IEnumerator_Reset_m245ECF1B40B5C692A4C5ED1009CD803455051030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLightAnimDuringSpinningU3Ed__44_System_Collections_IEnumerator_Reset_m6408E7A414B1B55B0E604CB182AE54D45A8D04BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAsyncronouslyU3Ed__7_System_Collections_IEnumerator_Reset_mE0D11ADEC3EB996AC4693E409ABE39EDD655583F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlayAnimationWhenStationaryU3Ed__43_System_Collections_IEnumerator_Reset_m69CD48DA76C47E3B20417E85006DDB74E8B2F3B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRotateWheelU3Ed__37_System_Collections_IEnumerator_Reset_m427533A20C0A633AFFA6374D943D0B665B5424AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowHideParticlesU3Ed__39_System_Collections_IEnumerator_Reset_m165FA4AA22E65E695DFE25492917FB29BE860C73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSymetricLightMovementU3Ed__45_System_Collections_IEnumerator_Reset_m21B5D59D319B5034CDB59FF0D94A8AEF2AA59AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CwaitFuncU3Ed__27_System_Collections_IEnumerator_Reset_m98C3758055D3CB5CB8ECCBB934FDF4062FA078B0_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
struct DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct WheelPartU5BU5D_t2E8E14E89A105176AED8AC921111458BCA417AC2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// Curiologix.FortuneWheel/<IncrementCoroutine>d__40
struct U3CIncrementCoroutineU3Ed__40_t6225014E657B2DC5F6EDE9BD0C451CC82333577E  : public RuntimeObject
{
	// System.Int32 Curiologix.FortuneWheel/<IncrementCoroutine>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Curiologix.FortuneWheel/<IncrementCoroutine>d__40::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.UI.Text Curiologix.FortuneWheel/<IncrementCoroutine>d__40::l
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___l_2;
	// System.Int32 Curiologix.FortuneWheel/<IncrementCoroutine>d__40::startingValue
	int32_t ___startingValue_3;
	// System.Int32 Curiologix.FortuneWheel/<IncrementCoroutine>d__40::targetValue
	int32_t ___targetValue_4;
	// System.Single Curiologix.FortuneWheel/<IncrementCoroutine>d__40::<time>5__2
	float ___U3CtimeU3E5__2_5;
	// System.Single Curiologix.FortuneWheel/<IncrementCoroutine>d__40::<incrementTime>5__3
	float ___U3CincrementTimeU3E5__3_6;
};

// Curiologix.FortuneWheel/<LightAnimDuringSpinning>d__44
struct U3CLightAnimDuringSpinningU3Ed__44_tBB28DDA976080673F591183F17B0660656F90B09  : public RuntimeObject
{
	// System.Int32 Curiologix.FortuneWheel/<LightAnimDuringSpinning>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Curiologix.FortuneWheel/<LightAnimDuringSpinning>d__44::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Curiologix.FortuneWheel/<LightAnimDuringSpinning>d__44::index
	int32_t ___index_2;
	// Curiologix.FortuneWheel Curiologix.FortuneWheel/<LightAnimDuringSpinning>d__44::<>4__this
	FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* ___U3CU3E4__this_3;
};

// Curiologix.FortuneWheel/<PlayAnimationWhenStationary>d__43
struct U3CPlayAnimationWhenStationaryU3Ed__43_t47B726FA24F91936DAFF27CAFCD4821408EB3927  : public RuntimeObject
{
	// System.Int32 Curiologix.FortuneWheel/<PlayAnimationWhenStationary>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Curiologix.FortuneWheel/<PlayAnimationWhenStationary>d__43::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Curiologix.FortuneWheel Curiologix.FortuneWheel/<PlayAnimationWhenStationary>d__43::<>4__this
	FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* ___U3CU3E4__this_2;
	// UnityEngine.Sprite Curiologix.FortuneWheel/<PlayAnimationWhenStationary>d__43::sp1
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sp1_3;
	// UnityEngine.Sprite Curiologix.FortuneWheel/<PlayAnimationWhenStationary>d__43::sp2
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sp2_4;
};

// Curiologix.FortuneWheel/<RotateWheel>d__37
struct U3CRotateWheelU3Ed__37_tC9B0298966D6F6F7CCD86B31654F8DD0C632FE7C  : public RuntimeObject
{
	// System.Int32 Curiologix.FortuneWheel/<RotateWheel>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Curiologix.FortuneWheel/<RotateWheel>d__37::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Curiologix.FortuneWheel Curiologix.FortuneWheel/<RotateWheel>d__37::<>4__this
	FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* ___U3CU3E4__this_2;
	// System.Single Curiologix.FortuneWheel/<RotateWheel>d__37::maxAngle
	float ___maxAngle_3;
	// System.Single Curiologix.FortuneWheel/<RotateWheel>d__37::time
	float ___time_4;
	// System.Single Curiologix.FortuneWheel/<RotateWheel>d__37::<timer>5__2
	float ___U3CtimerU3E5__2_5;
	// System.Single Curiologix.FortuneWheel/<RotateWheel>d__37::<startAngle>5__3
	float ___U3CstartAngleU3E5__3_6;
};

// Curiologix.FortuneWheel/<ShowHideParticles>d__39
struct U3CShowHideParticlesU3Ed__39_t90379D55FC4B1E99DB43E10726E8C031C741E2E4  : public RuntimeObject
{
	// System.Int32 Curiologix.FortuneWheel/<ShowHideParticles>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Curiologix.FortuneWheel/<ShowHideParticles>d__39::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Curiologix.FortuneWheel Curiologix.FortuneWheel/<ShowHideParticles>d__39::<>4__this
	FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* ___U3CU3E4__this_2;
};

// Curiologix.FortuneWheel/<SymetricLightMovement>d__45
struct U3CSymetricLightMovementU3Ed__45_t7DE666D3ADF85875343B81A02A0E0BC8F867D5D6  : public RuntimeObject
{
	// System.Int32 Curiologix.FortuneWheel/<SymetricLightMovement>d__45::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Curiologix.FortuneWheel/<SymetricLightMovement>d__45::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Curiologix.FortuneWheel/<SymetricLightMovement>d__45::index
	int32_t ___index_2;
	// Curiologix.FortuneWheel Curiologix.FortuneWheel/<SymetricLightMovement>d__45::<>4__this
	FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* ___U3CU3E4__this_3;
};

// LevelLoader/<EnableShop>d__9
struct U3CEnableShopU3Ed__9_t4C7AC796935E856C17601F639D1E1AE1EA395F83  : public RuntimeObject
{
	// System.Int32 LevelLoader/<EnableShop>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LevelLoader/<EnableShop>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// LevelLoader/<LoadAsyncronously>d__7
struct U3CLoadAsyncronouslyU3Ed__7_tEB0856CB5FF2B40BDD14DD9DDC1B75D86387CF95  : public RuntimeObject
{
	// System.Int32 LevelLoader/<LoadAsyncronously>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LevelLoader/<LoadAsyncronously>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 LevelLoader/<LoadAsyncronously>d__7::sceneIndex
	int32_t ___sceneIndex_2;
	// LevelLoader LevelLoader/<LoadAsyncronously>d__7::<>4__this
	LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* ___U3CU3E4__this_3;
	// UnityEngine.AsyncOperation LevelLoader/<LoadAsyncronously>d__7::<operation>5__2
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CoperationU3E5__2_4;
};

// MenuManager/<waitFunc>d__27
struct U3CwaitFuncU3Ed__27_t23587205F5C4303B07895A79FB2C9AE8602E0D6D  : public RuntimeObject
{
	// System.Int32 MenuManager/<waitFunc>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MenuManager/<waitFunc>d__27::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MenuManager MenuManager/<waitFunc>d__27::<>4__this
	MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* ___U3CU3E4__this_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56
struct __StaticArrayInitTypeSizeU3D56_tF90903548CF34D92C9F741BD6D3F8DC6C822EF4E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_tF90903548CF34D92C9F741BD6D3F8DC6C822EF4E__padding[56];
	};
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
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
	intptr_t ___method_ptr_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Curiologix.DotForSound
struct DotForSound_tCA41E1C53D2723C8598957A4800027AD727B9D08  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer Curiologix.DotForSound::pointSprite
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___pointSprite_4;
};

// Curiologix.DotLight
struct DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer Curiologix.DotLight::spRend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spRend_4;
};

// Curiologix.FortuneWheel
struct FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button Curiologix.FortuneWheel::spinButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___spinButton_4;
	// UnityEngine.UI.Text Curiologix.FortuneWheel::coinsText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___coinsText_5;
	// UnityEngine.UI.Text Curiologix.FortuneWheel::selectedText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___selectedText_6;
	// Curiologix.TimerForSpin Curiologix.FortuneWheel::timer4Spin
	TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE* ___timer4Spin_7;
	// UnityEngine.Transform Curiologix.FortuneWheel::wheelToRotate
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___wheelToRotate_8;
	// UnityEngine.Transform Curiologix.FortuneWheel::wheelPartsParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___wheelPartsParent_9;
	// UnityEngine.Transform Curiologix.FortuneWheel::lightsParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lightsParent_10;
	// UnityEngine.GameObject Curiologix.FortuneWheel::winParticles
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___winParticles_11;
	// System.Int32 Curiologix.FortuneWheel::_selectReward
	int32_t ____selectReward_12;
	// System.Int32 Curiologix.FortuneWheel::_coins
	int32_t ____coins_13;
	// System.Int32 Curiologix.FortuneWheel::count
	int32_t ___count_14;
	// System.Int32 Curiologix.FortuneWheel::cost
	int32_t ___cost_15;
	// UnityEngine.AudioSource[] Curiologix.FortuneWheel::audSource
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___audSource_16;
	// Curiologix.WheelPart[] Curiologix.FortuneWheel::wheelParts
	WheelPartU5BU5D_t2E8E14E89A105176AED8AC921111458BCA417AC2* ___wheelParts_17;
	// Curiologix.DotLight[] Curiologix.FortuneWheel::lightObjs
	DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* ___lightObjs_18;
	// UnityEngine.Sprite[] Curiologix.FortuneWheel::dots
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___dots_19;
	// System.Boolean Curiologix.FortuneWheel::spinning
	bool ___spinning_20;
	// System.Single Curiologix.FortuneWheel::anglePerReward
	float ___anglePerReward_21;
	// System.Single Curiologix.FortuneWheel::anglePerLight
	float ___anglePerLight_22;
	// System.Boolean Curiologix.FortuneWheel::highreward
	bool ___highreward_23;
	// System.Boolean Curiologix.FortuneWheel::lowreward
	bool ___lowreward_24;
	// System.Int32[] Curiologix.FortuneWheel::highArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___highArray_25;
	// System.Int32[] Curiologix.FortuneWheel::lowArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___lowArray_26;
	// System.Int32 Curiologix.FortuneWheel::targetToStopOn
	int32_t ___targetToStopOn_27;
};

// Curiologix.FortuneWheelConfig
struct FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32[] Curiologix.FortuneWheelConfig::prizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___prizes_4;
	// UnityEngine.AudioClip Curiologix.FortuneWheelConfig::tingSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___tingSound_5;
	// System.Int32 Curiologix.FortuneWheelConfig::speedMultiplier
	int32_t ___speedMultiplier_6;
	// System.Int32 Curiologix.FortuneWheelConfig::duration
	int32_t ___duration_7;
	// System.Boolean Curiologix.FortuneWheelConfig::timedTurn
	bool ___timedTurn_8;
	// UnityEngine.Sprite[] Curiologix.FortuneWheelConfig::illuminatiDots
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___illuminatiDots_9;
	// UnityEngine.AnimationCurve Curiologix.FortuneWheelConfig::animationCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___animationCurve_10;
};

// LevelLoader
struct LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject LevelLoader::loadingScrn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loadingScrn_5;
	// UnityEngine.GameObject LevelLoader::Game3Panel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Game3Panel_6;
	// UnityEngine.UI.Slider LevelLoader::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_7;
	// UnityEngine.UI.Text LevelLoader::progressTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___progressTxt_8;
};

// MenuManager
struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MenuManager::shopScrn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shopScrn_5;
	// UnityEngine.GameObject MenuManager::AboutScr
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___AboutScr_6;
	// UnityEngine.GameObject MenuManager::HowToPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___HowToPanel_7;
	// UnityEngine.GameObject MenuManager::SettingsPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SettingsPanel_8;
	// UnityEngine.GameObject MenuManager::soundon
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___soundon_9;
	// UnityEngine.GameObject MenuManager::soundoff
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___soundoff_10;
	// UnityEngine.GameObject MenuManager::SoundObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SoundObj_11;
	// UnityEngine.GameObject MenuManager::TutoralScrn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TutoralScrn_12;
	// UnityEngine.GameObject MenuManager::WheelTurorial
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___WheelTurorial_13;
	// UnityEngine.GameObject MenuManager::DiceTutorial
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___DiceTutorial_14;
	// UnityEngine.GameObject MenuManager::CoinTutorial
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CoinTutorial_15;
	// UnityEngine.GameObject MenuManager::SlotTurorial
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SlotTurorial_16;
	// UnityEngine.Animator MenuManager::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_17;
	// System.Int32 MenuManager::soundvalue
	int32_t ___soundvalue_19;
	// UnityEngine.AudioSource MenuManager::clicksound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___clicksound_20;
};

// Curiologix.SetSortOrder
struct SetSortOrder_t00B82E8F6AB6D74E90690210AEC37649E3D72896  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Curiologix.SetSortOrder::layerID
	int32_t ___layerID_4;
};

// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip[] SoundManager::sounds
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___sounds_5;
	// UnityEngine.AudioSource SoundManager::musicSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___musicSource_6;
	// UnityEngine.AudioSource SoundManager::Winmusicsoure
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___Winmusicsoure_7;
	// UnityEngine.AudioSource SoundManager::losemusicsource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___losemusicsource_8;
	// UnityEngine.GameObject[] SoundManager::soundIcons
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___soundIcons_9;
	// UnityEngine.GameObject[] SoundManager::MuteIcons
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___MuteIcons_10;
};

// Soundcontroller
struct Soundcontroller_t848003500E1F9F559803EBD92BDE1EAF26715C49  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Soundcontroller::soundimageOn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___soundimageOn_4;
	// UnityEngine.GameObject Soundcontroller::soundimageOff
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___soundimageOff_5;
	// System.Int32 Soundcontroller::soundcontrol
	int32_t ___soundcontrol_6;
	// UnityEngine.GameObject Soundcontroller::sounds
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sounds_7;
	// System.String Soundcontroller::ANDROID_RATE_URL
	String_t* ___ANDROID_RATE_URL_8;
	// UnityEngine.AudioSource Soundcontroller::bttnsound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bttnsound_9;
};

// Curiologix.TimerForSpin
struct TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Curiologix.TimerForSpin::timerText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___timerText_4;
	// System.TimeSpan Curiologix.TimerForSpin::remainingTime
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___remainingTime_6;
	// System.DateTime Curiologix.TimerForSpin::timeStamp
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___timeStamp_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VfxSpinner
struct VfxSpinner_tBA40B38B07B13BB0BD034D4B7BE323EC0BE6864A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single VfxSpinner::speed
	float ___speed_4;
};

// Curiologix.WheelPart
struct WheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer Curiologix.WheelPart::spRend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spRend_4;
	// UnityEngine.TextMesh Curiologix.WheelPart::valueText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___valueText_5;
	// Curiologix.DotForSound[] Curiologix.WheelPart::pointCollider
	DotForSoundU5BU5D_tA9FB589A8B85E9C338BA58A6CD4BA7EF4C34148E* ___pointCollider_6;
	// System.Int32 Curiologix.WheelPart::myIndex
	int32_t ___myIndex_7;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::C91988DAA6E0031FFEEDDDC73EE3D6A0F8340178E60783E7026FA566835EF3F5
	__StaticArrayInitTypeSizeU3D56_tF90903548CF34D92C9F741BD6D3F8DC6C822EF4E ___C91988DAA6E0031FFEEDDDC73EE3D6A0F8340178E60783E7026FA566835EF3F5_0;
};

// <PrivateImplementationDetails>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Curiologix.FortuneWheel/<IncrementCoroutine>d__40

// Curiologix.FortuneWheel/<IncrementCoroutine>d__40

// Curiologix.FortuneWheel/<LightAnimDuringSpinning>d__44

// Curiologix.FortuneWheel/<LightAnimDuringSpinning>d__44

// Curiologix.FortuneWheel/<PlayAnimationWhenStationary>d__43

// Curiologix.FortuneWheel/<PlayAnimationWhenStationary>d__43

// Curiologix.FortuneWheel/<RotateWheel>d__37

// Curiologix.FortuneWheel/<RotateWheel>d__37

// Curiologix.FortuneWheel/<ShowHideParticles>d__39

// Curiologix.FortuneWheel/<ShowHideParticles>d__39

// Curiologix.FortuneWheel/<SymetricLightMovement>d__45

// Curiologix.FortuneWheel/<SymetricLightMovement>d__45

// LevelLoader/<EnableShop>d__9

// LevelLoader/<EnableShop>d__9

// LevelLoader/<LoadAsyncronously>d__7

// LevelLoader/<LoadAsyncronously>d__7

// MenuManager/<waitFunc>d__27

// MenuManager/<waitFunc>d__27

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// UnityEngine.Collision2D

// UnityEngine.Collision2D

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.TextMesh

// UnityEngine.TextMesh

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Collider2D

// UnityEngine.Collider2D

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// Curiologix.DotForSound

// Curiologix.DotForSound

// Curiologix.DotLight

// Curiologix.DotLight

// Curiologix.FortuneWheel
struct FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00_StaticFields
{
	// Curiologix.FortuneWheel Curiologix.FortuneWheel::_instance
	FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* ____instance_28;
};

// Curiologix.FortuneWheel

// Curiologix.FortuneWheelConfig
struct FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78_StaticFields
{
	// Curiologix.FortuneWheelConfig Curiologix.FortuneWheelConfig::_instance
	FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* ____instance_11;
};

// Curiologix.FortuneWheelConfig

// LevelLoader
struct LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_StaticFields
{
	// LevelLoader LevelLoader::instance
	LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* ___instance_4;
};

// LevelLoader

// MenuManager
struct MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields
{
	// MenuManager MenuManager::instance
	MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* ___instance_4;
	// System.Int32 MenuManager::Sound
	int32_t ___Sound_18;
};

// MenuManager

// Curiologix.SetSortOrder

// Curiologix.SetSortOrder

// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields
{
	// SoundManager SoundManager::instance
	SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* ___instance_4;
};

// SoundManager

// Soundcontroller

// Soundcontroller

// Curiologix.TimerForSpin
struct TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE_StaticFields
{
	// System.TimeSpan Curiologix.TimerForSpin::nextFreeTurn
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___nextFreeTurn_5;
};

// Curiologix.TimerForSpin

// VfxSpinner

// VfxSpinner

// Curiologix.WheelPart

// Curiologix.WheelPart

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Curiologix.DotLight[]
struct DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29  : public RuntimeArray
{
	ALIGN_FIELD (8) DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E* m_Items[1];

	inline DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Curiologix.WheelPart[]
struct WheelPartU5BU5D_t2E8E14E89A105176AED8AC921111458BCA417AC2  : public RuntimeArray
{
	ALIGN_FIELD (8) WheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695* m_Items[1];

	inline WheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* m_Items[1];

	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LevelLoader::LoadAsyncronously(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelLoader_LoadAsyncronously_mC104C4E6DA459D9B2FFB8E4C0F6CBC557F871E60 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, int32_t ___0_sceneIndex, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void LevelLoader/<LoadAsyncronously>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncronouslyU3Ed__7__ctor_mB5B0F61A400525EAD29C1A3D3A04DBA01646C72C (U3CLoadAsyncronouslyU3Ed__7_tEB0856CB5FF2B40BDD14DD9DDC1B75D86387CF95* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void LevelLoader::LoadLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_LoadLevel_m67F72138CADC74E7EACEDAE4DD4DED068A07FD03 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, int32_t ___0_sceneIndex, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LevelLoader::EnableShop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelLoader_EnableShop_mB6D0B27E4306A62A37B59367BB2414A995CA65CC (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) ;
// System.Void LevelLoader/<EnableShop>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableShopU3Ed__9__ctor_m8FBE2FA81E0255466CF9A33E35BD69ECB18B7878 (U3CEnableShopU3Ed__9_t4C7AC796935E856C17601F639D1E1AE1EA395F83* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D (String_t* ___0_key, int32_t ___1_defaultValue, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void MenuManager::ShowTutorial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ShowTutorial_m68C53B849BE10C4459A38CECFA10EDEF606269C6 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, bool ___0_check, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void MenuManager/<waitFunc>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitFuncU3Ed__27__ctor_m7D4D6D48237562E22D4F856C0E40ECF0604829CA (U3CwaitFuncU3Ed__27_t23587205F5C4303B07895A79FB2C9AE8602E0D6D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___0_xAngle, float ___1_yAngle, float ___2_zAngle, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// Curiologix.FortuneWheel Curiologix.FortuneWheel::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* FortuneWheel_get_Instance_mB2CA56AB24E455ADA003DB98913453A5B4CFBA62 (const RuntimeMethod* method) ;
// System.Void Curiologix.FortuneWheel::HitStart(UnityEngine.SpriteRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheel_HitStart_m7F4F7C5F1A15E84CD5A0B2B02632632297DC7659 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0_sp, const RuntimeMethod* method) ;
// Curiologix.FortuneWheelConfig Curiologix.FortuneWheelConfig::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* FortuneWheelConfig_get_Instance_m5F6173E110482DC4B3FB3FF0FBF1EC94AF61DE97 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.String Curiologix.FortuneWheelConfig::GetValueFormated(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FortuneWheelConfig_GetValueFormated_m467D6CC58F7FDDC970611F2D4BC030E27A053471 (int32_t ___0_val, const RuntimeMethod* method) ;
// System.Int32 Curiologix.FortuneWheel::get_Coins()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FortuneWheel_get_Coins_mD48FBDD7C14ED75F5CAD0869323A7461B7AC3879_inline (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Curiologix.FortuneWheel::StartSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheel_StartSpin_m910132ACF300B607FD224B048912C733883CDCA4 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) ;
// System.Void Curiologix.FortuneWheel::set_Coins(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FortuneWheel_set_Coins_mBA09FFD4DEF230AEFBD791DFF24B613242B7314F_inline (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Int32 Curiologix.FortuneWheel::get_rewardCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FortuneWheel_get_rewardCount_mDC48A436EE377840A4D6D849413CBA0A747FB03D (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<Curiologix.WheelPart>()
inline WheelPartU5BU5D_t2E8E14E89A105176AED8AC921111458BCA417AC2* Component_GetComponentsInChildren_TisWheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695_mAC934D1DB26965B342FD72C3C3CB2A86650D71A4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  WheelPartU5BU5D_t2E8E14E89A105176AED8AC921111458BCA417AC2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<Curiologix.DotLight>()
inline DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* Component_GetComponentsInChildren_TisDotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E_m63E844D1292A19DE3535FB87D4395764E770880F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Int32 Curiologix.FortuneWheel::get_lightCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FortuneWheel_get_lightCount_mA5962E2D8331F8A56F53F44C4317CA6D8846BDDA (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Curiologix.FortuneWheel::AnimateWheel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheel_AnimateWheel_m3F0A3B398967F34590CC0F6981C302B2ECD0BB65 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, bool ___0_playAnim, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Curiologix.FortuneWheel::RotateWheel(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FortuneWheel_RotateWheel_mE9FAAA049D8AFA7FC6B3C7C046257F2EB9E7A341 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, float ___0_time, float ___1_maxAngle, const RuntimeMethod* method) ;
// System.Void Curiologix.FortuneWheel/<RotateWheel>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateWheelU3Ed__37__ctor_m6F3D2A198893A36E995C4D26FEB3691AA213052D (U3CRotateWheelU3Ed__37_tC9B0298966D6F6F7CCD86B31654F8DD0C632FE7C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Int32 Curiologix.FortuneWheel::get_SelectedReward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FortuneWheel_get_SelectedReward_mC5EE125D23DEAACC2FFCFC8B815DFEB437485468_inline (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) ;
// System.Void Curiologix.FortuneWheel::set_SelectedReward(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheel_set_SelectedReward_mB1153434138BCECC712362807CDD9DFEAC83D2C5 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Curiologix.FortuneWheel/<ShowHideParticles>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowHideParticlesU3Ed__39__ctor_m54E1DFCB2A9A109A5ECDD0CFBE4A613101F2FE48 (U3CShowHideParticlesU3Ed__39_t90379D55FC4B1E99DB43E10726E8C031C741E2E4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Curiologix.FortuneWheel/<IncrementCoroutine>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncrementCoroutineU3Ed__40__ctor_m3F95E572B5E1E376A0D6AE8E03A3D4173E9AD491 (U3CIncrementCoroutineU3Ed__40_t6225014E657B2DC5F6EDE9BD0C451CC82333577E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Curiologix.FortuneWheel::PlayHitClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheel_PlayHitClip_m391B7C44C231E065448F62B7D75002BB680287E0 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Curiologix.FortuneWheel::PlayAnimationWhenStationary(UnityEngine.Sprite,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FortuneWheel_PlayAnimationWhenStationary_m61213616B9030A76D62853CA3CEB8672C1DE0F49 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sp1, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___1_sp2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Curiologix.FortuneWheel::LightAnimDuringSpinning(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FortuneWheel_LightAnimDuringSpinning_m97E175C393933EC5191545EF680798937CADC59E (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void Curiologix.FortuneWheel/<PlayAnimationWhenStationary>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayAnimationWhenStationaryU3Ed__43__ctor_mD210B00926074AD80C812537C07DC93B2118E1A0 (U3CPlayAnimationWhenStationaryU3Ed__43_t47B726FA24F91936DAFF27CAFCD4821408EB3927* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Curiologix.FortuneWheel/<LightAnimDuringSpinning>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLightAnimDuringSpinningU3Ed__44__ctor_mC91EABDEA00C01604DE4E7B2C21ADDD9F780C203 (U3CLightAnimDuringSpinningU3Ed__44_tBB28DDA976080673F591183F17B0660656F90B09* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Curiologix.FortuneWheel/<SymetricLightMovement>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSymetricLightMovementU3Ed__45__ctor_m5611B7B27D02CEC2DD18DADD9E3B8377E21041C8 (U3CSymetricLightMovementU3Ed__45_t7DE666D3ADF85875343B81A02A0E0BC8F867D5D6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Curiologix.FortuneWheel>()
inline FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* Object_FindObjectOfType_TisFortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00_mC446EB88548AEC9AE744E2169E566B42E734E913 (const RuntimeMethod* method)
{
	return ((  FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Curiologix.FortuneWheel::ShowHideParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FortuneWheel_ShowHideParticles_m7BFAC2066A64C9F9AA9FF0ABA318D71287EC508E (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Curiologix.FortuneWheel::GivePrize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheel_GivePrize_m59E023908A894B5144B3C6DE8B06DEB7D91443E8 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Curiologix.FortuneWheel::SymetricLightMovement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FortuneWheel_SymetricLightMovement_m1CE0E122EEA46D8033410BDFD543DABCFAA218A9 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Curiologix.FortuneWheelConfig>()
inline FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* Object_FindObjectOfType_TisFortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78_m7586653EDE9AC0C806A8CA74B1D2D7F3B88CF69D (const RuntimeMethod* method)
{
	return ((  FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2 (String_t* ___0_key, String_t* ___1_defaultValue, const RuntimeMethod* method) ;
// System.Boolean System.DateTime::TryParse(System.String,System.DateTime&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_TryParse_mAB837F166C80EEB47B8CE76E7D6106974E7FA44B (String_t* ___0_s, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_result, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_d1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_d2, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_op_Subtraction_m56EC225AACB5E7C91E29A2ECB634B658A63289F7 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_t1, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_t2, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Hours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Hours_m770B4B777A816E051EFDA317C28DA9A4F39D6CFB (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Minutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Seconds_m8CA21613DC31BD025C5D30D41BAD0ED50827578B (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalMinutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMinutes_mD139AD7A9055F460D2ACC8B0D2BC4A70009E1115 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void Curiologix.TimerForSpin::ActivateFreeSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerForSpin_ActivateFreeSpin_m3769E904ACFCADF59C94B1D1E67E1C9980FC3695 (TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int32_t ___0_hours, int32_t ___1_minutes, int32_t ___2_seconds, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, String_t* ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_Start_m4D5447BE58C257C9C192270CD7ABC78570BCCEE2 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* L_0 = ((LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_StaticFields*)il2cpp_codegen_static_fields_for(LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = this;
		((LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_StaticFields*)il2cpp_codegen_static_fields_for(LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_StaticFields*)il2cpp_codegen_static_fields_for(LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void LevelLoader::LoadLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_LoadLevel_m67F72138CADC74E7EACEDAE4DD4DED068A07FD03 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, int32_t ___0_sceneIndex, const RuntimeMethod* method) 
{
	{
		// Game3Panel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Game3Panel_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// StartCoroutine(LoadAsyncronously(sceneIndex));
		int32_t L_1 = ___0_sceneIndex;
		RuntimeObject* L_2;
		L_2 = LevelLoader_LoadAsyncronously_mC104C4E6DA459D9B2FFB8E4C0F6CBC557F871E60(__this, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LevelLoader::LoadAsyncronously(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelLoader_LoadAsyncronously_mC104C4E6DA459D9B2FFB8E4C0F6CBC557F871E60 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, int32_t ___0_sceneIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAsyncronouslyU3Ed__7_tEB0856CB5FF2B40BDD14DD9DDC1B75D86387CF95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadAsyncronouslyU3Ed__7_tEB0856CB5FF2B40BDD14DD9DDC1B75D86387CF95* L_0 = (U3CLoadAsyncronouslyU3Ed__7_tEB0856CB5FF2B40BDD14DD9DDC1B75D86387CF95*)il2cpp_codegen_object_new(U3CLoadAsyncronouslyU3Ed__7_tEB0856CB5FF2B40BDD14DD9DDC1B75D86387CF95_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadAsyncronouslyU3Ed__7__ctor_mB5B0F61A400525EAD29C1A3D3A04DBA01646C72C(L_0, 0, NULL);
		U3CLoadAsyncronouslyU3Ed__7_tEB0856CB5FF2B40BDD14DD9DDC1B75D86387CF95* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CLoadAsyncronouslyU3Ed__7_tEB0856CB5FF2B40BDD14DD9DDC1B75D86387CF95* L_2 = L_1;
		int32_t L_3 = ___0_sceneIndex;
		NullCheck(L_2);
		L_2->___sceneIndex_2 = L_3;
		return L_2;
	}
}
// System.Void LevelLoader::EnableShopScrn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_EnableShopScrn_m2AE3A5AD14A1234F26CFA43407C0423F6EA631D1 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
{
	{
		// LoadLevel(0);
		LevelLoader_LoadLevel_m67F72138CADC74E7EACEDAE4DD4DED068A07FD03(__this, 0, NULL);
		// StartCoroutine(EnableShop());
		RuntimeObject* L_0;
		L_0 = LevelLoader_EnableShop_mB6D0B27E4306A62A37B59367BB2414A995CA65CC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LevelLoader::EnableShop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelLoader_EnableShop_mB6D0B27E4306A62A37B59367BB2414A995CA65CC (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnableShopU3Ed__9_t4C7AC796935E856C17601F639D1E1AE1EA395F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEnableShopU3Ed__9_t4C7AC796935E856C17601F639D1E1AE1EA395F83* L_0 = (U3CEnableShopU3Ed__9_t4C7AC796935E856C17601F639D1E1AE1EA395F83*)il2cpp_codegen_object_new(U3CEnableShopU3Ed__9_t4C7AC796935E856C17601F639D1E1AE1EA395F83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEnableShopU3Ed__9__ctor_m8FBE2FA81E0255466CF9A33E35BD69ECB18B7878(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void LevelLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader__ctor_mB1812BC658449839C948710AC302F1483F380107 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LevelLoader/<LoadAsyncronously>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncronouslyU3Ed__7__ctor_mB5B0F61A400525EAD29C1A3D3A04DBA01646C72C (U3CLoadAsyncronouslyU3Ed__7_tEB0856CB5FF2B40BDD14DD9DDC1B75D86387CF95* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LevelLoader/<LoadAsyncronously>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncronouslyU3Ed__7_System_IDisposable_Dispose_mF426E2CD869EDB4EDDFE1638BB379E7A7A327A3F (U3CLoadAsyncronouslyU3Ed__7_tEB0856CB5FF2B40BDD14DD9DDC1B75D86387CF95* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LevelLoader/<LoadAsyncronously>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadAsyncronouslyU3Ed__7_MoveNext_m86E3A7FCCA5CE656E1399CE3A7B9F9564D1D5E5B (U3CLoadAsyncronouslyU3Ed__7_tEB0856CB5FF2B40BDD14DD9DDC1B75D86387CF95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* L_1 = __this->___U3CU3E4__this_3;
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
			goto IL_0094;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AsyncOperation operation =  SceneManager.LoadSceneAsync(sceneIndex);
		int32_t L_4 = __this->___sceneIndex_2;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_5;
		L_5 = SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935(L_4, NULL);
		__this->___U3CoperationU3E5__2_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoperationU3E5__2_4), (void*)L_5);
		// loadingScrn.SetActive(true);
		LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* L_6 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___loadingScrn_5;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		goto IL_009b;
	}

IL_003d:
	{
		// float progress = Mathf.Clamp01(operation.progress / 0.9f);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_8 = __this->___U3CoperationU3E5__2_4;
		NullCheck(L_8);
		float L_9;
		L_9 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_8, NULL);
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_9/(0.899999976f))), NULL);
		V_2 = L_10;
		// slider.value = progress;
		LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* L_11 = V_1;
		NullCheck(L_11);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = L_11->___slider_7;
		float L_13 = V_2;
		NullCheck(L_12);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_12, L_13);
		// progressTxt.text = progress * 100f + "%";
		LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* L_14 = V_1;
		NullCheck(L_14);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = L_14->___progressTxt_8;
		float L_16 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply(L_16, (100.0f)));
		String_t* L_17;
		L_17 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_3), NULL);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_17, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_18);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0094:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_009b:
	{
		// while (!operation.isDone)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_19 = __this->___U3CoperationU3E5__2_4;
		NullCheck(L_19);
		bool L_20;
		L_20 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_19, NULL);
		if (!L_20)
		{
			goto IL_003d;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object LevelLoader/<LoadAsyncronously>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAsyncronouslyU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDD4B91C6E0B78B76CC925D9A4ADF997EAA2303FF (U3CLoadAsyncronouslyU3Ed__7_tEB0856CB5FF2B40BDD14DD9DDC1B75D86387CF95* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LevelLoader/<LoadAsyncronously>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncronouslyU3Ed__7_System_Collections_IEnumerator_Reset_mE0D11ADEC3EB996AC4693E409ABE39EDD655583F (U3CLoadAsyncronouslyU3Ed__7_tEB0856CB5FF2B40BDD14DD9DDC1B75D86387CF95* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAsyncronouslyU3Ed__7_System_Collections_IEnumerator_Reset_mE0D11ADEC3EB996AC4693E409ABE39EDD655583F_RuntimeMethod_var)));
	}
}
// System.Object LevelLoader/<LoadAsyncronously>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAsyncronouslyU3Ed__7_System_Collections_IEnumerator_get_Current_m3DD318B145BF6E66B31C72B94749DBE13317C9A0 (U3CLoadAsyncronouslyU3Ed__7_tEB0856CB5FF2B40BDD14DD9DDC1B75D86387CF95* __this, const RuntimeMethod* method) 
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
// System.Void LevelLoader/<EnableShop>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableShopU3Ed__9__ctor_m8FBE2FA81E0255466CF9A33E35BD69ECB18B7878 (U3CEnableShopU3Ed__9_t4C7AC796935E856C17601F639D1E1AE1EA395F83* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LevelLoader/<EnableShop>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableShopU3Ed__9_System_IDisposable_Dispose_m0193806089E813D8ABA01F90C8BA6AF3B74F2DF8 (U3CEnableShopU3Ed__9_t4C7AC796935E856C17601F639D1E1AE1EA395F83* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LevelLoader/<EnableShop>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnableShopU3Ed__9_MoveNext_m800819D61AEEB9F4614A3827C4419B5347E11606 (U3CEnableShopU3Ed__9_t4C7AC796935E856C17601F639D1E1AE1EA395F83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// MenuManager.instance.shopScrn.SetActive(true);
		MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* L_4 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___shopScrn_5;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object LevelLoader/<EnableShop>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnableShopU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9AFE657230BE702C016967EE964BCB1FD1411186 (U3CEnableShopU3Ed__9_t4C7AC796935E856C17601F639D1E1AE1EA395F83* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LevelLoader/<EnableShop>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableShopU3Ed__9_System_Collections_IEnumerator_Reset_m37154B3D9B4C12DDEDE574D446E99B5E1D43D2AB (U3CEnableShopU3Ed__9_t4C7AC796935E856C17601F639D1E1AE1EA395F83* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnableShopU3Ed__9_System_Collections_IEnumerator_Reset_m37154B3D9B4C12DDEDE574D446E99B5E1D43D2AB_RuntimeMethod_var)));
	}
}
// System.Object LevelLoader/<EnableShop>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnableShopU3Ed__9_System_Collections_IEnumerator_get_Current_mEEAA4D9D6BCBD1587934E60B02834AAFC3033127 (U3CEnableShopU3Ed__9_t4C7AC796935E856C17601F639D1E1AE1EA395F83* __this, const RuntimeMethod* method) 
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
// System.Void MenuManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Start_m58062825AA9A256E42311B4A4833E7425589BBDF (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral240BE9B5E609F0DD8657150691504C4DE92A0925);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* L_0 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = this;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
	}

IL_0013:
	{
		// soundvalue = PlayerPrefs.GetInt("sound", 1);
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral240BE9B5E609F0DD8657150691504C4DE92A0925, 1, NULL);
		__this->___soundvalue_19 = L_2;
		// if (soundvalue == 0)
		int32_t L_3 = __this->___soundvalue_19;
		if (L_3)
		{
			goto IL_005b;
		}
	}
	{
		// PlayerPrefs.SetInt("sound", 0);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral240BE9B5E609F0DD8657150691504C4DE92A0925, 0, NULL);
		// SoundObj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___SoundObj_11;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// soundon.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___soundon_9;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// soundoff.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___soundoff_10;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
	}

IL_005b:
	{
		// if (soundvalue == 1)
		int32_t L_7 = __this->___soundvalue_19;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_007b;
		}
	}
	{
		// PlayerPrefs.SetInt("sound", 1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral240BE9B5E609F0DD8657150691504C4DE92A0925, 1, NULL);
		// SoundObj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___SoundObj_11;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void MenuManager::SplashScrn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_SplashScrn_m0B284BAC346D0970B74674471A1424CF18C6096B (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C830828FEBAC0B8FE356B62310CF43ED9A1C00A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE0646249E244D318C4EF9D3C94A17E48E235140);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Clicking");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBE0646249E244D318C4EF9D3C94A17E48E235140, NULL);
		// if (PlayerPrefs.GetInt("TutorialNew1") != 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral5C830828FEBAC0B8FE356B62310CF43ED9A1C00A, NULL);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		// PlayerPrefs.SetInt("TutorialNew1", 1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral5C830828FEBAC0B8FE356B62310CF43ED9A1C00A, 1, NULL);
		// ShowTutorial(true);
		MenuManager_ShowTutorial_m68C53B849BE10C4459A38CECFA10EDEF606269C6(__this, (bool)1, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void MenuManager::ShowTutorial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ShowTutorial_m68C53B849BE10C4459A38CECFA10EDEF606269C6 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, bool ___0_check, const RuntimeMethod* method) 
{
	{
		// if(check)
		bool L_0 = ___0_check;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// TutoralScrn.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___TutoralScrn_12;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		return;
	}

IL_0010:
	{
		// TutoralScrn.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___TutoralScrn_12;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::ShowWheel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ShowWheel_m296C33AB6E7822E9D197D2C629B599AA92F05ED1 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, bool ___0_check, const RuntimeMethod* method) 
{
	{
		// ShowTutorial(true);
		MenuManager_ShowTutorial_m68C53B849BE10C4459A38CECFA10EDEF606269C6(__this, (bool)1, NULL);
		// if (check)
		bool L_0 = ___0_check;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// WheelTurorial.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___WheelTurorial_13;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		return;
	}

IL_0017:
	{
		// WheelTurorial.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___WheelTurorial_13;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::ShowDice(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ShowDice_m606F7CD661434C85F603258CD66A2C62F9849DD5 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, bool ___0_check, const RuntimeMethod* method) 
{
	{
		// ShowTutorial(true);
		MenuManager_ShowTutorial_m68C53B849BE10C4459A38CECFA10EDEF606269C6(__this, (bool)1, NULL);
		// if (check)
		bool L_0 = ___0_check;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// DiceTutorial.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___DiceTutorial_14;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		return;
	}

IL_0017:
	{
		// DiceTutorial.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___DiceTutorial_14;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::ShowCoin(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ShowCoin_m950EFD896C2999B393B1D63CD093E376A0B5D90E (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, bool ___0_check, const RuntimeMethod* method) 
{
	{
		// ShowTutorial(true);
		MenuManager_ShowTutorial_m68C53B849BE10C4459A38CECFA10EDEF606269C6(__this, (bool)1, NULL);
		// if (check)
		bool L_0 = ___0_check;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// CoinTutorial.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___CoinTutorial_15;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		return;
	}

IL_0017:
	{
		// CoinTutorial.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___CoinTutorial_15;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::ShowSlot(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ShowSlot_m7E35560B0382D291FCB70E87C99366C23ADA719B (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, bool ___0_check, const RuntimeMethod* method) 
{
	{
		// ShowTutorial(true);
		MenuManager_ShowTutorial_m68C53B849BE10C4459A38CECFA10EDEF606269C6(__this, (bool)1, NULL);
		// if (check)
		bool L_0 = ___0_check;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// SlotTurorial.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___SlotTurorial_16;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		return;
	}

IL_0017:
	{
		// SlotTurorial.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___SlotTurorial_16;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::ExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ExitGame_m0F7468394B807BF398BBBC952685629DE22FCD4C (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void MenuManager::ShopScrn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_ShopScrn_m7B4909E3BBEFE177537E07C36BA1F19F6039FD4A (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, bool ___0_check, const RuntimeMethod* method) 
{
	{
		// shopScrn.SetActive(check);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___shopScrn_5;
		bool L_1 = ___0_check;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::AboutScrn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_AboutScrn_m72084A52534971D395A2460DCCFB388A5EAD5ED1 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, bool ___0_check, const RuntimeMethod* method) 
{
	{
		// AboutScr.SetActive(check);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___AboutScr_6;
		bool L_1 = ___0_check;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MenuManager::waitFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MenuManager_waitFunc_mC71CCD4F5C6142A7DEA49D5E9A6D3A895B5396D5 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CwaitFuncU3Ed__27_t23587205F5C4303B07895A79FB2C9AE8602E0D6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CwaitFuncU3Ed__27_t23587205F5C4303B07895A79FB2C9AE8602E0D6D* L_0 = (U3CwaitFuncU3Ed__27_t23587205F5C4303B07895A79FB2C9AE8602E0D6D*)il2cpp_codegen_object_new(U3CwaitFuncU3Ed__27_t23587205F5C4303B07895A79FB2C9AE8602E0D6D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CwaitFuncU3Ed__27__ctor_m7D4D6D48237562E22D4F856C0E40ECF0604829CA(L_0, 0, NULL);
		U3CwaitFuncU3Ed__27_t23587205F5C4303B07895A79FB2C9AE8602E0D6D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MenuManager::HowTo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_HowTo_m828F597F887C247F7328FE9D6F8076E676C2FC35 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// HowToPanel.SetActive(value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___HowToPanel_7;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::Settings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_Settings_m7D66F7CAE57D7D85F8A466FCD1BF4CEB4B0AF3F3 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// clicksound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___clicksound_20;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// SettingsPanel.SetActive(value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___SettingsPanel_8;
		bool L_2 = ___0_value;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void MenuManager::soundon_off()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager_soundon_off_m1931F29C2D6C62681735F9FF65C2B9FAD734E160 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral240BE9B5E609F0DD8657150691504C4DE92A0925);
		s_Il2CppMethodInitialized = true;
	}
	{
		// clicksound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___clicksound_20;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// Sound++;
		int32_t L_1 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___Sound_18;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___Sound_18 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// if (Sound == 1)
		int32_t L_2 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___Sound_18;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_004e;
		}
	}
	{
		// soundon.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___soundon_9;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// soundoff.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___soundoff_10;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// PlayerPrefs.SetInt("sound", 0);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral240BE9B5E609F0DD8657150691504C4DE92A0925, 0, NULL);
		// SoundObj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___SoundObj_11;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_004e:
	{
		// if (Sound == 2)
		int32_t L_6 = ((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___Sound_18;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_008b;
		}
	}
	{
		// soundoff.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___soundoff_10;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// soundon.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___soundon_9;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// PlayerPrefs.SetInt("sound", 1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral240BE9B5E609F0DD8657150691504C4DE92A0925, 1, NULL);
		// Sound = 0;
		((MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_StaticFields*)il2cpp_codegen_static_fields_for(MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16_il2cpp_TypeInfo_var))->___Sound_18 = 0;
		// SoundObj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___SoundObj_11;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
	}

IL_008b:
	{
		// }
		return;
	}
}
// System.Void MenuManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuManager__ctor_m07A22DFDD90E3164393F8BDE06DAEF5AFA786CF2 (MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MenuManager/<waitFunc>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitFuncU3Ed__27__ctor_m7D4D6D48237562E22D4F856C0E40ECF0604829CA (U3CwaitFuncU3Ed__27_t23587205F5C4303B07895A79FB2C9AE8602E0D6D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MenuManager/<waitFunc>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitFuncU3Ed__27_System_IDisposable_Dispose_m0149031B23DB5F6DC83D6EC69B837E654E134D62 (U3CwaitFuncU3Ed__27_t23587205F5C4303B07895A79FB2C9AE8602E0D6D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MenuManager/<waitFunc>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CwaitFuncU3Ed__27_MoveNext_mAB1EEB943E1DD507D595C06078EA6198A95A8779 (U3CwaitFuncU3Ed__27_t23587205F5C4303B07895A79FB2C9AE8602E0D6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8049D9C06BF1FCE9313E29B5CBA61FD5914E30);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(2.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (2.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// anim.SetBool("IsHeadTail", false);
		MenuManager_t34C8EA4F128D811DE986BE56D7938F2720BA7B16* L_5 = V_1;
		NullCheck(L_5);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = L_5->___anim_17;
		NullCheck(L_6);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteral4B8049D9C06BF1FCE9313E29B5CBA61FD5914E30, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object MenuManager/<waitFunc>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CwaitFuncU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m543DA6678677FCA3969040FEBF110CE176F2FA40 (U3CwaitFuncU3Ed__27_t23587205F5C4303B07895A79FB2C9AE8602E0D6D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MenuManager/<waitFunc>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitFuncU3Ed__27_System_Collections_IEnumerator_Reset_m98C3758055D3CB5CB8ECCBB934FDF4062FA078B0 (U3CwaitFuncU3Ed__27_t23587205F5C4303B07895A79FB2C9AE8602E0D6D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CwaitFuncU3Ed__27_System_Collections_IEnumerator_Reset_m98C3758055D3CB5CB8ECCBB934FDF4062FA078B0_RuntimeMethod_var)));
	}
}
// System.Object MenuManager/<waitFunc>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CwaitFuncU3Ed__27_System_Collections_IEnumerator_get_Current_mF4FD9F0378CB8DBAAA380F7A58E9D779077CFEF4 (U3CwaitFuncU3Ed__27_t23587205F5C4303B07895A79FB2C9AE8602E0D6D* __this, const RuntimeMethod* method) 
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
// System.Void Soundcontroller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soundcontroller_Start_m8263CE1BF0532FA0DB6D95847819C66A45CAA7BC (Soundcontroller_t848003500E1F9F559803EBD92BDE1EAF26715C49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.HasKey("Sound"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// soundcontrol = PlayerPrefs.GetInt("Sound");
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, NULL);
		__this->___soundcontrol_6 = L_1;
	}

IL_001c:
	{
		// if (soundcontrol == 1)
		int32_t L_2 = __this->___soundcontrol_6;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_004a;
		}
	}
	{
		// soundimageOn.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___soundimageOn_4;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// soundimageOff.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___soundimageOff_5;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// sounds.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___sounds_7;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		return;
	}

IL_004a:
	{
		// soundimageOn.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___soundimageOn_4;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// soundimageOff.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___soundimageOff_5;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Soundcontroller::soundOnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soundcontroller_soundOnOff_mA1450335B01671DAD5ACF2BE5214B1E1C38C0B63 (Soundcontroller_t848003500E1F9F559803EBD92BDE1EAF26715C49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CD979583B209CE71603EFC4A398E6A9EFA8D872);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// soundcontrol++;
		int32_t L_0 = __this->___soundcontrol_6;
		__this->___soundcontrol_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// Debug.Log("h");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0CD979583B209CE71603EFC4A398E6A9EFA8D872, NULL);
		// if (soundcontrol == 1)
		int32_t L_1 = __this->___soundcontrol_6;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0051;
		}
	}
	{
		// soundimageOn.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___soundimageOn_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// soundimageOff.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___soundimageOff_5;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// sounds.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___sounds_7;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// PlayerPrefs.SetInt("Sound", 1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, 1, NULL);
		return;
	}

IL_0051:
	{
		// soundcontrol = 0;
		__this->___soundcontrol_6 = 0;
		// soundimageOn.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___soundimageOn_4;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// soundimageOff.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___soundimageOff_5;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// sounds.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___sounds_7;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// PlayerPrefs.SetInt("Sound", 0);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, 0, NULL);
		// }
		return;
	}
}
// System.Void Soundcontroller::rateus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soundcontroller_rateus_mD1FDF20A16FE6593E2C21D593C76ACA991BC87AD (Soundcontroller_t848003500E1F9F559803EBD92BDE1EAF26715C49* __this, const RuntimeMethod* method) 
{
	{
		// Application.OpenURL(ANDROID_RATE_URL);
		String_t* L_0 = __this->___ANDROID_RATE_URL_8;
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(L_0, NULL);
		// }
		return;
	}
}
// System.Void Soundcontroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Soundcontroller__ctor_m94F3706EF27FD68A4170B8DFF795EB3E4BB2E02E (Soundcontroller_t848003500E1F9F559803EBD92BDE1EAF26715C49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFCAED12F751A68E2304E976EE85885D4B2EA98E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string ANDROID_RATE_URL = "market://details?id=com.Focus.SeeSharp";
		__this->___ANDROID_RATE_URL_8 = _stringLiteralDFCAED12F751A68E2304E976EE85885D4B2EA98E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ANDROID_RATE_URL_8), (void*)_stringLiteralDFCAED12F751A68E2304E976EE85885D4B2EA98E);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SoundManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Start_m114BCC9E38EB73FB08543ABE6B95FFA5756D7AF7 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral240BE9B5E609F0DD8657150691504C4DE92A0925);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// instance = this;
		((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
	}

IL_0013:
	{
		// musicSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___musicSource_6;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// if (PlayerPrefs.GetInt("sound")==0)
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral240BE9B5E609F0DD8657150691504C4DE92A0925, NULL);
		if (L_3)
		{
			goto IL_004e;
		}
	}
	{
		// musicSource.enabled = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___musicSource_6;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		// Winmusicsoure.enabled = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___Winmusicsoure_7;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// losemusicsource.enabled = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___losemusicsource_8;
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void SoundManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Update_mE836A202DA1AB8232906E5EA81C39EFAE33AF286 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SoundManager::MuteSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_MuteSound_mC31E9E203F2B2B520202F21528D502B52F7C48EB (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// musicSource.mute = true;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___musicSource_6;
		NullCheck(L_0);
		AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09(L_0, (bool)1, NULL);
		// for (int i = 0; i < 4; i++)
		V_0 = 0;
		goto IL_0030;
	}

IL_0010:
	{
		// soundIcons[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___soundIcons_9;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// MuteIcons[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___MuteIcons_10;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// for (int i = 0; i < 4; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0030:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SoundManager::PlaySound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySound_m09E2757128C296CCC542E4AA025B44A9FBBDA982 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// musicSource.mute = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___musicSource_6;
		NullCheck(L_0);
		AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09(L_0, (bool)0, NULL);
		// for(int i = 0; i < 4; i++)
		V_0 = 0;
		goto IL_0030;
	}

IL_0010:
	{
		// MuteIcons[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___MuteIcons_10;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// soundIcons[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___soundIcons_9;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// for(int i = 0; i < 4; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0030:
	{
		// for(int i = 0; i < 4; i++)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SoundManager::GameBgSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_GameBgSound_mD9A3F983A090F0CF8C0BB309698B44C11CF50254 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// musicSource.clip = sounds[0];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___musicSource_6;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->___sounds_5;
		NullCheck(L_1);
		int32_t L_2 = 0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_3, NULL);
		// musicSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___musicSource_6;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::Game1WheelSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Game1WheelSound_m47519234916BD8AA4F34850B47FB2753CC08CEF9 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// musicSource.clip = sounds[1];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___musicSource_6;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->___sounds_5;
		NullCheck(L_1);
		int32_t L_2 = 1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_3, NULL);
		// musicSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___musicSource_6;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::Game2CoinSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Game2CoinSound_mF109FA140F12E4AB9CF46B431798D3B530AAB0A4 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// musicSource.clip = sounds[2];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___musicSource_6;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->___sounds_5;
		NullCheck(L_1);
		int32_t L_2 = 2;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_3, NULL);
		// musicSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___musicSource_6;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::Game3DicesSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Game3DicesSound_m157BE8608FBB32B4FB7D9377DAC17FA8C90479D5 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// musicSource.clip = sounds[3];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___musicSource_6;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->___sounds_5;
		NullCheck(L_1);
		int32_t L_2 = 3;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_3, NULL);
		// musicSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___musicSource_6;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::Game4LuckySpinnerSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Game4LuckySpinnerSound_m0AF9EB30036485EF2FDB9215FBFD4A989F3B1F84 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// musicSource.clip = sounds[4];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___musicSource_6;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->___sounds_5;
		NullCheck(L_1);
		int32_t L_2 = 4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_3, NULL);
		// musicSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___musicSource_6;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m27816732AF730AF6BEDE4A67ABC9D1A094777213 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void VfxSpinner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VfxSpinner_Update_mDB47E697DB1C28D2A78AAE1E1E66A3BC3EA13589 (VfxSpinner_tBA40B38B07B13BB0BD034D4B7BE323EC0BE6864A* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(0,0, speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = __this->___speed_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_0);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_0, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_1, L_2)), NULL);
		// }
		return;
	}
}
// System.Void VfxSpinner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VfxSpinner__ctor_m0540E29E3C857395EA301D77D879E6A7FD52E314 (VfxSpinner_tBA40B38B07B13BB0BD034D4B7BE323EC0BE6864A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Curiologix.DotForSound::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotForSound_Start_mD0CC44CEA3F1B47249A5F456DE67348E530E9DB0 (DotForSound_tCA41E1C53D2723C8598957A4800027AD727B9D08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pointSprite == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___pointSprite_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// pointSprite = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___pointSprite_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointSprite_4), (void*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Curiologix.DotForSound::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotForSound_OnCollisionEnter2D_mB59833B695538F61D9C7B165C915AC323417217A (DotForSound_tCA41E1C53D2723C8598957A4800027AD727B9D08* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_coll, const RuntimeMethod* method) 
{
	{
		// FortuneWheel.Instance.HitStart(pointSprite);
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_0;
		L_0 = FortuneWheel_get_Instance_mB2CA56AB24E455ADA003DB98913453A5B4CFBA62(NULL);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___pointSprite_4;
		NullCheck(L_0);
		FortuneWheel_HitStart_m7F4F7C5F1A15E84CD5A0B2B02632632297DC7659(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Curiologix.DotForSound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotForSound__ctor_m2D8C64D21C4F7FE44E24CB412C3187558C89D389 (DotForSound_tCA41E1C53D2723C8598957A4800027AD727B9D08* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Curiologix.DotLight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotLight__ctor_m9F50E97C0DD20980F25CF3C280245FC3B1773E35 (DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Int32 Curiologix.FortuneWheel::get_rewardCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FortuneWheel_get_rewardCount_mDC48A436EE377840A4D6D849413CBA0A747FB03D (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) 
{
	{
		// public int rewardCount { get { return FortuneWheelConfig.Instance.prizes.Length; } }
		FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* L_0;
		L_0 = FortuneWheelConfig_get_Instance_m5F6173E110482DC4B3FB3FF0FBF1EC94AF61DE97(NULL);
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___prizes_4;
		NullCheck(L_1);
		return ((int32_t)(((RuntimeArray*)L_1)->max_length));
	}
}
// System.Int32 Curiologix.FortuneWheel::get_lightCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FortuneWheel_get_lightCount_mA5962E2D8331F8A56F53F44C4317CA6D8846BDDA (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) 
{
	{
		// public int lightCount { get { return lightObjs.Length; } }
		DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* L_0 = __this->___lightObjs_18;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// System.Int32 Curiologix.FortuneWheel::get_Coins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FortuneWheel_get_Coins_mD48FBDD7C14ED75F5CAD0869323A7461B7AC3879 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) 
{
	{
		// get { return _coins; }
		int32_t L_0 = __this->____coins_13;
		return L_0;
	}
}
// System.Void Curiologix.FortuneWheel::set_Coins(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheel_set_Coins_mBA09FFD4DEF230AEFBD791DFF24B613242B7314F (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// _coins = value;
		int32_t L_0 = ___0_value;
		__this->____coins_13 = L_0;
		// }
		return;
	}
}
// System.Int32 Curiologix.FortuneWheel::get_SelectedReward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FortuneWheel_get_SelectedReward_mC5EE125D23DEAACC2FFCFC8B815DFEB437485468 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) 
{
	{
		// return _selectReward;
		int32_t L_0 = __this->____selectReward_12;
		return L_0;
	}
}
// System.Void Curiologix.FortuneWheel::set_SelectedReward(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheel_set_SelectedReward_mB1153434138BCECC712362807CDD9DFEAC83D2C5 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _selectReward = Mathf.Clamp(value, 0, FortuneWheelConfig.Instance.prizes.Length);
		int32_t L_0 = ___0_value;
		FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* L_1;
		L_1 = FortuneWheelConfig_get_Instance_m5F6173E110482DC4B3FB3FF0FBF1EC94AF61DE97(NULL);
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1->___prizes_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_0, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		__this->____selectReward_12 = L_3;
		// if (spinning)
		bool L_4 = __this->___spinning_20;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		// selectedText.text = FortuneWheelConfig.GetValueFormated(FortuneWheelConfig.Instance.prizes[_selectReward]);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___selectedText_6;
		FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* L_6;
		L_6 = FortuneWheelConfig_get_Instance_m5F6173E110482DC4B3FB3FF0FBF1EC94AF61DE97(NULL);
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___prizes_4;
		int32_t L_8 = __this->____selectReward_12;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		String_t* L_11;
		L_11 = FortuneWheelConfig_GetValueFormated_m467D6CC58F7FDDC970611F2D4BC030E27A053471(L_10, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_11);
		return;
	}

IL_0043:
	{
		// selectedText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___selectedText_6;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void Curiologix.FortuneWheel::onClickSpinNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheel_onClickSpinNow_mF5DB23DCC5AB90DB7BCB60B3BDD82E5AE2A120A9 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) 
{
	{
		// if (Coins >= cost)
		int32_t L_0;
		L_0 = FortuneWheel_get_Coins_mD48FBDD7C14ED75F5CAD0869323A7461B7AC3879_inline(__this, NULL);
		int32_t L_1 = __this->___cost_15;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		// spinButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___spinButton_4;
		NullCheck(L_2);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_2, (bool)0, NULL);
		// StartSpin();
		FortuneWheel_StartSpin_m910132ACF300B607FD224B048912C733883CDCA4(__this, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Curiologix.FortuneWheel::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheel_Awake_m6636CDF98ECDB8904856F2214A653A856F4BD608 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisDotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E_m63E844D1292A19DE3535FB87D4395764E770880F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisWheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695_mAC934D1DB26965B342FD72C3C3CB2A86650D71A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FortuneWheel_onClickSpinNow_mF5DB23DCC5AB90DB7BCB60B3BDD82E5AE2A120A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* V_5 = NULL;
	{
		// dots[0] = FortuneWheelConfig.Instance.illuminatiDots[0];
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_0 = __this->___dots_19;
		FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* L_1;
		L_1 = FortuneWheelConfig_get_Instance_m5F6173E110482DC4B3FB3FF0FBF1EC94AF61DE97(NULL);
		NullCheck(L_1);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_2 = L_1->___illuminatiDots_9;
		NullCheck(L_2);
		int32_t L_3 = 0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_4);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)L_4);
		// dots[1] = FortuneWheelConfig.Instance.illuminatiDots[1];
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_5 = __this->___dots_19;
		FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* L_6;
		L_6 = FortuneWheelConfig_get_Instance_m5F6173E110482DC4B3FB3FF0FBF1EC94AF61DE97(NULL);
		NullCheck(L_6);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_7 = L_6->___illuminatiDots_9;
		NullCheck(L_7);
		int32_t L_8 = 1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)L_9);
		// Coins = PlayerPrefs.GetInt("Coins", 0);
		int32_t L_10;
		L_10 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, 0, NULL);
		FortuneWheel_set_Coins_mBA09FFD4DEF230AEFBD791DFF24B613242B7314F_inline(__this, L_10, NULL);
		// timer4Spin.gameObject.SetActive(true);
		TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE* L_11 = __this->___timer4Spin_7;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// spinButton.onClick.AddListener(onClickSpinNow);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = __this->___spinButton_4;
		NullCheck(L_13);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_14;
		L_14 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_13, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_15 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_15, __this, (intptr_t)((void*)FortuneWheel_onClickSpinNow_mF5DB23DCC5AB90DB7BCB60B3BDD82E5AE2A120A9_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_14, L_15, NULL);
		// spinning = false;
		__this->___spinning_20 = (bool)0;
		// anglePerReward = 360 / rewardCount;
		int32_t L_16;
		L_16 = FortuneWheel_get_rewardCount_mDC48A436EE377840A4D6D849413CBA0A747FB03D(__this, NULL);
		__this->___anglePerReward_21 = ((float)((int32_t)(((int32_t)360)/L_16)));
		// wheelParts = wheelPartsParent.GetComponentsInChildren<WheelPart>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___wheelPartsParent_9;
		NullCheck(L_17);
		WheelPartU5BU5D_t2E8E14E89A105176AED8AC921111458BCA417AC2* L_18;
		L_18 = Component_GetComponentsInChildren_TisWheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695_mAC934D1DB26965B342FD72C3C3CB2A86650D71A4(L_17, Component_GetComponentsInChildren_TisWheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695_mAC934D1DB26965B342FD72C3C3CB2A86650D71A4_RuntimeMethod_var);
		__this->___wheelParts_17 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wheelParts_17), (void*)L_18);
		// for (int i = 0; i < rewardCount; i++)
		V_2 = 0;
		goto IL_00c4;
	}

IL_0095:
	{
		// wheelParts[i].transform.localEulerAngles = new Vector3(0, 0, (i * -anglePerReward));
		WheelPartU5BU5D_t2E8E14E89A105176AED8AC921111458BCA417AC2* L_19 = __this->___wheelParts_17;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		WheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		int32_t L_24 = V_2;
		float L_25 = __this->___anglePerReward_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(((float)L_24), ((-L_25)))), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_23, L_26, NULL);
		// for (int i = 0; i < rewardCount; i++)
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00c4:
	{
		// for (int i = 0; i < rewardCount; i++)
		int32_t L_28 = V_2;
		int32_t L_29;
		L_29 = FortuneWheel_get_rewardCount_mDC48A436EE377840A4D6D849413CBA0A747FB03D(__this, NULL);
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0095;
		}
	}
	{
		// lightObjs = lightsParent.GetComponentsInChildren<DotLight>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___lightsParent_10;
		NullCheck(L_30);
		DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* L_31;
		L_31 = Component_GetComponentsInChildren_TisDotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E_m63E844D1292A19DE3535FB87D4395764E770880F(L_30, Component_GetComponentsInChildren_TisDotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E_m63E844D1292A19DE3535FB87D4395764E770880F_RuntimeMethod_var);
		__this->___lightObjs_18 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lightObjs_18), (void*)L_31);
		// int lights = lightCount + 7;
		int32_t L_32;
		L_32 = FortuneWheel_get_lightCount_mA5962E2D8331F8A56F53F44C4317CA6D8846BDDA(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 7));
		// anglePerLight = 360 / lights;
		int32_t L_33 = V_0;
		__this->___anglePerLight_22 = ((float)((int32_t)(((int32_t)360)/L_33)));
		// int objID = 0;
		V_1 = 0;
		// for (int i = 0; i < lights; i++)
		V_3 = 0;
		goto IL_0137;
	}

IL_00fb:
	{
		// if (i >= 7 && i <= 13) continue;
		int32_t L_34 = V_3;
		if ((((int32_t)L_34) < ((int32_t)7)))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_35 = V_3;
		if ((((int32_t)L_35) <= ((int32_t)((int32_t)13))))
		{
			goto IL_0133;
		}
	}

IL_0104:
	{
		// lightObjs[objID].transform.localEulerAngles = new Vector3(0, 0, (i * -anglePerLight));
		DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* L_36 = __this->___lightObjs_18;
		int32_t L_37 = V_1;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		int32_t L_41 = V_3;
		float L_42 = __this->___anglePerLight_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(((float)L_41), ((-L_42)))), /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_40, L_43, NULL);
		// objID++;
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0133:
	{
		// for (int i = 0; i < lights; i++)
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0137:
	{
		// for (int i = 0; i < lights; i++)
		int32_t L_46 = V_3;
		int32_t L_47 = V_0;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_00fb;
		}
	}
	{
		// audSource = new AudioSource[5];
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_48 = (AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2*)(AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2*)SZArrayNew(AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->___audSource_16 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audSource_16), (void*)L_48);
		// for (int i = 0; i < 5; i++)
		V_4 = 0;
		goto IL_017a;
	}

IL_014c:
	{
		// AudioSource source = gameObject.AddComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_49);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_50;
		L_50 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_49, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		V_5 = L_50;
		// source.playOnAwake = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_51 = V_5;
		NullCheck(L_51);
		AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949(L_51, (bool)0, NULL);
		// source.loop = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_52 = V_5;
		NullCheck(L_52);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_52, (bool)0, NULL);
		// audSource[i] = source;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_53 = __this->___audSource_16;
		int32_t L_54 = V_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_55 = V_5;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_55);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*)L_55);
		// for (int i = 0; i < 5; i++)
		int32_t L_56 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_017a:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_57 = V_4;
		if ((((int32_t)L_57) < ((int32_t)5)))
		{
			goto IL_014c;
		}
	}
	{
		// AnimateWheel(true);
		FortuneWheel_AnimateWheel_m3F0A3B398967F34590CC0F6981C302B2ECD0BB65(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Curiologix.FortuneWheel::StartSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheel_StartSpin_m910132ACF300B607FD224B048912C733883CDCA4 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// targetToStopOn = lowArray[Random.Range(0, 9)];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___lowArray_26;
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)9), NULL);
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->___targetToStopOn_27 = L_3;
		// if (highreward)
		bool L_4 = __this->___highreward_23;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// targetToStopOn = highArray[Random.Range(0,3)];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___highArray_25;
		int32_t L_6;
		L_6 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 3, NULL);
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->___targetToStopOn_27 = L_8;
	}

IL_0031:
	{
		// if (lowreward)
		bool L_9 = __this->___lowreward_24;
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		// targetToStopOn = lowArray[Random.Range(0, 9)];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->___lowArray_26;
		int32_t L_11;
		L_11 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)9), NULL);
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->___targetToStopOn_27 = L_13;
	}

IL_004e:
	{
		// if (!spinning)
		bool L_14 = __this->___spinning_20;
		if (L_14)
		{
			goto IL_0097;
		}
	}
	{
		// float maxAngle = 360 * FortuneWheelConfig.Instance.speedMultiplier + targetToStopOn * anglePerReward;
		FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* L_15;
		L_15 = FortuneWheelConfig_get_Instance_m5F6173E110482DC4B3FB3FF0FBF1EC94AF61DE97(NULL);
		NullCheck(L_15);
		int32_t L_16 = L_15->___speedMultiplier_6;
		int32_t L_17 = __this->___targetToStopOn_27;
		float L_18 = __this->___anglePerReward_21;
		V_0 = ((float)il2cpp_codegen_add(((float)((int32_t)il2cpp_codegen_multiply(((int32_t)360), L_16))), ((float)il2cpp_codegen_multiply(((float)L_17), L_18))));
		// AnimateWheel(false);
		FortuneWheel_AnimateWheel_m3F0A3B398967F34590CC0F6981C302B2ECD0BB65(__this, (bool)0, NULL);
		// StartCoroutine(RotateWheel(FortuneWheelConfig.Instance.duration, maxAngle));
		FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* L_19;
		L_19 = FortuneWheelConfig_get_Instance_m5F6173E110482DC4B3FB3FF0FBF1EC94AF61DE97(NULL);
		NullCheck(L_19);
		int32_t L_20 = L_19->___duration_7;
		float L_21 = V_0;
		RuntimeObject* L_22;
		L_22 = FortuneWheel_RotateWheel_mE9FAAA049D8AFA7FC6B3C7C046257F2EB9E7A341(__this, ((float)L_20), L_21, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_23;
		L_23 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_22, NULL);
	}

IL_0097:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Curiologix.FortuneWheel::RotateWheel(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FortuneWheel_RotateWheel_mE9FAAA049D8AFA7FC6B3C7C046257F2EB9E7A341 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, float ___0_time, float ___1_maxAngle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRotateWheelU3Ed__37_tC9B0298966D6F6F7CCD86B31654F8DD0C632FE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRotateWheelU3Ed__37_tC9B0298966D6F6F7CCD86B31654F8DD0C632FE7C* L_0 = (U3CRotateWheelU3Ed__37_tC9B0298966D6F6F7CCD86B31654F8DD0C632FE7C*)il2cpp_codegen_object_new(U3CRotateWheelU3Ed__37_tC9B0298966D6F6F7CCD86B31654F8DD0C632FE7C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRotateWheelU3Ed__37__ctor_m6F3D2A198893A36E995C4D26FEB3691AA213052D(L_0, 0, NULL);
		U3CRotateWheelU3Ed__37_tC9B0298966D6F6F7CCD86B31654F8DD0C632FE7C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CRotateWheelU3Ed__37_tC9B0298966D6F6F7CCD86B31654F8DD0C632FE7C* L_2 = L_1;
		float L_3 = ___0_time;
		NullCheck(L_2);
		L_2->___time_4 = L_3;
		U3CRotateWheelU3Ed__37_tC9B0298966D6F6F7CCD86B31654F8DD0C632FE7C* L_4 = L_2;
		float L_5 = ___1_maxAngle;
		NullCheck(L_4);
		L_4->___maxAngle_3 = L_5;
		return L_4;
	}
}
// System.Void Curiologix.FortuneWheel::GivePrize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheel_GivePrize_m59E023908A894B5144B3C6DE8B06DEB7D91443E8 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B6389656A573B82D2FA9B8E3FFACD22FA2D4DD6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// AnimateWheel(true);
		FortuneWheel_AnimateWheel_m3F0A3B398967F34590CC0F6981C302B2ECD0BB65(__this, (bool)1, NULL);
		// spinning = false;
		__this->___spinning_20 = (bool)0;
		// spinButton.interactable = Coins >= cost;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___spinButton_4;
		int32_t L_1;
		L_1 = FortuneWheel_get_Coins_mD48FBDD7C14ED75F5CAD0869323A7461B7AC3879_inline(__this, NULL);
		int32_t L_2 = __this->___cost_15;
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// int g = PlayerPrefs.GetInt("NewAllGold");
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral1B6389656A573B82D2FA9B8E3FFACD22FA2D4DD6, NULL);
		V_0 = L_3;
		// g += FortuneWheelConfig.Instance.prizes[SelectedReward];
		int32_t L_4 = V_0;
		FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* L_5;
		L_5 = FortuneWheelConfig_get_Instance_m5F6173E110482DC4B3FB3FF0FBF1EC94AF61DE97(NULL);
		NullCheck(L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5->___prizes_4;
		int32_t L_7;
		L_7 = FortuneWheel_get_SelectedReward_mC5EE125D23DEAACC2FFCFC8B815DFEB437485468_inline(__this, NULL);
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, L_9));
		// PlayerPrefs.SetInt("NewAllGold",g);
		int32_t L_10 = V_0;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral1B6389656A573B82D2FA9B8E3FFACD22FA2D4DD6, L_10, NULL);
		// SelectedReward = 0;
		FortuneWheel_set_SelectedReward_mB1153434138BCECC712362807CDD9DFEAC83D2C5(__this, 0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Curiologix.FortuneWheel::ShowHideParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FortuneWheel_ShowHideParticles_m7BFAC2066A64C9F9AA9FF0ABA318D71287EC508E (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowHideParticlesU3Ed__39_t90379D55FC4B1E99DB43E10726E8C031C741E2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowHideParticlesU3Ed__39_t90379D55FC4B1E99DB43E10726E8C031C741E2E4* L_0 = (U3CShowHideParticlesU3Ed__39_t90379D55FC4B1E99DB43E10726E8C031C741E2E4*)il2cpp_codegen_object_new(U3CShowHideParticlesU3Ed__39_t90379D55FC4B1E99DB43E10726E8C031C741E2E4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CShowHideParticlesU3Ed__39__ctor_m54E1DFCB2A9A109A5ECDD0CFBE4A613101F2FE48(L_0, 0, NULL);
		U3CShowHideParticlesU3Ed__39_t90379D55FC4B1E99DB43E10726E8C031C741E2E4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Curiologix.FortuneWheel::IncrementCoroutine(UnityEngine.UI.Text,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FortuneWheel_IncrementCoroutine_m5B465823ACC0207FD3E28C53EDE150CA60DA763E (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___0_l, int32_t ___1_targetValue, int32_t ___2_startingValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CIncrementCoroutineU3Ed__40_t6225014E657B2DC5F6EDE9BD0C451CC82333577E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CIncrementCoroutineU3Ed__40_t6225014E657B2DC5F6EDE9BD0C451CC82333577E* L_0 = (U3CIncrementCoroutineU3Ed__40_t6225014E657B2DC5F6EDE9BD0C451CC82333577E*)il2cpp_codegen_object_new(U3CIncrementCoroutineU3Ed__40_t6225014E657B2DC5F6EDE9BD0C451CC82333577E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CIncrementCoroutineU3Ed__40__ctor_m3F95E572B5E1E376A0D6AE8E03A3D4173E9AD491(L_0, 0, NULL);
		U3CIncrementCoroutineU3Ed__40_t6225014E657B2DC5F6EDE9BD0C451CC82333577E* L_1 = L_0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = ___0_l;
		NullCheck(L_1);
		L_1->___l_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___l_2), (void*)L_2);
		U3CIncrementCoroutineU3Ed__40_t6225014E657B2DC5F6EDE9BD0C451CC82333577E* L_3 = L_1;
		int32_t L_4 = ___1_targetValue;
		NullCheck(L_3);
		L_3->___targetValue_4 = L_4;
		U3CIncrementCoroutineU3Ed__40_t6225014E657B2DC5F6EDE9BD0C451CC82333577E* L_5 = L_3;
		int32_t L_6 = ___2_startingValue;
		NullCheck(L_5);
		L_5->___startingValue_3 = L_6;
		return L_5;
	}
}
// System.Void Curiologix.FortuneWheel::HitStart(UnityEngine.SpriteRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheel_HitStart_m7F4F7C5F1A15E84CD5A0B2B02632632297DC7659 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0_sp, const RuntimeMethod* method) 
{
	{
		// PlayHitClip();
		FortuneWheel_PlayHitClip_m391B7C44C231E065448F62B7D75002BB680287E0(__this, NULL);
		// }
		return;
	}
}
// System.Void Curiologix.FortuneWheel::AnimateWheel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheel_AnimateWheel_m3F0A3B398967F34590CC0F6981C302B2ECD0BB65 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, bool ___0_playAnim, const RuntimeMethod* method) 
{
	DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// foreach (var item in lightObjs)
		DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* L_0 = __this->___lightObjs_18;
		V_0 = L_0;
		V_1 = 0;
		goto IL_002a;
	}

IL_0011:
	{
		// foreach (var item in lightObjs)
		DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// item.spRend.sprite = dots[0];
		NullCheck(L_4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = L_4->___spRend_4;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_6 = __this->___dots_19;
		NullCheck(L_6);
		int32_t L_7 = 0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_5);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_5, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002a:
	{
		// foreach (var item in lightObjs)
		int32_t L_10 = V_1;
		DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// if (playAnim)
		bool L_12 = ___0_playAnim;
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		// StartCoroutine(PlayAnimationWhenStationary(dots[0], dots[1]));
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_13 = __this->___dots_19;
		NullCheck(L_13);
		int32_t L_14 = 0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_16 = __this->___dots_19;
		NullCheck(L_16);
		int32_t L_17 = 1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		RuntimeObject* L_19;
		L_19 = FortuneWheel_PlayAnimationWhenStationary_m61213616B9030A76D62853CA3CEB8672C1DE0F49(__this, L_15, L_18, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_20;
		L_20 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_19, NULL);
		return;
	}

IL_0051:
	{
		// StartCoroutine(LightAnimDuringSpinning(0));
		RuntimeObject* L_21;
		L_21 = FortuneWheel_LightAnimDuringSpinning_m97E175C393933EC5191545EF680798937CADC59E(__this, 0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_22;
		L_22 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_21, NULL);
		// StartCoroutine(LightAnimDuringSpinning(10));
		RuntimeObject* L_23;
		L_23 = FortuneWheel_LightAnimDuringSpinning_m97E175C393933EC5191545EF680798937CADC59E(__this, ((int32_t)10), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_24;
		L_24 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_23, NULL);
		// StartCoroutine(LightAnimDuringSpinning(20));
		RuntimeObject* L_25;
		L_25 = FortuneWheel_LightAnimDuringSpinning_m97E175C393933EC5191545EF680798937CADC59E(__this, ((int32_t)20), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_26;
		L_26 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_25, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Curiologix.FortuneWheel::PlayAnimationWhenStationary(UnityEngine.Sprite,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FortuneWheel_PlayAnimationWhenStationary_m61213616B9030A76D62853CA3CEB8672C1DE0F49 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sp1, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___1_sp2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPlayAnimationWhenStationaryU3Ed__43_t47B726FA24F91936DAFF27CAFCD4821408EB3927_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPlayAnimationWhenStationaryU3Ed__43_t47B726FA24F91936DAFF27CAFCD4821408EB3927* L_0 = (U3CPlayAnimationWhenStationaryU3Ed__43_t47B726FA24F91936DAFF27CAFCD4821408EB3927*)il2cpp_codegen_object_new(U3CPlayAnimationWhenStationaryU3Ed__43_t47B726FA24F91936DAFF27CAFCD4821408EB3927_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPlayAnimationWhenStationaryU3Ed__43__ctor_mD210B00926074AD80C812537C07DC93B2118E1A0(L_0, 0, NULL);
		U3CPlayAnimationWhenStationaryU3Ed__43_t47B726FA24F91936DAFF27CAFCD4821408EB3927* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CPlayAnimationWhenStationaryU3Ed__43_t47B726FA24F91936DAFF27CAFCD4821408EB3927* L_2 = L_1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = ___0_sp1;
		NullCheck(L_2);
		L_2->___sp1_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___sp1_3), (void*)L_3);
		U3CPlayAnimationWhenStationaryU3Ed__43_t47B726FA24F91936DAFF27CAFCD4821408EB3927* L_4 = L_2;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = ___1_sp2;
		NullCheck(L_4);
		L_4->___sp2_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___sp2_4), (void*)L_5);
		return L_4;
	}
}
// System.Collections.IEnumerator Curiologix.FortuneWheel::LightAnimDuringSpinning(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FortuneWheel_LightAnimDuringSpinning_m97E175C393933EC5191545EF680798937CADC59E (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLightAnimDuringSpinningU3Ed__44_tBB28DDA976080673F591183F17B0660656F90B09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLightAnimDuringSpinningU3Ed__44_tBB28DDA976080673F591183F17B0660656F90B09* L_0 = (U3CLightAnimDuringSpinningU3Ed__44_tBB28DDA976080673F591183F17B0660656F90B09*)il2cpp_codegen_object_new(U3CLightAnimDuringSpinningU3Ed__44_tBB28DDA976080673F591183F17B0660656F90B09_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLightAnimDuringSpinningU3Ed__44__ctor_mC91EABDEA00C01604DE4E7B2C21ADDD9F780C203(L_0, 0, NULL);
		U3CLightAnimDuringSpinningU3Ed__44_tBB28DDA976080673F591183F17B0660656F90B09* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CLightAnimDuringSpinningU3Ed__44_tBB28DDA976080673F591183F17B0660656F90B09* L_2 = L_1;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		L_2->___index_2 = L_3;
		return L_2;
	}
}
// System.Collections.IEnumerator Curiologix.FortuneWheel::SymetricLightMovement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FortuneWheel_SymetricLightMovement_m1CE0E122EEA46D8033410BDFD543DABCFAA218A9 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSymetricLightMovementU3Ed__45_t7DE666D3ADF85875343B81A02A0E0BC8F867D5D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSymetricLightMovementU3Ed__45_t7DE666D3ADF85875343B81A02A0E0BC8F867D5D6* L_0 = (U3CSymetricLightMovementU3Ed__45_t7DE666D3ADF85875343B81A02A0E0BC8F867D5D6*)il2cpp_codegen_object_new(U3CSymetricLightMovementU3Ed__45_t7DE666D3ADF85875343B81A02A0E0BC8F867D5D6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSymetricLightMovementU3Ed__45__ctor_m5611B7B27D02CEC2DD18DADD9E3B8377E21041C8(L_0, 0, NULL);
		U3CSymetricLightMovementU3Ed__45_t7DE666D3ADF85875343B81A02A0E0BC8F867D5D6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CSymetricLightMovementU3Ed__45_t7DE666D3ADF85875343B81A02A0E0BC8F867D5D6* L_2 = L_1;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		L_2->___index_2 = L_3;
		return L_2;
	}
}
// System.Void Curiologix.FortuneWheel::PlayHitClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheel_PlayHitClip_m391B7C44C231E065448F62B7D75002BB680287E0 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < audSource.Length; i++)
		V_0 = 0;
		goto IL_003c;
	}

IL_0004:
	{
		// if (!audSource[i].isPlaying)
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_0 = __this->___audSource_16;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4;
		L_4 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_3, NULL);
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		// audSource[i].clip = FortuneWheelConfig.Instance.tingSound;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_5 = __this->___audSource_16;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* L_9;
		L_9 = FortuneWheelConfig_get_Instance_m5F6173E110482DC4B3FB3FF0FBF1EC94AF61DE97(NULL);
		NullCheck(L_9);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_10 = L_9->___tingSound_5;
		NullCheck(L_8);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_8, L_10, NULL);
		// audSource[i].Play();
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_11 = __this->___audSource_16;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_14, NULL);
		// break;
		return;
	}

IL_0038:
	{
		// for (int i = 0; i < audSource.Length; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003c:
	{
		// for (int i = 0; i < audSource.Length; i++)
		int32_t L_16 = V_0;
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_17 = __this->___audSource_16;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Curiologix.FortuneWheel::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheel_OnApplicationPause_m4062AD3451DBEFDD3D0DBDD8E4CFDE000972D9D2 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, bool ___0_pause, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pause)
		bool L_0 = ___0_pause;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// PlayerPrefs.SetInt("Coins", Coins);
		int32_t L_1;
		L_1 = FortuneWheel_get_Coins_mD48FBDD7C14ED75F5CAD0869323A7461B7AC3879_inline(__this, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral1A4EE5BEF65324F81F44FB871AD37A4741D69B15, L_1, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// Curiologix.FortuneWheel Curiologix.FortuneWheel::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* FortuneWheel_get_Instance_mB2CA56AB24E455ADA003DB98913453A5B4CFBA62 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisFortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00_mC446EB88548AEC9AE744E2169E566B42E734E913_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_0 = ((FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00_StaticFields*)il2cpp_codegen_static_fields_for(FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00_il2cpp_TypeInfo_var))->____instance_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// _instance = FindObjectOfType<FortuneWheel>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_2;
		L_2 = Object_FindObjectOfType_TisFortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00_mC446EB88548AEC9AE744E2169E566B42E734E913(Object_FindObjectOfType_TisFortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00_mC446EB88548AEC9AE744E2169E566B42E734E913_RuntimeMethod_var);
		((FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00_StaticFields*)il2cpp_codegen_static_fields_for(FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00_il2cpp_TypeInfo_var))->____instance_28 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00_StaticFields*)il2cpp_codegen_static_fields_for(FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00_il2cpp_TypeInfo_var))->____instance_28), (void*)L_2);
	}

IL_0017:
	{
		// return _instance;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_3 = ((FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00_StaticFields*)il2cpp_codegen_static_fields_for(FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00_il2cpp_TypeInfo_var))->____instance_28;
		return L_3;
	}
}
// System.Void Curiologix.FortuneWheel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheel__ctor_mFD87F060F70A583D5E003660386D7604798AAF67 (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Sprite[] dots = new Sprite[2];
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_0 = (SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B*)(SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B*)SZArrayNew(SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___dots_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dots_19), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Curiologix.FortuneWheel/<RotateWheel>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateWheelU3Ed__37__ctor_m6F3D2A198893A36E995C4D26FEB3691AA213052D (U3CRotateWheelU3Ed__37_tC9B0298966D6F6F7CCD86B31654F8DD0C632FE7C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Curiologix.FortuneWheel/<RotateWheel>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateWheelU3Ed__37_System_IDisposable_Dispose_mE64E74AD7321A31AB0073FB027211ABC6C845EF3 (U3CRotateWheelU3Ed__37_tC9B0298966D6F6F7CCD86B31654F8DD0C632FE7C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Curiologix.FortuneWheel/<RotateWheel>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRotateWheelU3Ed__37_MoveNext_m07605EC4E5E4053D5A601476EF144845E5FC2DB4 (U3CRotateWheelU3Ed__37_tC9B0298966D6F6F7CCD86B31654F8DD0C632FE7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00d5;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// spinning = true;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_4 = V_1;
		NullCheck(L_4);
		L_4->___spinning_20 = (bool)1;
		// float timer = 0.0f;
		__this->___U3CtimerU3E5__2_5 = (0.0f);
		// float startAngle = wheelToRotate.transform.eulerAngles.z;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_5 = V_1;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = L_5->___wheelToRotate_8;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_7, NULL);
		float L_9 = L_8.___z_4;
		__this->___U3CstartAngleU3E5__3_6 = L_9;
		// maxAngle = maxAngle - startAngle;
		float L_10 = __this->___maxAngle_3;
		float L_11 = __this->___U3CstartAngleU3E5__3_6;
		__this->___maxAngle_3 = ((float)il2cpp_codegen_subtract(L_10, L_11));
		goto IL_00dc;
	}

IL_0063:
	{
		// float angle = maxAngle * FortuneWheelConfig.Instance.animationCurve.Evaluate(timer / time);
		float L_12 = __this->___maxAngle_3;
		FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* L_13;
		L_13 = FortuneWheelConfig_get_Instance_m5F6173E110482DC4B3FB3FF0FBF1EC94AF61DE97(NULL);
		NullCheck(L_13);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_14 = L_13->___animationCurve_10;
		float L_15 = __this->___U3CtimerU3E5__2_5;
		float L_16 = __this->___time_4;
		NullCheck(L_14);
		float L_17;
		L_17 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_14, ((float)(L_15/L_16)), NULL);
		V_2 = ((float)il2cpp_codegen_multiply(L_12, L_17));
		// wheelToRotate.transform.eulerAngles = new Vector3(0.0f, 0.0f, angle + startAngle);
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_18 = V_1;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = L_18->___wheelToRotate_8;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		float L_21 = V_2;
		float L_22 = __this->___U3CstartAngleU3E5__3_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), (0.0f), (0.0f), ((float)il2cpp_codegen_add(L_21, L_22)), /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_20, L_23, NULL);
		// timer += Time.deltaTime;
		float L_24 = __this->___U3CtimerU3E5__2_5;
		float L_25;
		L_25 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimerU3E5__2_5 = ((float)il2cpp_codegen_add(L_24, L_25));
		// yield return 0;
		int32_t L_26 = 0;
		RuntimeObject* L_27 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_26);
		__this->___U3CU3E2__current_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_27);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00d5:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00dc:
	{
		// while (timer < time)
		float L_28 = __this->___U3CtimerU3E5__2_5;
		float L_29 = __this->___time_4;
		if ((((float)L_28) < ((float)L_29)))
		{
			goto IL_0063;
		}
	}
	{
		// wheelToRotate.transform.eulerAngles = new Vector3(0.0f, 0.0f, maxAngle + startAngle);
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_30 = V_1;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = L_30->___wheelToRotate_8;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		float L_33 = __this->___maxAngle_3;
		float L_34 = __this->___U3CstartAngleU3E5__3_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), (0.0f), (0.0f), ((float)il2cpp_codegen_add(L_33, L_34)), /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_32, L_35, NULL);
		// StartCoroutine(ShowHideParticles());
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_36 = V_1;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_37 = V_1;
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = FortuneWheel_ShowHideParticles_m7BFAC2066A64C9F9AA9FF0ABA318D71287EC508E(L_37, NULL);
		NullCheck(L_36);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_39;
		L_39 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_36, L_38, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Curiologix.FortuneWheel/<RotateWheel>d__37::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRotateWheelU3Ed__37_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD6D618A8877C616BECB2090C3CC3AD23F2376476 (U3CRotateWheelU3Ed__37_tC9B0298966D6F6F7CCD86B31654F8DD0C632FE7C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Curiologix.FortuneWheel/<RotateWheel>d__37::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRotateWheelU3Ed__37_System_Collections_IEnumerator_Reset_m427533A20C0A633AFFA6374D943D0B665B5424AD (U3CRotateWheelU3Ed__37_tC9B0298966D6F6F7CCD86B31654F8DD0C632FE7C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRotateWheelU3Ed__37_System_Collections_IEnumerator_Reset_m427533A20C0A633AFFA6374D943D0B665B5424AD_RuntimeMethod_var)));
	}
}
// System.Object Curiologix.FortuneWheel/<RotateWheel>d__37::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRotateWheelU3Ed__37_System_Collections_IEnumerator_get_Current_mC6660989B47231FDB6C371DD049E1F737BB032BA (U3CRotateWheelU3Ed__37_tC9B0298966D6F6F7CCD86B31654F8DD0C632FE7C* __this, const RuntimeMethod* method) 
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
// System.Void Curiologix.FortuneWheel/<ShowHideParticles>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowHideParticlesU3Ed__39__ctor_m54E1DFCB2A9A109A5ECDD0CFBE4A613101F2FE48 (U3CShowHideParticlesU3Ed__39_t90379D55FC4B1E99DB43E10726E8C031C741E2E4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Curiologix.FortuneWheel/<ShowHideParticles>d__39::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowHideParticlesU3Ed__39_System_IDisposable_Dispose_m016851A837C316CBE6BF6719828B1A97810C6DCF (U3CShowHideParticlesU3Ed__39_t90379D55FC4B1E99DB43E10726E8C031C741E2E4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Curiologix.FortuneWheel/<ShowHideParticles>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowHideParticlesU3Ed__39_MoveNext_m671DB760D7D1D35D6AA8235CEF8949A4AFE88D38 (U3CShowHideParticlesU3Ed__39_t90379D55FC4B1E99DB43E10726E8C031C741E2E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// winParticles.gameObject.SetActive(true);
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___winParticles_11;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// yield return new WaitForSeconds(2.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (2.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0048:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// winParticles.gameObject.SetActive(false);
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___winParticles_11;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// GivePrize();
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_11 = V_1;
		NullCheck(L_11);
		FortuneWheel_GivePrize_m59E023908A894B5144B3C6DE8B06DEB7D91443E8(L_11, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Curiologix.FortuneWheel/<ShowHideParticles>d__39::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowHideParticlesU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m13A558E2EAB7D28F5AA7BF9D7CE9159117111F75 (U3CShowHideParticlesU3Ed__39_t90379D55FC4B1E99DB43E10726E8C031C741E2E4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Curiologix.FortuneWheel/<ShowHideParticles>d__39::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowHideParticlesU3Ed__39_System_Collections_IEnumerator_Reset_m165FA4AA22E65E695DFE25492917FB29BE860C73 (U3CShowHideParticlesU3Ed__39_t90379D55FC4B1E99DB43E10726E8C031C741E2E4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowHideParticlesU3Ed__39_System_Collections_IEnumerator_Reset_m165FA4AA22E65E695DFE25492917FB29BE860C73_RuntimeMethod_var)));
	}
}
// System.Object Curiologix.FortuneWheel/<ShowHideParticles>d__39::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowHideParticlesU3Ed__39_System_Collections_IEnumerator_get_Current_m8F236FDF262EE917E608F97FE11024B02986B1AF (U3CShowHideParticlesU3Ed__39_t90379D55FC4B1E99DB43E10726E8C031C741E2E4* __this, const RuntimeMethod* method) 
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
// System.Void Curiologix.FortuneWheel/<IncrementCoroutine>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncrementCoroutineU3Ed__40__ctor_m3F95E572B5E1E376A0D6AE8E03A3D4173E9AD491 (U3CIncrementCoroutineU3Ed__40_t6225014E657B2DC5F6EDE9BD0C451CC82333577E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Curiologix.FortuneWheel/<IncrementCoroutine>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncrementCoroutineU3Ed__40_System_IDisposable_Dispose_m89E1F3E3C52A587CC594E009063396811B55D18D (U3CIncrementCoroutineU3Ed__40_t6225014E657B2DC5F6EDE9BD0C451CC82333577E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Curiologix.FortuneWheel/<IncrementCoroutine>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIncrementCoroutineU3Ed__40_MoveNext_m16E01BA138F9AA06C3F0A930E8A77C05EA7DB647 (U3CIncrementCoroutineU3Ed__40_t6225014E657B2DC5F6EDE9BD0C451CC82333577E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float time = 0;
		__this->___U3CtimeU3E5__2_5 = (0.0f);
		// l.text = startingValue.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___l_2;
		int32_t* L_4 = (int32_t*)(&__this->___startingValue_3);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// float incrementTime = 1.5f;
		__this->___U3CincrementTimeU3E5__3_6 = (1.5f);
		goto IL_00a1;
	}

IL_0045:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0055:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// time += Time.deltaTime;
		float L_6 = __this->___U3CtimeU3E5__2_5;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimeU3E5__2_5 = ((float)il2cpp_codegen_add(L_6, L_7));
		// float factor = time / incrementTime;
		float L_8 = __this->___U3CtimeU3E5__2_5;
		float L_9 = __this->___U3CincrementTimeU3E5__3_6;
		V_1 = ((float)(L_8/L_9));
		// l.text = FortuneWheelConfig.GetValueFormated((int)Mathf.Lerp(startingValue, targetValue, factor));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___l_2;
		int32_t L_11 = __this->___startingValue_3;
		int32_t L_12 = __this->___targetValue_4;
		float L_13 = V_1;
		float L_14;
		L_14 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(((float)L_11), ((float)L_12), L_13, NULL);
		String_t* L_15;
		L_15 = FortuneWheelConfig_GetValueFormated_m467D6CC58F7FDDC970611F2D4BC030E27A053471(il2cpp_codegen_cast_double_to_int<int32_t>(L_14), NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_15);
	}

IL_00a1:
	{
		// while (time < incrementTime)
		float L_16 = __this->___U3CtimeU3E5__2_5;
		float L_17 = __this->___U3CincrementTimeU3E5__3_6;
		if ((((float)L_16) < ((float)L_17)))
		{
			goto IL_0045;
		}
	}
	{
		// l.text = FortuneWheelConfig.GetValueFormated(targetValue);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___l_2;
		int32_t L_19 = __this->___targetValue_4;
		String_t* L_20;
		L_20 = FortuneWheelConfig_GetValueFormated_m467D6CC58F7FDDC970611F2D4BC030E27A053471(L_19, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_20);
		// yield break;
		return (bool)0;
	}
}
// System.Object Curiologix.FortuneWheel/<IncrementCoroutine>d__40::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIncrementCoroutineU3Ed__40_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC62952D7F1CBA6279ECCDA5393F74F8F7DC28A14 (U3CIncrementCoroutineU3Ed__40_t6225014E657B2DC5F6EDE9BD0C451CC82333577E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Curiologix.FortuneWheel/<IncrementCoroutine>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncrementCoroutineU3Ed__40_System_Collections_IEnumerator_Reset_m245ECF1B40B5C692A4C5ED1009CD803455051030 (U3CIncrementCoroutineU3Ed__40_t6225014E657B2DC5F6EDE9BD0C451CC82333577E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIncrementCoroutineU3Ed__40_System_Collections_IEnumerator_Reset_m245ECF1B40B5C692A4C5ED1009CD803455051030_RuntimeMethod_var)));
	}
}
// System.Object Curiologix.FortuneWheel/<IncrementCoroutine>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIncrementCoroutineU3Ed__40_System_Collections_IEnumerator_get_Current_mC25FFF855B27D00564B8E74568AA598D2A0A6196 (U3CIncrementCoroutineU3Ed__40_t6225014E657B2DC5F6EDE9BD0C451CC82333577E* __this, const RuntimeMethod* method) 
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
// System.Void Curiologix.FortuneWheel/<PlayAnimationWhenStationary>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayAnimationWhenStationaryU3Ed__43__ctor_mD210B00926074AD80C812537C07DC93B2118E1A0 (U3CPlayAnimationWhenStationaryU3Ed__43_t47B726FA24F91936DAFF27CAFCD4821408EB3927* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Curiologix.FortuneWheel/<PlayAnimationWhenStationary>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayAnimationWhenStationaryU3Ed__43_System_IDisposable_Dispose_mFF44639D83A47A7702642FEFCE899A59C0A71F31 (U3CPlayAnimationWhenStationaryU3Ed__43_t47B726FA24F91936DAFF27CAFCD4821408EB3927* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Curiologix.FortuneWheel/<PlayAnimationWhenStationary>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPlayAnimationWhenStationaryU3Ed__43_MoveNext_m4D07C3A0ED0ADEECF8495252156CA576742DC4BA (U3CPlayAnimationWhenStationaryU3Ed__43_t47B726FA24F91936DAFF27CAFCD4821408EB3927* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* V_1 = NULL;
	int32_t V_2 = 0;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* G_B7_0 = NULL;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* G_B6_0 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B8_0 = NULL;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* G_B8_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// count++;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_5 = V_1;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___count_14;
		NullCheck(L_5);
		L_5->___count_14 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// for (int i = 0; i < lightObjs.Length; i++)
		V_2 = 0;
		goto IL_0079;
	}

IL_0050:
	{
		// lightObjs[i].spRend.sprite = (i % 2 == 0) ? sp1 : sp2;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_8 = V_1;
		NullCheck(L_8);
		DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* L_9 = L_8->___lightObjs_18;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_13 = L_12->___spRend_4;
		int32_t L_14 = V_2;
		G_B6_0 = L_13;
		if (!((int32_t)(L_14%2)))
		{
			G_B7_0 = L_13;
			goto IL_006a;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_15 = __this->___sp2_4;
		G_B8_0 = L_15;
		G_B8_1 = G_B6_0;
		goto IL_0070;
	}

IL_006a:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_16 = __this->___sp1_3;
		G_B8_0 = L_16;
		G_B8_1 = G_B7_0;
	}

IL_0070:
	{
		NullCheck(G_B8_1);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(G_B8_1, G_B8_0, NULL);
		// for (int i = 0; i < lightObjs.Length; i++)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0079:
	{
		// for (int i = 0; i < lightObjs.Length; i++)
		int32_t L_18 = V_2;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_19 = V_1;
		NullCheck(L_19);
		DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* L_20 = L_19->___lightObjs_18;
		NullCheck(L_20);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		// if (count < Random.Range(10, 30))
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = L_21->___count_14;
		int32_t L_23;
		L_23 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)10), ((int32_t)30), NULL);
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_00b0;
		}
	}
	{
		// StartCoroutine(PlayAnimationWhenStationary(sp2, sp1));
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_24 = V_1;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_25 = V_1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_26 = __this->___sp2_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_27 = __this->___sp1_3;
		NullCheck(L_25);
		RuntimeObject* L_28;
		L_28 = FortuneWheel_PlayAnimationWhenStationary_m61213616B9030A76D62853CA3CEB8672C1DE0F49(L_25, L_26, L_27, NULL);
		NullCheck(L_24);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_29;
		L_29 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_24, L_28, NULL);
		goto IL_00be;
	}

IL_00b0:
	{
		// StartCoroutine(SymetricLightMovement(0));
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_30 = V_1;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_31 = V_1;
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = FortuneWheel_SymetricLightMovement_m1CE0E122EEA46D8033410BDFD543DABCFAA218A9(L_31, 0, NULL);
		NullCheck(L_30);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_33;
		L_33 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_30, L_32, NULL);
	}

IL_00be:
	{
		// }
		return (bool)0;
	}
}
// System.Object Curiologix.FortuneWheel/<PlayAnimationWhenStationary>d__43::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayAnimationWhenStationaryU3Ed__43_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m440B155288FA3425D9A998B64FC1B4C169123D7C (U3CPlayAnimationWhenStationaryU3Ed__43_t47B726FA24F91936DAFF27CAFCD4821408EB3927* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Curiologix.FortuneWheel/<PlayAnimationWhenStationary>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayAnimationWhenStationaryU3Ed__43_System_Collections_IEnumerator_Reset_m69CD48DA76C47E3B20417E85006DDB74E8B2F3B5 (U3CPlayAnimationWhenStationaryU3Ed__43_t47B726FA24F91936DAFF27CAFCD4821408EB3927* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPlayAnimationWhenStationaryU3Ed__43_System_Collections_IEnumerator_Reset_m69CD48DA76C47E3B20417E85006DDB74E8B2F3B5_RuntimeMethod_var)));
	}
}
// System.Object Curiologix.FortuneWheel/<PlayAnimationWhenStationary>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayAnimationWhenStationaryU3Ed__43_System_Collections_IEnumerator_get_Current_m117ACFF462CC144AFED3730A2F33EEF7B45C02C2 (U3CPlayAnimationWhenStationaryU3Ed__43_t47B726FA24F91936DAFF27CAFCD4821408EB3927* __this, const RuntimeMethod* method) 
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
// System.Void Curiologix.FortuneWheel/<LightAnimDuringSpinning>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLightAnimDuringSpinningU3Ed__44__ctor_mC91EABDEA00C01604DE4E7B2C21ADDD9F780C203 (U3CLightAnimDuringSpinningU3Ed__44_tBB28DDA976080673F591183F17B0660656F90B09* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Curiologix.FortuneWheel/<LightAnimDuringSpinning>d__44::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLightAnimDuringSpinningU3Ed__44_System_IDisposable_Dispose_m542A590E66B2A03B018FDBECAF8380AC5740A197 (U3CLightAnimDuringSpinningU3Ed__44_tBB28DDA976080673F591183F17B0660656F90B09* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Curiologix.FortuneWheel/<LightAnimDuringSpinning>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLightAnimDuringSpinningU3Ed__44_MoveNext_m7C34F0308D5941DCD851A14F729CFDCAAE94F0A4 (U3CLightAnimDuringSpinningU3Ed__44_tBB28DDA976080673F591183F17B0660656F90B09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_00b7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.05f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.0500000007f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (index < lightObjs.Length - 1)
		int32_t L_4 = __this->___index_2;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_5 = V_1;
		NullCheck(L_5);
		DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* L_6 = L_5->___lightObjs_18;
		NullCheck(L_6);
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1)))))
		{
			goto IL_0115;
		}
	}
	{
		// lightObjs[index].spRend.sprite = dots[1];
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_7 = V_1;
		NullCheck(L_7);
		DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* L_8 = L_7->___lightObjs_18;
		int32_t L_9 = __this->___index_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = L_11->___spRend_4;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_13 = V_1;
		NullCheck(L_13);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_14 = L_13->___dots_19;
		NullCheck(L_14);
		int32_t L_15 = 1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_12, L_16, NULL);
		// lightObjs[index + 1].spRend.sprite = dots[1];
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_17 = V_1;
		NullCheck(L_17);
		DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* L_18 = L_17->___lightObjs_18;
		int32_t L_19 = __this->___index_2;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = L_21->___spRend_4;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_23 = V_1;
		NullCheck(L_23);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_24 = L_23->___dots_19;
		NullCheck(L_24);
		int32_t L_25 = 1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_22);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_22, L_26, NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_27 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_27, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_27);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00b7:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// lightObjs[index].spRend.sprite = dots[0];
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_28 = V_1;
		NullCheck(L_28);
		DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* L_29 = L_28->___lightObjs_18;
		int32_t L_30 = __this->___index_2;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_33 = L_32->___spRend_4;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_34 = V_1;
		NullCheck(L_34);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_35 = L_34->___dots_19;
		NullCheck(L_35);
		int32_t L_36 = 0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_33);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_33, L_37, NULL);
		// lightObjs[index + 1].spRend.sprite = dots[0];
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_38 = V_1;
		NullCheck(L_38);
		DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* L_39 = L_38->___lightObjs_18;
		int32_t L_40 = __this->___index_2;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_43 = L_42->___spRend_4;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_44 = V_1;
		NullCheck(L_44);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_45 = L_44->___dots_19;
		NullCheck(L_45);
		int32_t L_46 = 0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_43);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_43, L_47, NULL);
		// StartCoroutine(LightAnimDuringSpinning(index + 2));
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_48 = V_1;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_49 = V_1;
		int32_t L_50 = __this->___index_2;
		NullCheck(L_49);
		RuntimeObject* L_51;
		L_51 = FortuneWheel_LightAnimDuringSpinning_m97E175C393933EC5191545EF680798937CADC59E(L_49, ((int32_t)il2cpp_codegen_add(L_50, 2)), NULL);
		NullCheck(L_48);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_52;
		L_52 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_48, L_51, NULL);
		goto IL_0123;
	}

IL_0115:
	{
		// StartCoroutine(LightAnimDuringSpinning(0));
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_53 = V_1;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_54 = V_1;
		NullCheck(L_54);
		RuntimeObject* L_55;
		L_55 = FortuneWheel_LightAnimDuringSpinning_m97E175C393933EC5191545EF680798937CADC59E(L_54, 0, NULL);
		NullCheck(L_53);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_56;
		L_56 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_53, L_55, NULL);
	}

IL_0123:
	{
		// }
		return (bool)0;
	}
}
// System.Object Curiologix.FortuneWheel/<LightAnimDuringSpinning>d__44::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLightAnimDuringSpinningU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m199937192ACCFA4DB7FE9A5A9AB6859FBA7D2BB1 (U3CLightAnimDuringSpinningU3Ed__44_tBB28DDA976080673F591183F17B0660656F90B09* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Curiologix.FortuneWheel/<LightAnimDuringSpinning>d__44::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLightAnimDuringSpinningU3Ed__44_System_Collections_IEnumerator_Reset_m6408E7A414B1B55B0E604CB182AE54D45A8D04BC (U3CLightAnimDuringSpinningU3Ed__44_tBB28DDA976080673F591183F17B0660656F90B09* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLightAnimDuringSpinningU3Ed__44_System_Collections_IEnumerator_Reset_m6408E7A414B1B55B0E604CB182AE54D45A8D04BC_RuntimeMethod_var)));
	}
}
// System.Object Curiologix.FortuneWheel/<LightAnimDuringSpinning>d__44::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLightAnimDuringSpinningU3Ed__44_System_Collections_IEnumerator_get_Current_mC98B99FBE32D1B32D4649E3DDA3F80FF12C8FC07 (U3CLightAnimDuringSpinningU3Ed__44_tBB28DDA976080673F591183F17B0660656F90B09* __this, const RuntimeMethod* method) 
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
// System.Void Curiologix.FortuneWheel/<SymetricLightMovement>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSymetricLightMovementU3Ed__45__ctor_m5611B7B27D02CEC2DD18DADD9E3B8377E21041C8 (U3CSymetricLightMovementU3Ed__45_t7DE666D3ADF85875343B81A02A0E0BC8F867D5D6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Curiologix.FortuneWheel/<SymetricLightMovement>d__45::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSymetricLightMovementU3Ed__45_System_IDisposable_Dispose_m5E020B2099E8471DEEBEB5A6158ABA07138E4C86 (U3CSymetricLightMovementU3Ed__45_t7DE666D3ADF85875343B81A02A0E0BC8F867D5D6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Curiologix.FortuneWheel/<SymetricLightMovement>d__45::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSymetricLightMovementU3Ed__45_MoveNext_m6A149A5EBAA16731C6174C085A327A40CEB58BA5 (U3CSymetricLightMovementU3Ed__45_t7DE666D3ADF85875343B81A02A0E0BC8F867D5D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_009a;
			}
			case 2:
			{
				goto IL_00d9;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (index >= lightObjs.Length)
		int32_t L_3 = __this->___index_2;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_4 = V_1;
		NullCheck(L_4);
		DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* L_5 = L_4->___lightObjs_18;
		NullCheck(L_5);
		if ((((int32_t)L_3) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0062;
		}
	}
	{
		// count = 0;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_6 = V_1;
		NullCheck(L_6);
		L_6->___count_14 = 0;
		// StartCoroutine(PlayAnimationWhenStationary(dots[0], dots[1]));
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_7 = V_1;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_8 = V_1;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_9 = V_1;
		NullCheck(L_9);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_10 = L_9->___dots_19;
		NullCheck(L_10);
		int32_t L_11 = 0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_13 = V_1;
		NullCheck(L_13);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_14 = L_13->___dots_19;
		NullCheck(L_14);
		int32_t L_15 = 1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_8);
		RuntimeObject* L_17;
		L_17 = FortuneWheel_PlayAnimationWhenStationary_m61213616B9030A76D62853CA3CEB8672C1DE0F49(L_8, L_12, L_16, NULL);
		NullCheck(L_7);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_18;
		L_18 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_17, NULL);
		goto IL_00f5;
	}

IL_0062:
	{
		// lightObjs[index].spRend.sprite = dots[1];
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_19 = V_1;
		NullCheck(L_19);
		DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* L_20 = L_19->___lightObjs_18;
		int32_t L_21 = __this->___index_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = L_23->___spRend_4;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_25 = V_1;
		NullCheck(L_25);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_26 = L_25->___dots_19;
		NullCheck(L_26);
		int32_t L_27 = 1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_24);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_24, L_28, NULL);
		// yield return new WaitForSeconds(0.05f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_29 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_29, (0.0500000007f), NULL);
		__this->___U3CU3E2__current_1 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_29);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// lightObjs[index].spRend.sprite = dots[0];
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_30 = V_1;
		NullCheck(L_30);
		DotLightU5BU5D_tD01B4B30B6AA3890298D47ACC22CDF8DD687FF29* L_31 = L_30->___lightObjs_18;
		int32_t L_32 = __this->___index_2;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		DotLight_t7379E48733193E9F4B89859F8A2CB0D29E6A300E* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_35 = L_34->___spRend_4;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_36 = V_1;
		NullCheck(L_36);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_37 = L_36->___dots_19;
		NullCheck(L_37);
		int32_t L_38 = 0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_35);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_35, L_39, NULL);
		// yield return new WaitForSeconds(0.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_40 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_40, (0.0f), NULL);
		__this->___U3CU3E2__current_1 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_40);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00d9:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StartCoroutine(SymetricLightMovement(index + 1));
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_41 = V_1;
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_42 = V_1;
		int32_t L_43 = __this->___index_2;
		NullCheck(L_42);
		RuntimeObject* L_44;
		L_44 = FortuneWheel_SymetricLightMovement_m1CE0E122EEA46D8033410BDFD543DABCFAA218A9(L_42, ((int32_t)il2cpp_codegen_add(L_43, 1)), NULL);
		NullCheck(L_41);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_45;
		L_45 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_41, L_44, NULL);
	}

IL_00f5:
	{
		// }
		return (bool)0;
	}
}
// System.Object Curiologix.FortuneWheel/<SymetricLightMovement>d__45::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSymetricLightMovementU3Ed__45_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6B98F2203985730CD8B448D0912772E9EE3BAF80 (U3CSymetricLightMovementU3Ed__45_t7DE666D3ADF85875343B81A02A0E0BC8F867D5D6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Curiologix.FortuneWheel/<SymetricLightMovement>d__45::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSymetricLightMovementU3Ed__45_System_Collections_IEnumerator_Reset_m21B5D59D319B5034CDB59FF0D94A8AEF2AA59AFC (U3CSymetricLightMovementU3Ed__45_t7DE666D3ADF85875343B81A02A0E0BC8F867D5D6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSymetricLightMovementU3Ed__45_System_Collections_IEnumerator_Reset_m21B5D59D319B5034CDB59FF0D94A8AEF2AA59AFC_RuntimeMethod_var)));
	}
}
// System.Object Curiologix.FortuneWheel/<SymetricLightMovement>d__45::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSymetricLightMovementU3Ed__45_System_Collections_IEnumerator_get_Current_mB7EE4DEDB90EA55C2B0E8749F4A288A4DC774C01 (U3CSymetricLightMovementU3Ed__45_t7DE666D3ADF85875343B81A02A0E0BC8F867D5D6* __this, const RuntimeMethod* method) 
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
// Curiologix.FortuneWheelConfig Curiologix.FortuneWheelConfig::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* FortuneWheelConfig_get_Instance_m5F6173E110482DC4B3FB3FF0FBF1EC94AF61DE97 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisFortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78_m7586653EDE9AC0C806A8CA74B1D2D7F3B88CF69D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// { get { if (_instance == null) _instance = FindObjectOfType<FortuneWheelConfig>(); return _instance; } }
		FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* L_0 = ((FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78_StaticFields*)il2cpp_codegen_static_fields_for(FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78_il2cpp_TypeInfo_var))->____instance_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// { get { if (_instance == null) _instance = FindObjectOfType<FortuneWheelConfig>(); return _instance; } }
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* L_2;
		L_2 = Object_FindObjectOfType_TisFortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78_m7586653EDE9AC0C806A8CA74B1D2D7F3B88CF69D(Object_FindObjectOfType_TisFortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78_m7586653EDE9AC0C806A8CA74B1D2D7F3B88CF69D_RuntimeMethod_var);
		((FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78_StaticFields*)il2cpp_codegen_static_fields_for(FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78_il2cpp_TypeInfo_var))->____instance_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78_StaticFields*)il2cpp_codegen_static_fields_for(FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78_il2cpp_TypeInfo_var))->____instance_11), (void*)L_2);
	}

IL_0017:
	{
		// { get { if (_instance == null) _instance = FindObjectOfType<FortuneWheelConfig>(); return _instance; } }
		FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* L_3 = ((FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78_StaticFields*)il2cpp_codegen_static_fields_for(FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78_il2cpp_TypeInfo_var))->____instance_11;
		return L_3;
	}
}
// System.String Curiologix.FortuneWheelConfig::GetValueFormated(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FortuneWheelConfig_GetValueFormated_m467D6CC58F7FDDC970611F2D4BC030E27A053471 (int32_t ___0_val, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE6D52DC49F4BAA2DD129865CABCCE9455509DF0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return String.Format("{0:n0}", val);
		int32_t L_0 = ___0_val;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralEE6D52DC49F4BAA2DD129865CABCCE9455509DF0, L_2, NULL);
		return L_3;
	}
}
// System.Void Curiologix.FortuneWheelConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FortuneWheelConfig__ctor_m39B0DC3EAB09FCDFBA1D4E205EE39033B292878E (FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int[] prizes = new int[8];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___prizes_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prizes_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Curiologix.SetSortOrder::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetSortOrder_Start_m64FE9B3C8E2597DC7E8D10BA67C03675C022FF82 (SetSortOrder_t00B82E8F6AB6D74E90690210AEC37649E3D72896* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Renderer>().sortingOrder = layerID;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		int32_t L_1 = __this->___layerID_4;
		NullCheck(L_0);
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Curiologix.SetSortOrder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetSortOrder__ctor_m9A787191F10D36CF1BB0A403238266E0ADF60EAB (SetSortOrder_t00B82E8F6AB6D74E90690210AEC37649E3D72896* __this, const RuntimeMethod* method) 
{
	{
		// public int layerID = 8;
		__this->___layerID_4 = 8;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Curiologix.TimerForSpin::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerForSpin_OnEnable_m47D68433E51A34C948597220E5B7F3D22CCE5F54 (TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral568704A0AAB2F25B075E4112CA518179589B1DDA);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// DateTime.TryParse(PlayerPrefs.GetString(TIMER_KEY, DateTime.Now.ToString()), out timeStamp);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A((&V_0), NULL);
		String_t* L_2;
		L_2 = PlayerPrefs_GetString_mE80FED64ACC3134149C8202FDDDE774C29CB0AF2(_stringLiteral568704A0AAB2F25B075E4112CA518179589B1DDA, L_1, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_3 = (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(&__this->___timeStamp_8);
		bool L_4;
		L_4 = DateTime_TryParse_mAB837F166C80EEB47B8CE76E7D6106974E7FA44B(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Curiologix.TimerForSpin::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerForSpin_Update_mA07E3BFB68DE36D96AFA9ED927D26EC0A207D448 (TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F5025CEFE1A803DF878E6CD06EE874B9B130F66);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// TimeSpan t = DateTime.Now - timeStamp;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = __this->___timeStamp_8;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_1, NULL);
		V_0 = L_2;
	}
	try
	{// begin try (depth: 1)
		{
			// remainingTime = nextFreeTurn - t;
			il2cpp_codegen_runtime_class_init_inline(TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE_il2cpp_TypeInfo_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = ((TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE_StaticFields*)il2cpp_codegen_static_fields_for(TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE_il2cpp_TypeInfo_var))->___nextFreeTurn_5;
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4 = V_0;
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5;
			L_5 = TimeSpan_op_Subtraction_m56EC225AACB5E7C91E29A2ECB634B658A63289F7(L_3, L_4, NULL);
			__this->___remainingTime_6 = L_5;
			// timerText.text = string.Format("Next Free Spin: {0:D1}:{1:D2}:{2:D2}",
			//     remainingTime.Hours, remainingTime.Minutes, remainingTime.Seconds);
			Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___timerText_4;
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_7 = (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(&__this->___remainingTime_6);
			int32_t L_8;
			L_8 = TimeSpan_get_Hours_m770B4B777A816E051EFDA317C28DA9A4F39D6CFB(L_7, NULL);
			int32_t L_9 = L_8;
			RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_11 = (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(&__this->___remainingTime_6);
			int32_t L_12;
			L_12 = TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F(L_11, NULL);
			int32_t L_13 = L_12;
			RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_15 = (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(&__this->___remainingTime_6);
			int32_t L_16;
			L_16 = TimeSpan_get_Seconds_m8CA21613DC31BD025C5D30D41BAD0ED50827578B(L_15, NULL);
			int32_t L_17 = L_16;
			RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
			String_t* L_19;
			L_19 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral7F5025CEFE1A803DF878E6CD06EE874B9B130F66, L_10, L_14, L_18, NULL);
			NullCheck(L_6);
			VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_19);
			// if (remainingTime.TotalMinutes <= 0)
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_20 = (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(&__this->___remainingTime_6);
			double L_21;
			L_21 = TimeSpan_get_TotalMinutes_mD139AD7A9055F460D2ACC8B0D2BC4A70009E1115(L_20, NULL);
			if ((!(((double)L_21) <= ((double)(0.0)))))
			{
				goto IL_0083_1;
			}
		}
		{
			// ActivateFreeSpin();
			TimerForSpin_ActivateFreeSpin_m3769E904ACFCADF59C94B1D1E67E1C9980FC3695(__this, NULL);
		}

IL_0083_1:
		{
			// }
			goto IL_0097;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0085;
		}
		throw e;
	}

CATCH_0085:
	{// begin catch(System.Exception)
		// ActivateFreeSpin();
		TimerForSpin_ActivateFreeSpin_m3769E904ACFCADF59C94B1D1E67E1C9980FC3695(__this, NULL);
		// print(e.StackTrace);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_22, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0097;
	}// end catch (depth: 1)

IL_0097:
	{
		// }
		return;
	}
}
// System.Void Curiologix.TimerForSpin::ActivateFreeSpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerForSpin_ActivateFreeSpin_m3769E904ACFCADF59C94B1D1E67E1C9980FC3695 (TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeStamp = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		__this->___timeStamp_8 = L_0;
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Curiologix.TimerForSpin::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerForSpin_OnApplicationPause_mD0B58F11DB925AF5BAF8D6EAA48069EFCCC0CF60 (TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE* __this, bool ___0_pause, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral568704A0AAB2F25B075E4112CA518179589B1DDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pause)
		bool L_0 = ___0_pause;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// PlayerPrefs.SetString(TIMER_KEY, timeStamp.ToString());
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_1 = (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(&__this->___timeStamp_8);
		String_t* L_2;
		L_2 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A(L_1, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral568704A0AAB2F25B075E4112CA518179589B1DDA, L_2, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Curiologix.TimerForSpin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerForSpin__ctor_m26C00F595F136E94E9585D719D2F03A9CCD19B3C (TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Curiologix.TimerForSpin::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerForSpin__cctor_m71AF240E7894DDA02BA661FB0F1BA7FD07635DC9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static TimeSpan nextFreeTurn = new TimeSpan(0, 30, 0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0;
		memset((&L_0), 0, sizeof(L_0));
		TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1((&L_0), 0, ((int32_t)30), 0, /*hidden argument*/NULL);
		((TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE_StaticFields*)il2cpp_codegen_static_fields_for(TimerForSpin_tD41844AC8F362D4759A1C8833583FA0C6C3F12CE_il2cpp_TypeInfo_var))->___nextFreeTurn_5 = L_0;
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
// System.Void Curiologix.WheelPart::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelPart_Start_m7B752E9D5D506355B2B012B0426349F774B65909 (WheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695* __this, const RuntimeMethod* method) 
{
	{
		// myIndex = transform.GetSiblingIndex();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_0, NULL);
		__this->___myIndex_7 = L_1;
		// valueText.text = FortuneWheelConfig.Instance.prizes[myIndex].ToString();
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_2 = __this->___valueText_5;
		FortuneWheelConfig_tBA34E8350A423EA9FCA8E75C42598DD633D48E78* L_3;
		L_3 = FortuneWheelConfig_get_Instance_m5F6173E110482DC4B3FB3FF0FBF1EC94AF61DE97(NULL);
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___prizes_4;
		int32_t L_5 = __this->___myIndex_7;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), NULL);
		NullCheck(L_2);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_2, L_6, NULL);
		// }
		return;
	}
}
// System.Void Curiologix.WheelPart::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelPart_OnTriggerEnter2D_m07CDEE24700D004819F567EC30CD325E27A0995F (WheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_other, const RuntimeMethod* method) 
{
	{
		// FortuneWheel.Instance.SelectedReward = transform.GetSiblingIndex();
		FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* L_0;
		L_0 = FortuneWheel_get_Instance_mB2CA56AB24E455ADA003DB98913453A5B4CFBA62(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_1, NULL);
		NullCheck(L_0);
		FortuneWheel_set_SelectedReward_mB1153434138BCECC712362807CDD9DFEAC83D2C5(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Curiologix.WheelPart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelPart__ctor_mB336466C2B4C04BA78AAAEBC5EE7651E2CD91A1A (WheelPart_tA92B717028A2BB0297D325DF891E464FAA7E2695* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FortuneWheel_get_Coins_mD48FBDD7C14ED75F5CAD0869323A7461B7AC3879_inline (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) 
{
	{
		// get { return _coins; }
		int32_t L_0 = __this->____coins_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FortuneWheel_set_Coins_mBA09FFD4DEF230AEFBD791DFF24B613242B7314F_inline (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// _coins = value;
		int32_t L_0 = ___0_value;
		__this->____coins_13 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FortuneWheel_get_SelectedReward_mC5EE125D23DEAACC2FFCFC8B815DFEB437485468_inline (FortuneWheel_t30F8B429E8B59044A6E75F10C0F0C8531F500C00* __this, const RuntimeMethod* method) 
{
	{
		// return _selectReward;
		int32_t L_0 = __this->____selectReward_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
