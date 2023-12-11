#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection>
struct Action_1_tD40E9B34D63DD268B34D8B9B982AF9BC1E44277F;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.UI.ManipulationHandler/PointerData>
struct Dictionary_2_t83ED73055EE9DDAFE86662BCAF07472F969AB98C;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.Mhy16.LabelPCLMsg>
struct Func_2_tF97AD7AB25E55D162ABE644CC94BD6AEB26884EA;
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,System.Object>
struct Func_2_t89B22632A0C7273D549D5290F817207968F77B7B;
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceRequest>
struct Func_2_t94AC646487397F6CAE12DD4E9754D5EAD663F377;
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceResponse>
struct Func_2_t7F82221457BA5B9A80A4C7223171F78F0D85183F;
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.PosRotMsg>
struct Func_2_tB5E220E48E4286DB039FA7EA9E550FF4CAA148E0;
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.PositionServiceRequest>
struct Func_2_t61BFBFD6FA3985F5FDE6690A62974114FDCDD333;
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.PositionServiceResponse>
struct Func_2_t2E8127890CD2554569E06D23C316FAB42D7D71E4;
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.CustomInterfaces.TransformationMsg>
struct Func_2_t7A6883C6BFCBE3E954623EC86AD6CA5FBB1EAD1B;
// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.UnityColorMsg>
struct Func_2_tF8849497BB86332E0D22F18145E68B6BAB0BD4F7;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct HashSet_1_t40523303B80F0377C3ADE6520782A26F6442AE96;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct IEqualityComparer_1_tC211CB59CA97B343627BB9567F9978F7B0EDE52A;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct List_1_t1D90B30E800845F49A02CFACA99B5A6D011F5196;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct List_1_t66D2309D5E11210602F76A7D31B6B29829A968FC;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>
struct List_1_t85280175D06D422D1719D9A245F824B6C0BB8638;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.TransformConstraint>
struct List_1_t3C8A24B34510CED846F95B9830172B795802B39A;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.BoundingBox/Handle>
struct List_1_tF1AC3E4A91A361AF929578C23A37B725203B3EE1;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/PointerData>
struct List_1_tDCB42132EA3F6FE987625FAA7D33629EC3112775;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.InputSourceType,Microsoft.MixedReality.Toolkit.Utilities.Handedness>
struct Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375;
// System.Tuple`2<System.Int32Enum,System.ByteEnum>
struct Tuple_2_t1E323C87394A4DF45775FDAF9CB8B2FB875F6324;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>
struct UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>
struct UnityEvent_1_t0BD17C20BEE262A9D68E86035A0112D1D2BF9749;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>[]
struct SlotU5BU5D_tA95A5B6D117238C58C72BC1727BB8C3CC97E5039;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.InputSourceType,Microsoft.MixedReality.Toolkit.Utilities.Handedness>[]
struct Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// RosMessageTypes.Sensor.PointFieldMsg[]
struct PointFieldMsgU5BU5D_tE7AD6C8A2A3F91D272B3DE9E31E088B7EAE4D262;
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_t5FD9886331969B34497F7F44BF9E9083A209C6FC;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// Microsoft.MixedReality.Toolkit.UI.BoundingBox/CardinalAxisType[]
struct CardinalAxisTypeU5BU5D_t55B9B444FBC962FA6B5C3106A2A87B21BFB6C5C6;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Microsoft.MixedReality.Toolkit.UI.BoundingBox
struct BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D;
// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest
struct BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl
struct BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547;
// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample
struct BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoxDisplay
struct BoxDisplay_t407A2D972FEF071C1A05044860307AD91ACFDB4A;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoxDisplayConfiguration
struct BoxDisplayConfiguration_t83FA4561B3E0ADDC45AC2516DD78775F5E80849A;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ChangeManipulation
struct ChangeManipulation_tB834F15B688C0C56CDD5C05AE9F996F99692390A;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ClearSpatialObservations
struct ClearSpatialObservations_t18FFAE06576A1113BE55974326CB215F4264E2A1;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Microsoft.MixedReality.Toolkit.UI.ConstraintManager
struct ConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.MixedReality.Toolkit.Experimental.Physics.ElasticsManager
struct ElasticsManager_tD4776E7BC4F43D53B123DD7C21A90AEB07EDDDC3;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// Microsoft.MixedReality.Toolkit.UI.FixedDistanceConstraint
struct FixedDistanceConstraint_t6BE881D13F52454DBE39946FCB2912750B9B8872;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection
struct GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A;
// Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl
struct GridObjectLayoutControl_t83248AA1F700E00F0BA07A4A0706DFED0961DB61;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.HandlesBaseConfiguration
struct HandlesBaseConfiguration_t8126A2B5AFC202250D090BD23035A6A2BE49DEE2;
// RosMessageTypes.Std.HeaderMsg
struct HeaderMsg_t20FAF899863E5D55801979EBD20116585EE94D7F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Microsoft.MixedReality.Toolkit.Input.ICursorModifier
struct ICursorModifier_t4A6ED7D9AD345FCAAF838B721C0C31F0618EA78F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor
struct IMixedRealityCursor_t59775B0000A1264F48A2A2B8E459189BD459B85C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider
struct IMixedRealityEyeGazeProvider_tC69CFCA4497CFED3639A93E88CA9A6D175004416;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler
struct IMixedRealityFocusHandler_t5FCA4CA48911E66F2F7F40219E9A0C654DEFBB52;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider
struct IMixedRealityGazeProvider_t172D38E3FF653E0D7B293184D160FD6DC1A9213A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446;
// Microsoft.MixedReality.Toolkit.SceneSystem.IMixedRealitySceneSystem
struct IMixedRealitySceneSystem_t1DFDB45D5566F11CB42953060A58AD673C758250;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_tF5F2975ACCFD98470DF1D17EC3850A257BF28817;
// Microsoft.MixedReality.Toolkit.Input.IPointerResult
struct IPointerResult_t7778124D479BBC1920888EC74BB907B9B569599F;
// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator
struct IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805;
// Microsoft.MixedReality.Toolkit.Examples.Demos.IProgressIndicatorDemoObject
struct IProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// Microsoft.MixedReality.Toolkit.Utilities.ITransformSmoothingLogic
struct ITransformSmoothingLogic_t90A07CA39C84B00496FCABC9650493F6D3E49FCE;
// Microsoft.MixedReality.Toolkit.Examples.Demos.InputDataExample
struct InputDataExample_t2595EFEFC54C3E25E46AADB78D7D3EB54DA154E4;
// Microsoft.MixedReality.Toolkit.Examples.Demos.InputDataExampleGizmo
struct InputDataExampleGizmo_tD48249BAD6F7C31601CC90A79D8CA8DD9B2ED9FB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// RosMessageTypes.Mhy16.LabelPCLMsg
struct LabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.Links
struct Links_t9D539D432A8755602EA7A3C724196BCA1A72FD89;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.LinksConfiguration
struct LinksConfiguration_tED831CC1625B1AF6E76810B5B5AF40018342DBB9;
// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent
struct ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F;
// Microsoft.MixedReality.Toolkit.UI.ManipulationEventData
struct ManipulationEventData_t3669F25A1E18443CE54C89DA7F6B5C641FD80F89;
// Microsoft.MixedReality.Toolkit.UI.ManipulationHandler
struct ManipulationHandler_tFA015F7923D30D62CDE4B41B9DE243F7606DDCD2;
// Microsoft.MixedReality.Toolkit.Physics.ManipulationMoveLogic
struct ManipulationMoveLogic_t251D54768E38006A42A6FBC6827C8DB331CB3E5D;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message
struct Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF;
// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer
struct MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF;
// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer
struct MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint
struct MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator
struct ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38;
// RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceRequest
struct ObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26;
// RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceResponse
struct ObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.PerAxisHandlesConfiguration
struct PerAxisHandlesConfiguration_t2022EEF3D15578CEB7AE3098E6F219C0B8797B6A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Microsoft.MixedReality.Toolkit.UI.PinchSlider
struct PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01;
// RosMessageTypes.Sensor.PointCloud2Msg
struct PointCloud2Msg_tE3DF4D4C7466D88C9936CF9A5DA33F09D7CA204E;
// RosMessageTypes.Geometry.PointMsg
struct PointMsg_t801D899DB19DC5F0064958BB42C5C2CC80ABEF57;
// RosMessageTypes.UnityRoboticsDemo.PosRotMsg
struct PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6;
// RosMessageTypes.Geometry.PoseMsg
struct PoseMsg_t68AFC5A79FA5F4DFAA007467CBD85D1EFD6A53C1;
// RosMessageTypes.UnityRoboticsDemo.PositionServiceRequest
struct PositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249;
// RosMessageTypes.UnityRoboticsDemo.PositionServiceResponse
struct PositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F;
// Microsoft.MixedReality.Toolkit.Input.PrimaryPointerChangedHandler
struct PrimaryPointerChangedHandler_t1C9E0CDB5009F770A464C9126C67A745E2D544E8;
// Microsoft.MixedReality.Toolkit.Examples.Demos.PrimaryPointerHandlerExample
struct PrimaryPointerHandlerExample_tB2A0E6E868757817A2F02AF60A7E532A5027414A;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo
struct ProgressIndicatorDemo_t6A221029ABCFDCE0E67949979A34B87AE2545D01;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation
struct ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod
struct ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad
struct ProgressIndicatorDemoSceneLoad_tF22EAC3534317BF3822EC9E7B732348724FFFD00;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ProximityEffect
struct ProximityEffect_t33B8E18EA8BFDBE4C6EEC2E895E20735788E58A5;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ProximityEffectConfiguration
struct ProximityEffectConfiguration_t321A936DB8C581AF4C8B1369E9AC65A9A098F25A;
// RosMessageTypes.Geometry.QuaternionMsg
struct QuaternionMsg_t38C03696A966123480CFAD2D607E7F0D09B773F1;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds
struct ReturnToBounds_t5F145A1F417B58F9A50781059C4409D5746FA993;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Microsoft.MixedReality.Toolkit.UI.RotationAxisConstraint
struct RotationAxisConstraint_t7E98FA80878A0B5EC4BB90753875AD7A22ADD366;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.RotationHandles
struct RotationHandles_t113F51B783A0E55F52EDBF610786A14B70EEEE85;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.RotationHandlesConfiguration
struct RotationHandlesConfiguration_t01D98D5153FF07876782F838682A59A9BD381A2C;
// Microsoft.MixedReality.Toolkit.Examples.Demos.Rotator
struct Rotator_tD661E3A479EEDC39492BA31D09D81C15D6CBA1AA;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ScaleHandles
struct ScaleHandles_t59BD37D5673495661C53B40FAD66ABCE53403EDB;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ScaleHandlesConfiguration
struct ScaleHandlesConfiguration_t79002721D09E9BAE57FCF4ACCB206EB0C59A57A8;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ShowPlaneFindingInstructions
struct ShowPlaneFindingInstructions_tA0D7A65D27297E8FAD34556BAB27963BF2458E4F;
// Microsoft.MixedReality.Toolkit.UI.SliderEventData
struct SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE;
// Microsoft.MixedReality.Toolkit.Examples.Demos.SliderLunarLander
struct SliderLunarLander_t8581E51E62C5EE44A746ED6BDDE123AFFCD9364E;
// Microsoft.MixedReality.Toolkit.Examples.Demos.SpawnOnPointerEvent
struct SpawnOnPointerEvent_t4192231F2213C31C5FA27A9AAC7D99C8E8F96A0A;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_t4424832821FEC4163B9CFCD3A9F457DF930A95BD;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// System.Threading.TimerCallback
struct TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// RosMessageTypes.CustomInterfaces.TransformationMsg
struct TransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.TranslationHandles
struct TranslationHandles_t8ADABCFC4B7D3720510ABA3E7C7FE376D12F66E3;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.TranslationHandlesConfiguration
struct TranslationHandlesConfiguration_t8CF965B8A2FBEF36D9FE5F588721DCC4B62C897F;
// RosMessageTypes.Geometry.TwistMsg
struct TwistMsg_tCB222F66966F92E11D7B0AEBFF7312A02195D103;
// Microsoft.MixedReality.Toolkit.Physics.TwoHandRotateLogic
struct TwoHandRotateLogic_tEF89AA0BEF7C232BB4FBEA6D76F357408939950B;
// Microsoft.MixedReality.Toolkit.Physics.TwoHandScaleLogic
struct TwoHandScaleLogic_t167083A146EE5C304A01FC77818E0CE7DCBF0828;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// RosMessageTypes.UnityRoboticsDemo.UnityColorMsg
struct UnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// RosMessageTypes.Geometry.Vector3Msg
struct Vector3Msg_t0D3619E7E7D1941CBED32B5D8D6E4F42D2F8A6CC;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12
struct U3CSequenceU3Ed__12_tF55D339C4A243C24CBE65F823E7A04CE6E203933;
// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13
struct U3CWaitForSpeechCommandU3Ed__13_tA3478029843B23D9C8A63D157FFB5BB99CF37ED5;
// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12
struct U3CSequenceU3Ed__12_tC2B6193C1B40DBAC26777FF6B1D1F96218C979B6;
// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13
struct U3CWaitForSpeechCommandU3Ed__13_tBCE429335B21A71E6105155218A71C1E2926AA7E;
// Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7
struct U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.HandlesBaseConfiguration/HandlesChangedEvent
struct HandlesChangedEvent_tCA6F4AEA4A871B5EC277EFA89F8632C5A4C8D465;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.LinksConfiguration/WireFrameEvent
struct WireFrameEvent_t3639DB4FD6035F34704D4F20A1DC8914B2DEFDB0;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AxisType_tB348B2B7E813A5E50E48FF0B55E0751351C67FA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceInputType_t99CD658FF01DFACCDBE7C08908F919F16798F689_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2E8127890CD2554569E06D23C316FAB42D7D71E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t61BFBFD6FA3985F5FDE6690A62974114FDCDD333_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7A6883C6BFCBE3E954623EC86AD6CA5FBB1EAD1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7F82221457BA5B9A80A4C7223171F78F0D85183F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t94AC646487397F6CAE12DD4E9754D5EAD663F377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB5E220E48E4286DB039FA7EA9E550FF4CAA148E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF8849497BB86332E0D22F18145E68B6BAB0BD4F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF97AD7AB25E55D162ABE644CC94BD6AEB26884EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GGVPointer_t5D017CA59C5DE1F7E8482B81F2FF262D6AB9CF43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handedness_t8F3D346D04DED9C8F19FDD0EAB3DFFF385E485FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityEventSource_t9E9DFD08DEE578702833FF502590A1E0476E59E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityFocusProvider_t2766EE713C9E441F03CA32A27287C1EF1713AE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGazeProvider_t172D38E3FF653E0D7B293184D160FD6DC1A9213A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySceneSystem_t1DFDB45D5566F11CB42953060A58AD673C758250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpatialAwarenessSystem_tF5F2975ACCFD98470DF1D17EC3850A257BF28817_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerResult_t7778124D479BBC1920888EC74BB907B9B569599F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSourceType_t00ECE49D73629782019DE8F9BB0D4824459B9CA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayoutAnchor_t696AB41E7F191C9AD7EA9673B4A682FB36CFBC5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointCloud2Msg_tE3DF4D4C7466D88C9936CF9A5DA33F09D7CA204E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoseMsg_t68AFC5A79FA5F4DFAA007467CBD85D1EFD6A53C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrimaryPointerChangedHandler_t1C9E0CDB5009F770A464C9126C67A745E2D544E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TwistMsg_tCB222F66966F92E11D7B0AEBFF7312A02195D103_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSequenceU3Ed__12_tC2B6193C1B40DBAC26777FF6B1D1F96218C979B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSequenceU3Ed__12_tF55D339C4A243C24CBE65F823E7A04CE6E203933_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForSpeechCommandU3Ed__13_tA3478029843B23D9C8A63D157FFB5BB99CF37ED5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForSpeechCommandU3Ed__13_tBCE429335B21A71E6105155218A71C1E2926AA7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral005CB39EC7F0BE39424F5635B8650CECFFC5EC66;
IL2CPP_EXTERN_C String_t* _stringLiteral00EBC276BB87ACAA9AA6A47BF580281CE291D36B;
IL2CPP_EXTERN_C String_t* _stringLiteral04932242F5F6C26C51C9FF90ED8D542D2C1A47DE;
IL2CPP_EXTERN_C String_t* _stringLiteral0893B6EE7D7D92EEC5DF4B8BD819415A9048260D;
IL2CPP_EXTERN_C String_t* _stringLiteral0DC280959F421389AF1BE457F48E732532CDCD8D;
IL2CPP_EXTERN_C String_t* _stringLiteral0E8505A6E46433EBEAAE027288C9DE5DC83B1CB3;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral1C4AA015CF736BA57D6243943A6C9DA33C794A91;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral25F0B5C5097297B2DE6C0F2A70A5DDE0BF7B99ED;
IL2CPP_EXTERN_C String_t* _stringLiteral27D6713E74DC7CBA240CD7666DD30B8FB477E846;
IL2CPP_EXTERN_C String_t* _stringLiteral285AE8367EF72F152792EF14AAAC6EF625130994;
IL2CPP_EXTERN_C String_t* _stringLiteral2977EACE2BE13FBCAE160266FAB922F500F7F401;
IL2CPP_EXTERN_C String_t* _stringLiteral2C0FB268FEF0DAA245BD3DD0D331FA3446F8F19F;
IL2CPP_EXTERN_C String_t* _stringLiteral2D88250DE6A1034352C674B4F9BC3E5B3913A89D;
IL2CPP_EXTERN_C String_t* _stringLiteral2E0CC2DE428319C2646E0E295A66C35A732ED352;
IL2CPP_EXTERN_C String_t* _stringLiteral31E8E4ACB2EDC39B158FBA91185DE1333306F668;
IL2CPP_EXTERN_C String_t* _stringLiteral330B191DB5AF908CB6A3230530DCD6E9A21D2C4A;
IL2CPP_EXTERN_C String_t* _stringLiteral3655EFA58CD918A6CF06BBB9D43BFC9D3AAE2404;
IL2CPP_EXTERN_C String_t* _stringLiteral36E8F5BEBE77E9972EA1D70C476B8ED00E93A34F;
IL2CPP_EXTERN_C String_t* _stringLiteral37427B42003292E98655CF4FA86BD07C6A8483CF;
IL2CPP_EXTERN_C String_t* _stringLiteral382E1794B036842D5250A832C183FF81C2D1DF65;
IL2CPP_EXTERN_C String_t* _stringLiteral3C82A7BDE663D3D597B2365355D908CC632EF79A;
IL2CPP_EXTERN_C String_t* _stringLiteral3ED8C8ED37C8A0119FC85220A1B4073DACA3A53A;
IL2CPP_EXTERN_C String_t* _stringLiteral3EF79C9C03F34A466743105CBD82EFB038AE1047;
IL2CPP_EXTERN_C String_t* _stringLiteral3F24BE735A949034EAB8F00D68AB3579AD172ADD;
IL2CPP_EXTERN_C String_t* _stringLiteral40442EDA4EDA74622DB1FC827383DFA39BAE341B;
IL2CPP_EXTERN_C String_t* _stringLiteral429D8F132170CDADF68E7EFEA1640AD07E6A5409;
IL2CPP_EXTERN_C String_t* _stringLiteral4412CC68669063AAF2F05CB4323834EE77A9ECCC;
IL2CPP_EXTERN_C String_t* _stringLiteral4485C19330DA9833385DF7312A1E6A09DB34F3C3;
IL2CPP_EXTERN_C String_t* _stringLiteral460E8A82291105A4D35E22F4EC556FF88B71EBC8;
IL2CPP_EXTERN_C String_t* _stringLiteral4637F13D6B008DB2C4AB991C038067F43B5163B1;
IL2CPP_EXTERN_C String_t* _stringLiteral497963E2D53B0D05EEB52F563374952F51400304;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral50F85C698D1B54E00789227F1306943F4EA17FC6;
IL2CPP_EXTERN_C String_t* _stringLiteral6596B125B0B472CE30C09148B49799ECB7AD3B6B;
IL2CPP_EXTERN_C String_t* _stringLiteral670F8C2828AA4722DE617A1B888E4515BF0C2485;
IL2CPP_EXTERN_C String_t* _stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96;
IL2CPP_EXTERN_C String_t* _stringLiteral6DAC536A5C7343DCD386CDDB310859C4AA0B965A;
IL2CPP_EXTERN_C String_t* _stringLiteral6E9FA4C518A7965A39FD3FCA4F65EE675F775EDF;
IL2CPP_EXTERN_C String_t* _stringLiteral722BE640E7BBFC94C531C4DA1609983A47944102;
IL2CPP_EXTERN_C String_t* _stringLiteral74A60E912035CE11B30BC9F5502C3E8F60A11822;
IL2CPP_EXTERN_C String_t* _stringLiteral7B3A9C268EC2A1B1C035619C6A0C1FCF7C78C99B;
IL2CPP_EXTERN_C String_t* _stringLiteral7B8E54C3676191FC4187DC8D5C25CC3C0E79CA72;
IL2CPP_EXTERN_C String_t* _stringLiteral7C5D6EBEDFE936648874854E5F6DF342D594104D;
IL2CPP_EXTERN_C String_t* _stringLiteral813FC0BDD0E7968754809DDBB6266A6258CBF23A;
IL2CPP_EXTERN_C String_t* _stringLiteral816442123FBC6285ACBB7D610A9E968403EFDE1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88D4CA1F18255210827BD4EA4392882ADB6F8CC2;
IL2CPP_EXTERN_C String_t* _stringLiteral8ECEB08F20C743000BBD77ABDBF067AD3D22BCEE;
IL2CPP_EXTERN_C String_t* _stringLiteral8ED20F7629F7FFBE9EF937A0DFB78528FB8C0396;
IL2CPP_EXTERN_C String_t* _stringLiteral8F55D41D0084400D6F824A11DDEF46D5A9718E6B;
IL2CPP_EXTERN_C String_t* _stringLiteral91E91D5EB2D73DE0D2500DAE0645428EC6B06F37;
IL2CPP_EXTERN_C String_t* _stringLiteral95C9503D00DEED334C8EEB04EF28C7C7354A5110;
IL2CPP_EXTERN_C String_t* _stringLiteral9658728095AC3CB3BBE60D83A646DD7268D0B7AF;
IL2CPP_EXTERN_C String_t* _stringLiteral9A7F9DE0C8F3D56FCC7CD55AC4B41D661174ABE2;
IL2CPP_EXTERN_C String_t* _stringLiteral9B6F45F608528E2F182DFB9A4714097FD6DA2E17;
IL2CPP_EXTERN_C String_t* _stringLiteral9B844E061FC69602E303E7B518701EAA7843F4A7;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5676CB0976CA579589039A064A0D04BACF68C2;
IL2CPP_EXTERN_C String_t* _stringLiteral9EE5813E8D50AA7BBFC85EDDB9E2D91B543950F0;
IL2CPP_EXTERN_C String_t* _stringLiteralA11E997348DA3BB6962BA7ADEF0E58AC431B316B;
IL2CPP_EXTERN_C String_t* _stringLiteralA43AD4715FB1E6D2DC4F3DC8B461D5ED25FD2D45;
IL2CPP_EXTERN_C String_t* _stringLiteralA8DA8DFE0C83E40728898B8B9C2AE232B4E63F62;
IL2CPP_EXTERN_C String_t* _stringLiteralABB6CA9F15FA4D0C88D5EF00F5CB7C8FFFE24E87;
IL2CPP_EXTERN_C String_t* _stringLiteralABD4164FE9CCC6A2A0367A5E5A99E916644C5621;
IL2CPP_EXTERN_C String_t* _stringLiteralAE235E1B474A5B997E28DDFFDAF0DB7D6961C519;
IL2CPP_EXTERN_C String_t* _stringLiteralB02F9D12DFE8125F749C81D01E2575414FA3F771;
IL2CPP_EXTERN_C String_t* _stringLiteralB106B257720A10C98419096B5FAEEB08EA673997;
IL2CPP_EXTERN_C String_t* _stringLiteralB50148F64C80D84E61F7A56AF2EF142058BE341F;
IL2CPP_EXTERN_C String_t* _stringLiteralB766A7FA875F83A29661225962B6B6C61E02B958;
IL2CPP_EXTERN_C String_t* _stringLiteralB8550D4379B5F21DD5B0080AA4E715E8E76C17CB;
IL2CPP_EXTERN_C String_t* _stringLiteralB966BB1BAE106200D3D621030CC08428171B19D2;
IL2CPP_EXTERN_C String_t* _stringLiteralC3ECABA049867CD1120F4580E3F57FA8F7562A71;
IL2CPP_EXTERN_C String_t* _stringLiteralC4DF149E9A176856E50C9483880FF56D5C1B0CBA;
IL2CPP_EXTERN_C String_t* _stringLiteralC584F9BAF4296D3089659932F0F3BFAC411C645D;
IL2CPP_EXTERN_C String_t* _stringLiteralC74B0680110FAF1A171E3BA0F738CB4754DA7389;
IL2CPP_EXTERN_C String_t* _stringLiteralC756321A83B6CBC3121A56AAE598C904D69BCC73;
IL2CPP_EXTERN_C String_t* _stringLiteralC808879522A851D8C9F0BC3FE1DC9060CD8A8112;
IL2CPP_EXTERN_C String_t* _stringLiteralCD29CFE22E70049887B0491EE4860B0A772EF8CE;
IL2CPP_EXTERN_C String_t* _stringLiteralCE765BBCE62EF135C02429EC2775052977CEF5E5;
IL2CPP_EXTERN_C String_t* _stringLiteralCFC1C2D158A032F8FC48C299D5FDB28194E34C6A;
IL2CPP_EXTERN_C String_t* _stringLiteralD0F771D59E9ED5FD093C2B91752841DE48F1BAE6;
IL2CPP_EXTERN_C String_t* _stringLiteralD1FADB2826DB5DDD6DFE9006AF00F6985C838578;
IL2CPP_EXTERN_C String_t* _stringLiteralD5E675CB6B8CA07F6F4FADCD6F2BD22BA64F228A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA4F59CE87B7FAC2A32C219EF9C2F065CA108A5A;
IL2CPP_EXTERN_C String_t* _stringLiteralDBCD1CFD381A4E8E42CF3F7335DFE1EA17C66FF1;
IL2CPP_EXTERN_C String_t* _stringLiteralDF561D79ED0FBD252262C73FAE9DA7F1CF37835F;
IL2CPP_EXTERN_C String_t* _stringLiteralE0271EDE6F34DC22850C498710F7C27599AD1CA3;
IL2CPP_EXTERN_C String_t* _stringLiteralEAA81F33739EF67BB3935C5FF5FB2D60B385409F;
IL2CPP_EXTERN_C String_t* _stringLiteralEACDDE496DA3D7742A4E535B14817E30E4EB64A4;
IL2CPP_EXTERN_C String_t* _stringLiteralEC5ACC70BCA9F9D8A6DB719CA4EF5EAD902A7961;
IL2CPP_EXTERN_C String_t* _stringLiteralF1F79343D4AE1A442B1743989D106E09F1B10180;
IL2CPP_EXTERN_C String_t* _stringLiteralF8532EA1C3899862E1758B8F4C34CDA1DCD1004D;
IL2CPP_EXTERN_C String_t* _stringLiteralFBB063A08B8B8BDBEB543AC2D5F928ACA7DC1315;
IL2CPP_EXTERN_C String_t* _stringLiteralFEAD704F1DD1A17350EF8AEF9D41A292BDA9AD34;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE_mC08BDBFB89C539E7DEB910A6AA058F19FF6DFCB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE_m85A63B32C9F662E3DFFB7C52C6829166F74CF2F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m0C3B36CE8FC327CBA8AB41A8A906789371CA131A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m440D5CA2B7C09487CAF47729BD1D4F2FA0B62142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_m83516A031D181675B8B1A3723A67E5D34FDC32C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m677C7463D68320CE2B243236CDD169ECC6C4CBD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m7D521DCD37A0807B9F0F509D9008390D25EE2042_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_mD4B35CE9ADF86AD6556E99A5159113134AD0AFA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m075D11E370377454E0561D964686B54D9C31DB2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_mE46C5542344553A9B10B135CFC9C86DBB40EE8F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_mD0F890FF69CEFBF7311775B3389891F726CE372C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoundingBoxExampleTest_U3CSequenceU3Eb__12_0_mFF939D0D67AA1DF5F1F85FE83E45D4FCDF6278C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoundingBoxExampleTest_U3CSequenceU3Eb__12_1_m0575870681F4EA0D248901AB93FDD48BB8F56280_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoundsControlRuntimeExample_U3CSequenceU3Eb__12_0_m56CBCF1CCB44BE9BF323DBE554BE7741A60EFA89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BoundsControlRuntimeExample_U3CSequenceU3Eb__12_1_mEEDE0BEB4314834E65950313E42394FE4FE55402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m71CAA2062645DBD932D8214BDEDB18585DE55A54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8B090EFB59282696217E0C4BF4772DF044BEBAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m82FE574FEF92EE2D1465259DDBAB99634137B46F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D_mEA8B8AEA4CD2F47BF50E5147B6C2DEF2B2D4DDFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547_m9533CFEE6F12C8F67D2A0440BE89C7EBB61BCE4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16_mFE64421C1E4C885473A4025C4220BED207C48687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisGridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A_m29F9D2888AF518C05291912715B3AB212F6AE74C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38_m7987B1E4C0405213AFBED42D2DEE4C11B040AE41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16_m8C52CCCAB0ED8CCB6BBA1B3CED54970D65A5DBB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_mAD8800425B8EFE6CF373EB80E9FA62FCEAAF2111_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisManipulationHandler_tFA015F7923D30D62CDE4B41B9DE243F7606DDCD2_m1BEF468BF3902F3889885F619107BB8B37C0F6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38_m09C4ED8F5CEB0A2E8253BE11A2756FFF2B9C3972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_mFD270DB64CA6CFBBEC0204BA3883F03DEB325CCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySpeechHandler_tF57481E35DD5D8C0EC2D82DA0E72CDE0058C12B5_m02DD2BB27CFB3B352F1D771B1EB3DDF1A7EB9547_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySpeechHandler_tF57481E35DD5D8C0EC2D82DA0E72CDE0058C12B5_m00DB1183F954B0E4F7D51E2D771A39E88F2C2661_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LabelPCLMsg_Deserialize_m3CF14307D3FA6BF43AC24B2EB2B4474662ACB884_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageRegistry_Register_TisLabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F_mFE03A397B21794990D4C86FAF3B3175E79025914_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageRegistry_Register_TisObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26_m3A6F9C134856325A359D07FA10D6CA95D1D0EDDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageRegistry_Register_TisObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A_m0870CBAF6FD7B41472F8B5B8F3055351BC1D1147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageRegistry_Register_TisPosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6_m889C983EA2371072FA79C88DA8D44ED334FF7DF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageRegistry_Register_TisPositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249_mCE0A7CB460C6CAE778B9BDD77D576182575C0CAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageRegistry_Register_TisPositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F_mC574A5D9F05283E94D13D1929097ED16497FF523_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageRegistry_Register_TisTransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A_m1AD7DC1080A3B6C41AC4E33E724ADD906BCF6213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageRegistry_Register_TisUnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C_m0FB666A15FA6F9FC69DC3A43C7A2369B54D84E12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPoseServiceRequest_Deserialize_mFCC7D71797FDB5E381B0DAB01BF849FEF1B29C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPoseServiceResponse_Deserialize_mEF44FBA0DB6596E35AC3B7552F3D1C4C52095A0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PosRotMsg_Deserialize_m9A70A37AE6697C991201D947CE36D6453E33AE46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PositionServiceRequest_Deserialize_m284EBE53A162C6F4BEF6DE03A02F2785ECC6A966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PositionServiceResponse_Deserialize_m6C97780E15E56BDF07478F585F1446463D05FBA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimaryPointerHandlerExample_OnPrimaryPointerChanged_m056DBFB929005ED8B7AB9276FE9D02B0048A87E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformationMsg_Deserialize_m24D7B51EC7A581AC367A9C61C9F171D1E91FC6B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2__ctor_m91C82BB401A8205ACFBDEFB4918ECC60687FF73D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_m3A1DED7BC6DA1FC4B308F9760732B449AACB8FA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_m99004F229E18A73A3BF435B3645EEA2EF787C400_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSequenceU3Ed__12_System_Collections_IEnumerator_Reset_m12DEA3D25C8E2D2B8DE6CFDCE72FA72030F3DD15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSequenceU3Ed__12_System_Collections_IEnumerator_Reset_mA28B956659A382EA5DF3C7E8EC322CB548EB49FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTestAnchorsU3Ed__7_System_Collections_IEnumerator_Reset_m2B037080877E9B04CEE6A653552909A5E84AD6F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForSpeechCommandU3Ed__13_System_Collections_IEnumerator_Reset_m776239BEEA992B4EC07BF4820B48DF308E9BD601_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForSpeechCommandU3Ed__13_System_Collections_IEnumerator_Reset_mACA03EFCCE267FDE046277176D400C200D8E97C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityColorMsg_Deserialize_m37765ED72A687E7202BBA4F034CD2ED17195D4A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mCE472D576E4B9591F706A2D7A00FC0BA3C985BBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_TryGetMonoBehaviour_TisIMixedRealityCursor_t59775B0000A1264F48A2A2B8E459189BD459B85C_m6E768B891560F4761F9975129DD0631C6386FE1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_TryGetMonoBehaviour_TisIMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_mC4D9845F8A7F0CE4B731048671596E9BEF464E8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* LayoutAnchor_t696AB41E7F191C9AD7EA9673B4A682FB36CFBC5D_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;

struct Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD;
struct MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tA95A5B6D117238C58C72BC1727BB8C3CC97E5039* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.InputSourceType,Microsoft.MixedReality.Toolkit.Utilities.Handedness>
struct Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	int32_t ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	uint8_t ___m_Item2_1;
};

// System.Tuple`2<System.Int32Enum,System.ByteEnum>
struct Tuple_2_t1E323C87394A4DF45775FDAF9CB8B2FB875F6324  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	int32_t ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	uint8_t ___m_Item2_1;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B  : public RuntimeObject
{
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_kernelEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E* ____registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_state
	int32_t ____state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_threadIDExecutingCallbacks
	int32_t ____threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::_disposed
	bool ____disposed_11;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_executingCallback
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ____executingCallback_12;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_timer
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ____timer_13;
};

struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_StaticFields
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_canceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_canceledSource_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_neverCanceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_neverCanceledSource_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* ___s_timerCallback_14;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.Robotics.ROSTCPConnector.MessageGeneration.Message
struct Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF  : public RuntimeObject
{
};

// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer
struct MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF  : public RuntimeObject
{
	// System.Byte[] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_0;
	// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::offset
	int32_t ___offset_1;
	// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::alignmentCorrection
	int32_t ___alignmentCorrection_2;
};

// Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer
struct MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7  : public RuntimeObject
{
	// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::m_AlignmentOffset
	int32_t ___m_AlignmentOffset_3;
	// System.Int32 Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::m_LengthCorrection
	int32_t ___m_LengthCorrection_4;
	// System.Collections.Generic.List`1<System.Byte[]> Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::m_ListOfSerializations
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___m_ListOfSerializations_5;
};

struct MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7_StaticFields
{
	// System.Byte[] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::k_Ros2Header
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_Ros2Header_0;
	// System.Byte[] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::k_NullByte
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k_NullByte_1;
	// System.Byte[][] Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::k_PaddingBytes
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___k_PaddingBytes_2;
};

// Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken
struct SceneActivationToken_t4BBC8B892BFA0B21E627C68E2E38B8D2CF38F3A2  : public RuntimeObject
{
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken::<ReadyToProceed>k__BackingField
	bool ___U3CReadyToProceedU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken::<AllowSceneActivation>k__BackingField
	bool ___U3CAllowSceneActivationU3Ek__BackingField_1;
};

// Microsoft.MixedReality.Toolkit.UI.SliderEventData
struct SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE  : public RuntimeObject
{
	// System.Single Microsoft.MixedReality.Toolkit.UI.SliderEventData::<OldValue>k__BackingField
	float ___U3COldValueU3Ek__BackingField_0;
	// System.Single Microsoft.MixedReality.Toolkit.UI.SliderEventData::<NewValue>k__BackingField
	float ___U3CNewValueU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.UI.SliderEventData::<Slider>k__BackingField
	PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* ___U3CSliderU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.UI.SliderEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_3;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
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

// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12
struct U3CSequenceU3Ed__12_tF55D339C4A243C24CBE65F823E7A04CE6E203933  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<>4__this
	BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* ___U3CU3E4__this_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<cube>5__2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CcubeU3E5__2_3;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<om>5__3
	ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* ___U3ComU3E5__3_4;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<newObject>5__4
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CnewObjectU3E5__4_5;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<bc>5__5
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___U3CbcU3E5__5_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::<lastParent>5__6
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3ClastParentU3E5__6_7;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13
struct U3CWaitForSpeechCommandU3Ed__13_tA3478029843B23D9C8A63D157FFB5BB99CF37ED5  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13::<>4__this
	BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* ___U3CU3E4__this_2;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12
struct U3CSequenceU3Ed__12_tC2B6193C1B40DBAC26777FF6B1D1F96218C979B6  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<>4__this
	BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* ___U3CU3E4__this_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<cube>5__2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CcubeU3E5__2_3;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<om>5__3
	ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* ___U3ComU3E5__3_4;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<newObject>5__4
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CnewObjectU3E5__4_5;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<bc>5__5
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___U3CbcU3E5__5_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::<lastParent>5__6
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3ClastParentU3E5__6_7;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13
struct U3CWaitForSpeechCommandU3Ed__13_tBCE429335B21A71E6105155218A71C1E2926AA7E  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13::<>4__this
	BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* ___U3CU3E4__this_2;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7
struct U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::<>4__this
	GridObjectLayoutControl_t83248AA1F700E00F0BA07A4A0706DFED0961DB61* ___U3CU3E4__this_2;
	// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::<gridCollection>5__2
	GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* ___U3CgridCollectionU3E5__2_3;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::<path>5__3
	String_t* ___U3CpathU3E5__3_4;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::<stringBuilder>5__4
	StringBuilder_t* ___U3CstringBuilderU3E5__4_5;
	// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::<>7__wrap4
	RuntimeObject* ___U3CU3E7__wrap4_6;
};

// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>
struct UnityEvent_1_t0BD17C20BEE262A9D68E86035A0112D1D2BF9749  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// RosMessageTypes.Mhy16.LabelPCLMsg
struct LabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F  : public Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF
{
	// System.String RosMessageTypes.Mhy16.LabelPCLMsg::name
	String_t* ___name_1;
	// RosMessageTypes.Sensor.PointCloud2Msg RosMessageTypes.Mhy16.LabelPCLMsg::point_cloud
	PointCloud2Msg_tE3DF4D4C7466D88C9936CF9A5DA33F09D7CA204E* ___point_cloud_2;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 
{
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;
};

struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___U3CNoneU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceRequest
struct ObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26  : public Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF
{
	// System.String RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceRequest::object_name
	String_t* ___object_name_1;
};

// RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceResponse
struct ObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A  : public Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF
{
	// RosMessageTypes.Geometry.PoseMsg RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceResponse::object_pose
	PoseMsg_t68AFC5A79FA5F4DFAA007467CBD85D1EFD6A53C1* ___object_pose_1;
};

// RosMessageTypes.Sensor.PointCloud2Msg
struct PointCloud2Msg_tE3DF4D4C7466D88C9936CF9A5DA33F09D7CA204E  : public Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF
{
	// RosMessageTypes.Std.HeaderMsg RosMessageTypes.Sensor.PointCloud2Msg::header
	HeaderMsg_t20FAF899863E5D55801979EBD20116585EE94D7F* ___header_1;
	// System.UInt32 RosMessageTypes.Sensor.PointCloud2Msg::height
	uint32_t ___height_2;
	// System.UInt32 RosMessageTypes.Sensor.PointCloud2Msg::width
	uint32_t ___width_3;
	// RosMessageTypes.Sensor.PointFieldMsg[] RosMessageTypes.Sensor.PointCloud2Msg::fields
	PointFieldMsgU5BU5D_tE7AD6C8A2A3F91D272B3DE9E31E088B7EAE4D262* ___fields_4;
	// System.Boolean RosMessageTypes.Sensor.PointCloud2Msg::is_bigendian
	bool ___is_bigendian_5;
	// System.UInt32 RosMessageTypes.Sensor.PointCloud2Msg::point_step
	uint32_t ___point_step_6;
	// System.UInt32 RosMessageTypes.Sensor.PointCloud2Msg::row_step
	uint32_t ___row_step_7;
	// System.Byte[] RosMessageTypes.Sensor.PointCloud2Msg::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_8;
	// System.Boolean RosMessageTypes.Sensor.PointCloud2Msg::is_dense
	bool ___is_dense_9;
};

// RosMessageTypes.UnityRoboticsDemo.PosRotMsg
struct PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6  : public Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF
{
	// System.Single RosMessageTypes.UnityRoboticsDemo.PosRotMsg::pos_x
	float ___pos_x_1;
	// System.Single RosMessageTypes.UnityRoboticsDemo.PosRotMsg::pos_y
	float ___pos_y_2;
	// System.Single RosMessageTypes.UnityRoboticsDemo.PosRotMsg::pos_z
	float ___pos_z_3;
	// System.Single RosMessageTypes.UnityRoboticsDemo.PosRotMsg::rot_x
	float ___rot_x_4;
	// System.Single RosMessageTypes.UnityRoboticsDemo.PosRotMsg::rot_y
	float ___rot_y_5;
	// System.Single RosMessageTypes.UnityRoboticsDemo.PosRotMsg::rot_z
	float ___rot_z_6;
	// System.Single RosMessageTypes.UnityRoboticsDemo.PosRotMsg::rot_w
	float ___rot_w_7;
};

// RosMessageTypes.Geometry.PoseMsg
struct PoseMsg_t68AFC5A79FA5F4DFAA007467CBD85D1EFD6A53C1  : public Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF
{
	// RosMessageTypes.Geometry.PointMsg RosMessageTypes.Geometry.PoseMsg::position
	PointMsg_t801D899DB19DC5F0064958BB42C5C2CC80ABEF57* ___position_1;
	// RosMessageTypes.Geometry.QuaternionMsg RosMessageTypes.Geometry.PoseMsg::orientation
	QuaternionMsg_t38C03696A966123480CFAD2D607E7F0D09B773F1* ___orientation_2;
};

// RosMessageTypes.UnityRoboticsDemo.PositionServiceRequest
struct PositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249  : public Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF
{
	// RosMessageTypes.UnityRoboticsDemo.PosRotMsg RosMessageTypes.UnityRoboticsDemo.PositionServiceRequest::input
	PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* ___input_1;
};

// RosMessageTypes.UnityRoboticsDemo.PositionServiceResponse
struct PositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F  : public Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF
{
	// RosMessageTypes.UnityRoboticsDemo.PosRotMsg RosMessageTypes.UnityRoboticsDemo.PositionServiceResponse::output
	PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* ___output_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// RosMessageTypes.CustomInterfaces.TransformationMsg
struct TransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A  : public Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF
{
	// System.Int32 RosMessageTypes.CustomInterfaces.TransformationMsg::idto
	int32_t ___idto_1;
	// System.Int32 RosMessageTypes.CustomInterfaces.TransformationMsg::idfrom
	int32_t ___idfrom_2;
	// RosMessageTypes.Geometry.TwistMsg RosMessageTypes.CustomInterfaces.TransformationMsg::tf
	TwistMsg_tCB222F66966F92E11D7B0AEBFF7312A02195D103* ___tf_3;
};

// RosMessageTypes.Geometry.TwistMsg
struct TwistMsg_tCB222F66966F92E11D7B0AEBFF7312A02195D103  : public Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF
{
	// RosMessageTypes.Geometry.Vector3Msg RosMessageTypes.Geometry.TwistMsg::linear
	Vector3Msg_t0D3619E7E7D1941CBED32B5D8D6E4F42D2F8A6CC* ___linear_1;
	// RosMessageTypes.Geometry.Vector3Msg RosMessageTypes.Geometry.TwistMsg::angular
	Vector3Msg_t0D3619E7E7D1941CBED32B5D8D6E4F42D2F8A6CC* ___angular_2;
};

// RosMessageTypes.UnityRoboticsDemo.UnityColorMsg
struct UnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C  : public Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF
{
	// System.Int32 RosMessageTypes.UnityRoboticsDemo.UnityColorMsg::r
	int32_t ___r_1;
	// System.Int32 RosMessageTypes.UnityRoboticsDemo.UnityColorMsg::g
	int32_t ___g_2;
	// System.Int32 RosMessageTypes.UnityRoboticsDemo.UnityColorMsg::b
	int32_t ___b_3;
	// System.Int32 RosMessageTypes.UnityRoboticsDemo.UnityColorMsg::a
	int32_t ___a_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// System.Runtime.CompilerServices.YieldAwaitable
struct YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB__padding[1];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A__padding[1];
	};
};

struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_StaticFields
{
	// System.Threading.WaitCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_waitCallbackRunAction
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___s_waitCallbackRunAction_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_sendOrPostCallbackRunAction
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___s_sendOrPostCallbackRunAction_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___U3CMixedRealityInputActionU3Ek__BackingField_4;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent
struct ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F  : public UnityEvent_1_t0BD17C20BEE262A9D68E86035A0112D1D2BF9749
{
};

// Microsoft.MixedReality.Toolkit.UI.ManipulationEventData
struct ManipulationEventData_t3669F25A1E18443CE54C89DA7F6B5C641FD80F89  : public RuntimeObject
{
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<ManipulationSource>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CManipulationSourceU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<IsNearInteraction>k__BackingField
	bool ___U3CIsNearInteractionU3Ek__BackingField_2;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<PointerCentroid>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointerCentroidU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<PointerVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointerVelocityU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ManipulationEventData::<PointerAngularVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointerAngularVelocityU3Ek__BackingField_5;
};

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 
{
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_2;
};

struct MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___U3CZeroIdentityU3Ek__BackingField_0;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9 
{
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::barycentricCoordinate
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___barycentricCoordinate_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::distance
	float ___distance_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::triangleIndex
	int32_t ___triangleIndex_4;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord_5;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord2_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::lightmapCoord
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lightmapCoord_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::raycastValid
	bool ___raycastValid_9;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_10;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord2_6;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_7;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_10;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord2_6;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_7;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_10;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC 
{
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizationKey
	String_t* ___localizationKey_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizedKeyword
	String_t* ___localizedKeyword_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyword
	String_t* ___keyword_2;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyCode
	int32_t ___keyCode_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SpeechCommands::action
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___action_4;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC_marshaled_pinvoke
{
	char* ___localizationKey_0;
	char* ___localizedKeyword_1;
	char* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_pinvoke ___action_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC_marshaled_com
{
	Il2CppChar* ___localizationKey_0;
	Il2CppChar* ___localizedKeyword_1;
	Il2CppChar* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_com ___action_4;
};

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.IO.Stream System.IO.StreamWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_7;
	// System.Text.Encoding System.IO.StreamWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_8;
	// System.Text.Encoder System.IO.StreamWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_9;
	// System.Byte[] System.IO.StreamWriter::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_10;
	// System.Char[] System.IO.StreamWriter::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_11;
	// System.Int32 System.IO.StreamWriter::_charPos
	int32_t ____charPos_12;
	// System.Int32 System.IO.StreamWriter::_charLen
	int32_t ____charLen_13;
	// System.Boolean System.IO.StreamWriter::_autoFlush
	bool ____autoFlush_14;
	// System.Boolean System.IO.StreamWriter::_haveWrittenPreamble
	bool ____haveWrittenPreamble_15;
	// System.Boolean System.IO.StreamWriter::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamWriter::_asyncWriteTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncWriteTask_17;
};

struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_StaticFields
{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___Null_6;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 
{
	// System.Single Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<RayDistance>k__BackingField
	float ___U3CRayDistanceU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Point>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointU3Ek__BackingField_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Normal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Object>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CObjectU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastRaycastHit>k__BackingField
	MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9 ___U3CLastRaycastHitU3Ek__BackingField_4;
	// UnityEngine.EventSystems.RaycastResult Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastGraphicsRaycastResult>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<PointLocalSpace>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointLocalSpaceU3Ek__BackingField_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<NormalLocalSpace>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76_marshaled_pinvoke
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalU3Ek__BackingField_2;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9_marshaled_pinvoke ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76_marshaled_com
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalU3Ek__BackingField_2;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9_marshaled_com ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85  : public BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399
{
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0  : public RuntimeObject
{
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject* ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___poseData_17;
};

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform
struct MixedRealityTransform_tD69A8273A8D1EA76ED0CA106E11CF17F9942C267 
{
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform::pose
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___pose_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform::scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_2;
};

struct MixedRealityTransform_tD69A8273A8D1EA76ED0CA106E11CF17F9942C267_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform::<Identity>k__BackingField
	MixedRealityTransform_tD69A8273A8D1EA76ED0CA106E11CF17F9942C267 ___U3CIdentityU3Ek__BackingField_0;
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

// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_tB314A7039F454B061E2DDA89435C2CEE4BFDE43D 
{
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Name
	String_t* ___Name_1;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Path
	String_t* ___Path_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Included
	bool ___Included_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::BuildIndex
	int32_t ___BuildIndex_4;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Tag
	String_t* ___Tag_5;
	// UnityEngine.Object Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Asset
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___Asset_6;
};

struct SceneInfo_tB314A7039F454B061E2DDA89435C2CEE4BFDE43D_StaticFields
{
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::empty
	SceneInfo_tB314A7039F454B061E2DDA89435C2CEE4BFDE43D ___empty_0;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_tB314A7039F454B061E2DDA89435C2CEE4BFDE43D_marshaled_pinvoke
{
	char* ___Name_1;
	char* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	char* ___Tag_5;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___Asset_6;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_tB314A7039F454B061E2DDA89435C2CEE4BFDE43D_marshaled_com
{
	Il2CppChar* ___Name_1;
	Il2CppChar* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	Il2CppChar* ___Tag_5;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___Asset_6;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_t4424832821FEC4163B9CFCD3A9F457DF930A95BD  : public BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399
{
	// System.TimeSpan Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseDuration>k__BackingField
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CPhraseDurationU3Ek__BackingField_5;
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<PhraseStartTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CPhraseStartTimeU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.SpeechCommands Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Command>k__BackingField
	SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC ___U3CCommandU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Input.SpeechEventData::<Confidence>k__BackingField
	int32_t ___U3CConfidenceU3Ek__BackingField_8;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation/<StartProgressBehavior>d__5
struct U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4 
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation/<StartProgressBehavior>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation/<StartProgressBehavior>d__5::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation/<StartProgressBehavior>d__5::<>4__this
	ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* ___U3CU3E4__this_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation/<StartProgressBehavior>d__5::<playingAnimation>5__2
	bool ___U3CplayingAnimationU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation/<StartProgressBehavior>d__5::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation/<StartProgressBehavior>d__5::<>u__2
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__2_5;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<StartProgressBehavior>d__8
struct U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063 
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<StartProgressBehavior>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<StartProgressBehavior>d__8::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<StartProgressBehavior>d__8::<>4__this
	ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* ___U3CU3E4__this_2;
	// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<StartProgressBehavior>d__8::<asyncMethod>5__2
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CasyncMethodU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<StartProgressBehavior>d__8::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<StartProgressBehavior>d__8::<>u__2
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__2_5;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4
struct U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116 
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4::<>4__this
	ProgressIndicatorDemoSceneLoad_tF22EAC3534317BF3822EC9E7B732348724FFFD00* ___U3CU3E4__this_2;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4::<indicator>5__2
	RuntimeObject* ___U3CindicatorU3E5__2_3;
	// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4::<sceneTask>5__3
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CsceneTaskU3E5__3_4;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4::<progressMessage>5__4
	String_t* ___U3CprogressMessageU3E5__4_5;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4::<timeStarted>5__5
	float ___U3CtimeStartedU3E5__5_6;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_7;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4::<>u__2
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__2_8;
};

// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.Mhy16.LabelPCLMsg>
struct Func_2_tF97AD7AB25E55D162ABE644CC94BD6AEB26884EA  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceRequest>
struct Func_2_t94AC646487397F6CAE12DD4E9754D5EAD663F377  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceResponse>
struct Func_2_t7F82221457BA5B9A80A4C7223171F78F0D85183F  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.PosRotMsg>
struct Func_2_tB5E220E48E4286DB039FA7EA9E550FF4CAA148E0  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.PositionServiceRequest>
struct Func_2_t61BFBFD6FA3985F5FDE6690A62974114FDCDD333  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.PositionServiceResponse>
struct Func_2_t2E8127890CD2554569E06D23C316FAB42D7D71E4  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.CustomInterfaces.TransformationMsg>
struct Func_2_t7A6883C6BFCBE3E954623EC86AD6CA5FBB1EAD1B  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.UnityColorMsg>
struct Func_2_tF8849497BB86332E0D22F18145E68B6BAB0BD4F7  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>
struct UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoxDisplayConfiguration
struct BoxDisplayConfiguration_t83FA4561B3E0ADDC45AC2516DD78775F5E80849A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoxDisplayConfiguration::boxMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___boxMaterial_4;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoxDisplayConfiguration::boxGrabbedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___boxGrabbedMaterial_5;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoxDisplayConfiguration::flattenAxisDisplayScale
	float ___flattenAxisDisplayScale_6;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoxDisplayConfiguration::materialChanged
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___materialChanged_7;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoxDisplayConfiguration::flattenAxisScaleChanged
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___flattenAxisScaleChanged_8;
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.MixedReality.Toolkit.UI.BoundsControl.HandlesBaseConfiguration
struct HandlesBaseConfiguration_t8126A2B5AFC202250D090BD23035A6A2BE49DEE2  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.UI.BoundsControl.HandlesBaseConfiguration::handleMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___handleMaterial_4;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.UI.BoundsControl.HandlesBaseConfiguration::handleGrabbedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___handleGrabbedMaterial_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.BoundsControl.HandlesBaseConfiguration::handlePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___handlePrefab_6;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundsControl.HandlesBaseConfiguration::handleSize
	float ___handleSize_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.HandlesBaseConfiguration::colliderPadding
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___colliderPadding_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.HandlesBaseConfiguration::drawTetherWhenManipulating
	bool ___drawTetherWhenManipulating_9;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.UI.BoundsControl.HandlesBaseConfiguration::handlesIgnoreCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___handlesIgnoreCollider_10;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.HandlesBaseConfiguration/HandlesChangedEvent Microsoft.MixedReality.Toolkit.UI.BoundsControl.HandlesBaseConfiguration::handlesChanged
	HandlesChangedEvent_tCA6F4AEA4A871B5EC277EFA89F8632C5A4C8D465* ___handlesChanged_11;
};

// Microsoft.MixedReality.Toolkit.UI.BoundsControl.LinksConfiguration
struct LinksConfiguration_tED831CC1625B1AF6E76810B5B5AF40018342DBB9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.UI.BoundsControl.LinksConfiguration::wireframeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___wireframeMaterial_4;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundsControl.LinksConfiguration::wireframeEdgeRadius
	float ___wireframeEdgeRadius_5;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.WireframeType Microsoft.MixedReality.Toolkit.UI.BoundsControl.LinksConfiguration::wireframeShape
	int32_t ___wireframeShape_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.LinksConfiguration::showWireframe
	bool ___showWireframe_7;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.LinksConfiguration/WireFrameEvent Microsoft.MixedReality.Toolkit.UI.BoundsControl.LinksConfiguration::wireFrameChanged
	WireFrameEvent_t3639DB4FD6035F34704D4F20A1DC8914B2DEFDB0* ___wireFrameChanged_8;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B  : public InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85
{
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Microsoft.MixedReality.Toolkit.Input.PrimaryPointerChangedHandler
struct PrimaryPointerChangedHandler_t1C9E0CDB5009F770A464C9126C67A745E2D544E8  : public MulticastDelegate_t
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

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<AsyncMethod>d__9
struct U3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE 
{
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<AsyncMethod>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<AsyncMethod>d__9::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<AsyncMethod>d__9::<>4__this
	ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<AsyncMethod>d__9::<timeStarted>5__2
	float ___U3CtimeStartedU3E5__2_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<AsyncMethod>d__9::<startPos>5__3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CstartPosU3E5__3_4;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<AsyncMethod>d__9::<>u__1
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Microsoft.MixedReality.Toolkit.UI.BoundsControl.PerAxisHandlesConfiguration
struct PerAxisHandlesConfiguration_t2022EEF3D15578CEB7AE3098E6F219C0B8797B6A  : public HandlesBaseConfiguration_t8126A2B5AFC202250D090BD23035A6A2BE49DEE2
{
	// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.HandlePrefabCollider Microsoft.MixedReality.Toolkit.UI.BoundsControl.PerAxisHandlesConfiguration::handlePrefabColliderType
	int32_t ___handlePrefabColliderType_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.PerAxisHandlesConfiguration::showHandleForX
	bool ___showHandleForX_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.PerAxisHandlesConfiguration::showHandleForY
	bool ___showHandleForY_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.PerAxisHandlesConfiguration::showHandleForZ
	bool ___showHandleForZ_15;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundsControl.PerAxisHandlesConfiguration::colliderTypeChanged
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___colliderTypeChanged_16;
};

// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ScaleHandlesConfiguration
struct ScaleHandlesConfiguration_t79002721D09E9BAE57FCF4ACCB206EB0C59A57A8  : public HandlesBaseConfiguration_t8126A2B5AFC202250D090BD23035A6A2BE49DEE2
{
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.BoundsControl.ScaleHandlesConfiguration::handleSlatePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___handleSlatePrefab_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.ScaleHandlesConfiguration::showScaleHandles
	bool ___showScaleHandles_13;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.HandleScaleMode Microsoft.MixedReality.Toolkit.UI.BoundsControl.ScaleHandlesConfiguration::scaleBehavior
	int32_t ___scaleBehavior_14;
};

// Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection
struct BaseObjectCollection_t056687101DB443615AC20656C99C37C2A3272AEB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::<OnCollectionUpdated>k__BackingField
	Action_1_tD40E9B34D63DD268B34D8B9B982AF9BC1E44277F* ___U3COnCollectionUpdatedU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::nodeList
	List_1_t85280175D06D422D1719D9A245F824B6C0BB8638* ___nodeList_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::ignoreInactiveTransforms
	bool ___ignoreInactiveTransforms_6;
	// Microsoft.MixedReality.Toolkit.Utilities.CollationOrder Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::sortType
	int32_t ___sortType_7;
};

// Microsoft.MixedReality.Toolkit.UI.BoundingBox
struct BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.BoundingBox::targetObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject_4;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.UI.BoundingBox::boundsOverride
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___boundsOverride_5;
	// Microsoft.MixedReality.Toolkit.UI.BoundingBox/BoundsCalculationMethod Microsoft.MixedReality.Toolkit.UI.BoundingBox::boundsCalculationMethod
	int32_t ___boundsCalculationMethod_6;
	// Microsoft.MixedReality.Toolkit.UI.BoundingBox/BoundingBoxActivationType Microsoft.MixedReality.Toolkit.UI.BoundingBox::activation
	int32_t ___activation_7;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::scaleMinimum
	float ___scaleMinimum_8;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::scaleMaximum
	float ___scaleMaximum_9;
	// Microsoft.MixedReality.Toolkit.UI.BoundingBox/FlattenModeType Microsoft.MixedReality.Toolkit.UI.BoundingBox::flattenAxis
	int32_t ___flattenAxis_10;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::flattenAxisDisplayScale
	float ___flattenAxisDisplayScale_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::boxPadding
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___boxPadding_12;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.UI.BoundingBox::boxMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___boxMaterial_13;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.UI.BoundingBox::boxGrabbedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___boxGrabbedMaterial_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::showWireframe
	bool ___showWireframe_15;
	// Microsoft.MixedReality.Toolkit.UI.BoundingBox/WireframeType Microsoft.MixedReality.Toolkit.UI.BoundingBox::wireframeShape
	int32_t ___wireframeShape_16;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.UI.BoundingBox::wireframeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___wireframeMaterial_17;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::wireframeEdgeRadius
	float ___wireframeEdgeRadius_18;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.UI.BoundingBox::handleMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___handleMaterial_19;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.UI.BoundingBox::handleGrabbedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___handleGrabbedMaterial_20;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.BoundingBox::scaleHandlePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scaleHandlePrefab_21;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.BoundingBox::scaleHandleSlatePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scaleHandleSlatePrefab_22;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::scaleHandleSize
	float ___scaleHandleSize_23;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::scaleHandleColliderPadding
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scaleHandleColliderPadding_24;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.BoundingBox::rotationHandlePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rotationHandlePrefab_25;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::rotationHandleSize
	float ___rotationHandleSize_26;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::rotateHandleColliderPadding
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotateHandleColliderPadding_27;
	// Microsoft.MixedReality.Toolkit.UI.BoundingBox/RotationHandlePrefabCollider Microsoft.MixedReality.Toolkit.UI.BoundingBox::rotationHandlePrefabColliderType
	int32_t ___rotationHandlePrefabColliderType_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::showScaleHandles
	bool ___showScaleHandles_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::showRotationHandleForX
	bool ___showRotationHandleForX_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::showRotationHandleForY
	bool ___showRotationHandleForY_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::showRotationHandleForZ
	bool ___showRotationHandleForZ_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::drawTetherWhenManipulating
	bool ___drawTetherWhenManipulating_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::proximityEffectActive
	bool ___proximityEffectActive_34;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::handleMediumProximity
	float ___handleMediumProximity_35;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::handleCloseProximity
	float ___handleCloseProximity_36;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::farScale
	float ___farScale_37;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::mediumScale
	float ___mediumScale_38;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::closeScale
	float ___closeScale_39;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::farGrowRate
	float ___farGrowRate_40;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::mediumGrowRate
	float ___mediumGrowRate_41;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundingBox::closeGrowRate
	float ___closeGrowRate_42;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.UI.BoundingBox::handlesIgnoreCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___handlesIgnoreCollider_43;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.UI.BoundingBox::debugText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___debugText_44;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::hideElementsInInspector
	bool ___hideElementsInInspector_45;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundingBox::RotateStarted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___RotateStarted_46;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundingBox::RotateStopped
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___RotateStopped_47;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundingBox::ScaleStarted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___ScaleStarted_48;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundingBox::ScaleStopped
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___ScaleStopped_49;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::wireframeOnly
	bool ___wireframeOnly_50;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.UI.BoundingBox::currentPointer
	RuntimeObject* ___currentPointer_51;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.BoundingBox::rigRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rigRoot_52;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.BoundingBox::boxDisplay
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boxDisplay_53;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.UI.BoundingBox::boundsCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___boundsCorners_54;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::currentBoundsExtents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentBoundsExtents_55;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.UI.BoundingBox::eyeTrackingProvider
	RuntimeObject* ___eyeTrackingProvider_56;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.UI.BoundingBox::touchingSources
	List_1_t66D2309D5E11210602F76A7D31B6B29829A968FC* ___touchingSources_57;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.UI.BoundingBox::links
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___links_58;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> Microsoft.MixedReality.Toolkit.UI.BoundingBox::linkRenderers
	List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ___linkRenderers_59;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.UI.BoundingBox::sourcesDetected
	List_1_t1D90B30E800845F49A02CFACA99B5A6D011F5196* ___sourcesDetected_60;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.UI.BoundingBox::edgeCenters
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___edgeCenters_61;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::currentRotationAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentRotationAxis_62;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::initialScaleOnGrabStart
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialScaleOnGrabStart_63;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::initialPositionOnGrabStart
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialPositionOnGrabStart_64;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::initialGrabPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialGrabPoint_65;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::currentGrabPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentGrabPoint_66;
	// Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint Microsoft.MixedReality.Toolkit.UI.BoundingBox::scaleConstraint
	MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* ___scaleConstraint_67;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::grabPointInPointer
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___grabPointInPointer_68;
	// Microsoft.MixedReality.Toolkit.UI.BoundingBox/CardinalAxisType[] Microsoft.MixedReality.Toolkit.UI.BoundingBox::edgeAxes
	CardinalAxisTypeU5BU5D_t55B9B444FBC962FA6B5C3106A2A87B21BFB6C5C6* ___edgeAxes_69;
	// System.Int32[] Microsoft.MixedReality.Toolkit.UI.BoundingBox::flattenedHandles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___flattenedHandles_70;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::oppositeCorner
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oppositeCorner_71;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundingBox::diagonalDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___diagonalDir_72;
	// Microsoft.MixedReality.Toolkit.UI.BoundingBox/HandleType Microsoft.MixedReality.Toolkit.UI.BoundingBox::currentHandleType
	int32_t ___currentHandleType_73;
	// UnityEngine.Bounds Microsoft.MixedReality.Toolkit.UI.BoundingBox::prevBoundsOverride
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___prevBoundsOverride_74;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.UI.BoundingBox::initialBoundsOverrideSize
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___initialBoundsOverrideSize_75;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::isChildOfTarget
	bool ___isChildOfTarget_76;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer> Microsoft.MixedReality.Toolkit.UI.BoundingBox::proximityPointers
	HashSet_1_t40523303B80F0377C3ADE6520782A26F6442AE96* ___proximityPointers_79;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.UI.BoundingBox::proximityPoints
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___proximityPoints_80;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundingBox::active
	bool ___active_81;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.UI.BoundingBox::<TargetBounds>k__BackingField
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___U3CTargetBoundsU3Ek__BackingField_82;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.BoundingBox/Handle> Microsoft.MixedReality.Toolkit.UI.BoundingBox::handles
	List_1_tF1AC3E4A91A361AF929578C23A37B725203B3EE1* ___handles_83;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.UI.BoundingBox::corners
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___corners_84;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.UI.BoundingBox::balls
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___balls_85;
};

struct BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.UI.BoundingBox::TotalBoundsCorners
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___TotalBoundsCorners_78;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest
struct BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::statusText
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___statusText_4;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::darkGrayMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___darkGrayMaterial_5;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::redMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___redMaterial_6;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::cyanMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cyanMaterial_7;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::scaleWidget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scaleWidget_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::speechTriggeredFalg
	bool ___speechTriggeredFalg_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::cubePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cubePosition_10;
	// Microsoft.MixedReality.Toolkit.UI.BoundingBox Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::bbox
	BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* ___bbox_11;
};

// Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl
struct BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::targetObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject_4;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::boundsOverride
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___boundsOverride_5;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.BoundsCalculationMethod Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::boundsCalculationMethod
	int32_t ___boundsCalculationMethod_6;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.BoundsControlActivationType Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::activation
	int32_t ___activation_7;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.FlattenModeType Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::flattenAxis
	int32_t ___flattenAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::uniformScaleOnFlattenedAxis
	bool ___uniformScaleOnFlattenedAxis_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::boxPadding
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___boxPadding_10;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoxDisplayConfiguration Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::boxDisplayConfiguration
	BoxDisplayConfiguration_t83FA4561B3E0ADDC45AC2516DD78775F5E80849A* ___boxDisplayConfiguration_11;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.LinksConfiguration Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::linksConfiguration
	LinksConfiguration_tED831CC1625B1AF6E76810B5B5AF40018342DBB9* ___linksConfiguration_12;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ScaleHandlesConfiguration Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::scaleHandlesConfiguration
	ScaleHandlesConfiguration_t79002721D09E9BAE57FCF4ACCB206EB0C59A57A8* ___scaleHandlesConfiguration_13;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.RotationHandlesConfiguration Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::rotationHandlesConfiguration
	RotationHandlesConfiguration_t01D98D5153FF07876782F838682A59A9BD381A2C* ___rotationHandlesConfiguration_14;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.TranslationHandlesConfiguration Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::translationHandlesConfiguration
	TranslationHandlesConfiguration_t8CF965B8A2FBEF36D9FE5F588721DCC4B62C897F* ___translationHandlesConfiguration_15;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ProximityEffectConfiguration Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::handleProximityEffectConfiguration
	ProximityEffectConfiguration_t321A936DB8C581AF4C8B1369E9AC65A9A098F25A* ___handleProximityEffectConfiguration_16;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::debugText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___debugText_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::hideElementsInInspector
	bool ___hideElementsInInspector_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::smoothingActive
	bool ___smoothingActive_19;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::rotateLerpTime
	float ___rotateLerpTime_20;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::scaleLerpTime
	float ___scaleLerpTime_21;
	// System.Single Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::translateLerpTime
	float ___translateLerpTime_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::enableConstraints
	bool ___enableConstraints_23;
	// Microsoft.MixedReality.Toolkit.UI.ConstraintManager Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::constraintsManager
	ConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16* ___constraintsManager_24;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::rotateStarted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___rotateStarted_25;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::rotateStopped
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___rotateStopped_26;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::scaleStarted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___scaleStarted_27;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::scaleStopped
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___scaleStopped_28;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::translateStarted
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___translateStarted_29;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::translateStopped
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___translateStopped_30;
	// Microsoft.MixedReality.Toolkit.Experimental.Physics.ElasticsManager Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::elasticsManager
	ElasticsManager_tD4776E7BC4F43D53B123DD7C21A90AEB07EDDDC3* ___elasticsManager_31;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.Links Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::links
	Links_t9D539D432A8755602EA7A3C724196BCA1A72FD89* ___links_32;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ScaleHandles Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::scaleHandles
	ScaleHandles_t59BD37D5673495661C53B40FAD66ABCE53403EDB* ___scaleHandles_33;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.RotationHandles Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::rotationHandles
	RotationHandles_t113F51B783A0E55F52EDBF610786A14B70EEEE85* ___rotationHandles_34;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.TranslationHandles Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::translationHandles
	TranslationHandles_t8ADABCFC4B7D3720510ABA3E7C7FE376D12F66E3* ___translationHandles_35;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoxDisplay Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::boxDisplay
	BoxDisplay_t407A2D972FEF071C1A05044860307AD91ACFDB4A* ___boxDisplay_36;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ProximityEffect Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::proximityEffect
	ProximityEffect_t33B8E18EA8BFDBE4C6EEC2E895E20735788E58A5* ___proximityEffect_37;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::wireframeOnly
	bool ___wireframeOnly_38;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::currentPointer
	RuntimeObject* ___currentPointer_39;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::rigRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rigRoot_40;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::currentBoundsExtents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentBoundsExtents_41;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::touchingSources
	List_1_t66D2309D5E11210602F76A7D31B6B29829A968FC* ___touchingSources_42;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::sourcesDetected
	List_1_t1D90B30E800845F49A02CFACA99B5A6D011F5196* ___sourcesDetected_43;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::currentRotationAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentRotationAxis_44;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::currentTranslationAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentTranslationAxis_45;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::initialScaleOnGrabStart
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialScaleOnGrabStart_46;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::initialRotationOnGrabStart
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___initialRotationOnGrabStart_47;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::initialPositionOnGrabStart
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialPositionOnGrabStart_48;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::initialGrabPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialGrabPoint_49;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::currentGrabPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentGrabPoint_50;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::grabPointInPointer
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___grabPointInPointer_51;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::oppositeCorner
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oppositeCorner_52;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::diagonalDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___diagonalDir_53;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.HandleType Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::currentHandleType
	int32_t ___currentHandleType_54;
	// UnityEngine.Bounds Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::prevBoundsOverride
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___prevBoundsOverride_55;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::initialBoundsOverrideSize
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___initialBoundsOverrideSize_56;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::isChildOfTarget
	bool ___isChildOfTarget_57;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::boundsCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___boundsCorners_60;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::<BoundsCorners>k__BackingField
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___U3CBoundsCornersU3Ek__BackingField_61;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::<TargetBounds>k__BackingField
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___U3CTargetBoundsU3Ek__BackingField_62;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::active
	bool ___active_63;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::childTransforms
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___childTransforms_64;
};

struct BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::TotalBoundsCorners
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___TotalBoundsCorners_59;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample
struct BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::statusText
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___statusText_4;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::darkGrayMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___darkGrayMaterial_5;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::redMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___redMaterial_6;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::cyanMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cyanMaterial_7;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::scaleWidget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scaleWidget_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::speechTriggeredFlag
	bool ___speechTriggeredFlag_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::cubePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cubePosition_10;
	// Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::boundsControl
	BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* ___boundsControl_11;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.ChangeManipulation
struct ChangeManipulation_tB834F15B688C0C56CDD5C05AE9F996F99692390A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.ChangeManipulation::manipulatedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___manipulatedObject_4;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Examples.Demos.ChangeManipulation::collisionTrigger
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collisionTrigger_5;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Examples.Demos.ChangeManipulation::manipulatedObjCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___manipulatedObjCollider_6;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.ClearSpatialObservations
struct ClearSpatialObservations_t18FFAE06576A1113BE55974326CB215F4264E2A1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.ClearSpatialObservations::clearObservations
	bool ___clearObservations_4;
};

// Microsoft.MixedReality.Toolkit.UI.ConstraintManager
struct ConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ConstraintManager::autoConstraintSelection
	bool ___autoConstraintSelection_4;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.TransformConstraint> Microsoft.MixedReality.Toolkit.UI.ConstraintManager::selectedConstraints
	List_1_t3C8A24B34510CED846F95B9830172B795802B39A* ___selectedConstraints_5;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.TransformConstraint> Microsoft.MixedReality.Toolkit.UI.ConstraintManager::constraints
	List_1_t3C8A24B34510CED846F95B9830172B795802B39A* ___constraints_6;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform Microsoft.MixedReality.Toolkit.UI.ConstraintManager::initialWorldPose
	MixedRealityTransform_tD69A8273A8D1EA76ED0CA106E11CF17F9942C267 ___initialWorldPose_7;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl
struct GridObjectLayoutControl_t83248AA1F700E00F0BA07A4A0706DFED0961DB61  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl::grid
	GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* ___grid_4;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl::text
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___text_5;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.InputDataExample
struct InputDataExample_t2595EFEFC54C3E25E46AADB78D7D3EB54DA154E4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Examples.Demos.InputDataExample::inputUtilsText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___inputUtilsText_4;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Examples.Demos.InputDataExample::rawDataText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___rawDataText_5;
	// System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.InputSourceType,Microsoft.MixedReality.Toolkit.Utilities.Handedness>[] Microsoft.MixedReality.Toolkit.Examples.Demos.InputDataExample::inputSources
	Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD* ___inputSources_6;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.InputDataExampleGizmo
struct InputDataExampleGizmo_tD48249BAD6F7C31601CC90A79D8CA8DD9B2ED9FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Examples.Demos.InputDataExampleGizmo::sourceType
	int32_t ___sourceType_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Examples.Demos.InputDataExampleGizmo::handedness
	uint8_t ___handedness_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.InputDataExampleGizmo::isDataAvailable
	bool ___isDataAvailable_6;
};

// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_t71FCC26FB89ED496E3EE4C2786051DB2D90CD1A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::lateInitialize
	bool ___lateInitialize_4;
};

// Microsoft.MixedReality.Toolkit.UI.ManipulationHandler
struct ManipulationHandler_tFA015F7923D30D62CDE4B41B9DE243F7606DDCD2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::hostTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___hostTransform_4;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationHandler/HandMovementType Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::manipulationType
	int32_t ___manipulationType_5;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationHandler/TwoHandedManipulation Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::twoHandedManipulationType
	int32_t ___twoHandedManipulationType_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::allowFarManipulation
	bool ___allowFarManipulation_7;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationHandler/RotateInOneHandType Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::oneHandRotationModeNear
	int32_t ___oneHandRotationModeNear_8;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationHandler/RotateInOneHandType Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::oneHandRotationModeFar
	int32_t ___oneHandRotationModeFar_9;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationHandler/ReleaseBehaviorType Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::releaseBehavior
	int32_t ___releaseBehavior_10;
	// Microsoft.MixedReality.Toolkit.Utilities.RotationConstraintType Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::constraintOnRotation
	int32_t ___constraintOnRotation_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::useLocalSpaceForConstraint
	bool ___useLocalSpaceForConstraint_12;
	// Microsoft.MixedReality.Toolkit.Utilities.MovementConstraintType Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::constraintOnMovement
	int32_t ___constraintOnMovement_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::smoothingActive
	bool ___smoothingActive_14;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::smoothingAmountOneHandManip
	float ___smoothingAmountOneHandManip_15;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::onManipulationStarted
	ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ___onManipulationStarted_16;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::onManipulationEnded
	ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ___onManipulationEnded_17;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::onHoverEntered
	ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ___onHoverEntered_18;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::onHoverExited
	ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ___onHoverExited_19;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationHandler/State Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::currentState
	int32_t ___currentState_20;
	// Microsoft.MixedReality.Toolkit.Physics.ManipulationMoveLogic Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::moveLogic
	ManipulationMoveLogic_t251D54768E38006A42A6FBC6827C8DB331CB3E5D* ___moveLogic_21;
	// Microsoft.MixedReality.Toolkit.Physics.TwoHandScaleLogic Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::scaleLogic
	TwoHandScaleLogic_t167083A146EE5C304A01FC77818E0CE7DCBF0828* ___scaleLogic_22;
	// Microsoft.MixedReality.Toolkit.Physics.TwoHandRotateLogic Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::rotateLogic
	TwoHandRotateLogic_tEF89AA0BEF7C232BB4FBEA6D76F357408939950B* ___rotateLogic_23;
	// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.UI.ManipulationHandler/PointerData> Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::pointerIdToPointerMap
	Dictionary_2_t83ED73055EE9DDAFE86662BCAF07472F969AB98C* ___pointerIdToPointerMap_24;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::objectToHandRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___objectToHandRotation_25;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::objectToGripRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___objectToGripRotation_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::isNearManipulation
	bool ___isNearManipulation_27;
	// UnityEngine.Rigidbody Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::rigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidBody_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::wasKinematic
	bool ___wasKinematic_29;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::startObjectRotationCameraSpace
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startObjectRotationCameraSpace_30;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::startObjectRotationFlatCameraSpace
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startObjectRotationFlatCameraSpace_31;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::hostWorldRotationOnManipulationStart
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___hostWorldRotationOnManipulationStart_32;
	// Microsoft.MixedReality.Toolkit.UI.FixedDistanceConstraint Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::moveConstraint
	FixedDistanceConstraint_t6BE881D13F52454DBE39946FCB2912750B9B8872* ___moveConstraint_33;
	// Microsoft.MixedReality.Toolkit.UI.RotationAxisConstraint Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::rotateConstraint
	RotationAxisConstraint_t7E98FA80878A0B5EC4BB90753875AD7A22ADD366* ___rotateConstraint_34;
	// Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::scaleHandler
	MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* ___scaleHandler_35;
};

// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator
struct ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::hostTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___hostTransform_4;
	// Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::manipulationType
	int32_t ___manipulationType_5;
	// Microsoft.MixedReality.Toolkit.Utilities.TransformFlags Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::twoHandedManipulationType
	int32_t ___twoHandedManipulationType_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::allowFarManipulation
	bool ___allowFarManipulation_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::useForcesForNearManipulation
	bool ___useForcesForNearManipulation_8;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::oneHandRotationModeNear
	int32_t ___oneHandRotationModeNear_9;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::oneHandRotationModeFar
	int32_t ___oneHandRotationModeFar_10;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/ReleaseBehaviorType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::releaseBehavior
	int32_t ___releaseBehavior_11;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::transformSmoothingLogicType
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___transformSmoothingLogicType_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::smoothingFar
	bool ___smoothingFar_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::smoothingNear
	bool ___smoothingNear_14;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::moveLerpTime
	float ___moveLerpTime_15;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rotateLerpTime
	float ___rotateLerpTime_16;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::scaleLerpTime
	float ___scaleLerpTime_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::enableConstraints
	bool ___enableConstraints_18;
	// Microsoft.MixedReality.Toolkit.UI.ConstraintManager Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::constraintsManager
	ConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16* ___constraintsManager_19;
	// Microsoft.MixedReality.Toolkit.Experimental.Physics.ElasticsManager Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::elasticsManager
	ElasticsManager_tD4776E7BC4F43D53B123DD7C21A90AEB07EDDDC3* ___elasticsManager_20;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onManipulationStarted
	ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ___onManipulationStarted_21;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onManipulationEnded
	ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ___onManipulationEnded_22;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onHoverEntered
	ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ___onHoverEntered_23;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onHoverExited
	ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ___onHoverExited_24;
	// Microsoft.MixedReality.Toolkit.Physics.ManipulationMoveLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::moveLogic
	ManipulationMoveLogic_t251D54768E38006A42A6FBC6827C8DB331CB3E5D* ___moveLogic_25;
	// Microsoft.MixedReality.Toolkit.Physics.TwoHandScaleLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::scaleLogic
	TwoHandScaleLogic_t167083A146EE5C304A01FC77818E0CE7DCBF0828* ___scaleLogic_26;
	// Microsoft.MixedReality.Toolkit.Physics.TwoHandRotateLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rotateLogic
	TwoHandRotateLogic_tEF89AA0BEF7C232BB4FBEA6D76F357408939950B* ___rotateLogic_27;
	// Microsoft.MixedReality.Toolkit.Utilities.ITransformSmoothingLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::smoothingLogic
	RuntimeObject* ___smoothingLogic_28;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/PointerData> Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::pointerDataList
	List_1_tDCB42132EA3F6FE987625FAA7D33629EC3112775* ___pointerDataList_29;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::objectToGripRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___objectToGripRotation_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::isNearManipulation
	bool ___isNearManipulation_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::isManipulationStarted
	bool ___isManipulationStarted_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::isSmoothing
	bool ___isSmoothing_33;
	// UnityEngine.Rigidbody Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidBody_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::wasGravity
	bool ___wasGravity_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::wasKinematic
	bool ___wasKinematic_36;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::leftHandRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___leftHandRotation_37;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rightHandRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rightHandRotation_38;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::hasFirstPointerDraggedThisFrame
	bool ___hasFirstPointerDraggedThisFrame_39;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::handPositionMap
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___handPositionMap_40;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.PrimaryPointerHandlerExample
struct PrimaryPointerHandlerExample_tB2A0E6E868757817A2F02AF60A7E532A5027414A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.PrimaryPointerHandlerExample::CursorHighlight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CursorHighlight_4;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo
struct ProgressIndicatorDemo_t6A221029ABCFDCE0E67949979A34B87AE2545D01  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::demoObjectAsyncMethod
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___demoObjectAsyncMethod_4;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::demoObjectAnimation
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___demoObjectAnimation_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::demoObjectSceneLoad
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___demoObjectSceneLoad_6;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::toggleBarAsyncMethodKey
	int32_t ___toggleBarAsyncMethodKey_7;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::toggleAnimationKey
	int32_t ___toggleAnimationKey_8;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::toggleSceneLoadKey
	int32_t ___toggleSceneLoadKey_9;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation
struct ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation::progressIndicatorObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___progressIndicatorObject_5;
	// UnityEngine.Animator Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_6;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation::progressIndicator
	RuntimeObject* ___progressIndicator_7;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod
struct ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod::progressIndicatorObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___progressIndicatorObject_4;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod::asyncTaskDuration
	float ___asyncTaskDuration_5;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod::coffeeCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___coffeeCurve_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod::coffeeTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___coffeeTransform_7;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod::progressIndicator
	RuntimeObject* ___progressIndicator_8;
	// System.Threading.CancellationTokenSource Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod::tokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___tokenSource_9;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad
struct ProgressIndicatorDemoSceneLoad_tF22EAC3534317BF3822EC9E7B732348724FFFD00  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad::progressIndicatorObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___progressIndicatorObject_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad::sceneToLoad
	SceneInfo_tB314A7039F454B061E2DDA89435C2CEE4BFDE43D ___sceneToLoad_5;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad::loadDelay
	float ___loadDelay_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad::startedProgressBehavior
	bool ___startedProgressBehavior_7;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds
struct ReturnToBounds_t5F145A1F417B58F9A50781059C4409D5746FA993  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::frontBounds
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___frontBounds_4;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::backBounds
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___backBounds_5;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::leftBounds
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftBounds_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::rightBounds
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightBounds_7;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::bottomBounds
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bottomBounds_8;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::topBounds
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___topBounds_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::positionAtStart
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionAtStart_10;
};

// Microsoft.MixedReality.Toolkit.UI.BoundsControl.RotationHandlesConfiguration
struct RotationHandlesConfiguration_t01D98D5153FF07876782F838682A59A9BD381A2C  : public PerAxisHandlesConfiguration_t2022EEF3D15578CEB7AE3098E6F219C0B8797B6A
{
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.Rotator
struct Rotator_tD661E3A479EEDC39492BA31D09D81C15D6CBA1AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.Rotator::angle
	float ___angle_4;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.ShowPlaneFindingInstructions
struct ShowPlaneFindingInstructions_tA0D7A65D27297E8FAD34556BAB27963BF2458E4F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.ShowPlaneFindingInstructions::planeFindingPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___planeFindingPanel_4;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.SliderLunarLander
struct SliderLunarLander_t8581E51E62C5EE44A746ED6BDDE123AFFCD9364E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.SliderLunarLander::transformLandingGear
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transformLandingGear_4;
};

// Microsoft.MixedReality.Toolkit.Examples.Demos.SpawnOnPointerEvent
struct SpawnOnPointerEvent_t4192231F2213C31C5FA27A9AAC7D99C8E8F96A0A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.SpawnOnPointerEvent::PrefabToSpawn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PrefabToSpawn_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Microsoft.MixedReality.Toolkit.Input.GGVPointer
struct GGVPointer_t5D017CA59C5DE1F7E8482B81F2FF262D6AB9CF43  : public InputSystemGlobalHandlerListener_t71FCC26FB89ED496E3EE4C2786051DB2D90CD1A9
{
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.GGVPointer::selectAction
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___selectAction_5;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.GGVPointer::poseAction
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___poseAction_6;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.GGVPointer::gazeProvider
	RuntimeObject* ___gazeProvider_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.GGVPointer::sourcePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sourcePosition_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GGVPointer::isSelectPressed
	bool ___isSelectPressed_9;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.GGVPointer::lastControllerHandedness
	uint8_t ___lastControllerHandedness_10;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.GGVPointer::controller
	RuntimeObject* ___controller_11;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.GGVPointer::pointerId
	uint32_t ___pointerId_12;
	// System.String Microsoft.MixedReality.Toolkit.Input.GGVPointer::pointerName
	String_t* ___pointerName_13;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.GGVPointer::<InputSourceParent>k__BackingField
	RuntimeObject* ___U3CInputSourceParentU3Ek__BackingField_14;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.GGVPointer::<BaseCursor>k__BackingField
	RuntimeObject* ___U3CBaseCursorU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Input.ICursorModifier Microsoft.MixedReality.Toolkit.Input.GGVPointer::<CursorModifier>k__BackingField
	RuntimeObject* ___U3CCursorModifierU3Ek__BackingField_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GGVPointer::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GGVPointer::<IsFocusLocked>k__BackingField
	bool ___U3CIsFocusLockedU3Ek__BackingField_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.GGVPointer::<IsTargetPositionLockedOnFocusLock>k__BackingField
	bool ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_19;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.GGVPointer::<Rays>k__BackingField
	RayStepU5BU5D_t5FD9886331969B34497F7F44BF9E9083A209C6FC* ___U3CRaysU3Ek__BackingField_20;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.GGVPointer::<PrioritizedLayerMasksOverride>k__BackingField
	LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.Input.GGVPointer::<FocusTarget>k__BackingField
	RuntimeObject* ___U3CFocusTargetU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.GGVPointer::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_23;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Input.GGVPointer::<SceneQueryType>k__BackingField
	int32_t ___U3CSceneQueryTypeU3Ek__BackingField_24;
};

struct GGVPointer_t5D017CA59C5DE1F7E8482B81F2FF262D6AB9CF43_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GGVPointer::OnPreSceneQueryPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___OnPreSceneQueryPerfMarker_25;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GGVPointer::OnPostSceneQueryPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___OnPostSceneQueryPerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GGVPointer::OnInputUpPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___OnInputUpPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GGVPointer::OnInputDownPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___OnInputDownPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GGVPointer::OnSourceLostPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___OnSourceLostPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.GGVPointer::OnInputChangedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___OnInputChangedPerfMarker_30;
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

// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection
struct GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A  : public BaseObjectCollection_t056687101DB443615AC20656C99C37C2A3272AEB
{
	// Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::surfaceType
	int32_t ___surfaceType_8;
	// Microsoft.MixedReality.Toolkit.Utilities.OrientationType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::orientType
	int32_t ___orientType_9;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::layout
	int32_t ___layout_10;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutAnchor Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::anchor
	int32_t ___anchor_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::anchorAlongAxis
	bool ___anchorAlongAxis_12;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutHorizontalAlignment Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::columnAlignment
	int32_t ___columnAlignment_13;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutVerticalAlignment Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::rowAlignment
	int32_t ___rowAlignment_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::radius
	float ___radius_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::radialRange
	float ___radialRange_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::distance
	float ___distance_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::rows
	int32_t ___rows_19;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::columns
	int32_t ___columns_20;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::cellWidth
	float ___cellWidth_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::cellHeight
	float ___cellHeight_22;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::<SphereMesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CSphereMeshU3Ek__BackingField_23;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::<CylinderMesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CCylinderMeshU3Ek__BackingField_24;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::HalfCell
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___HalfCell_25;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::assetVersion
	int32_t ___assetVersion_27;
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

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_265;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_266;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_267;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_268;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_269;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_270;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_271;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_272;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_273;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_274;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_275;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_276;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_277;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_278;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_279;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_280;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_281;
};

struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_301;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.InputSourceType,Microsoft.MixedReality.Toolkit.Utilities.Handedness>[]
struct Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD  : public RuntimeArray
{
	ALIGN_FIELD (8) Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375* m_Items[1];

	inline Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE  : public RuntimeArray
{
	ALIGN_FIELD (8) MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* m_Items[1];

	inline MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// T1 System.Tuple`2<System.Int32Enum,System.ByteEnum>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item1_mEFA23BD2BE43E299B2198BC2BBD0AB03865E2BF7_gshared_inline (Tuple_2_t1E323C87394A4DF45775FDAF9CB8B2FB875F6324* __this, const RuntimeMethod* method) ;
// T2 System.Tuple`2<System.Int32Enum,System.ByteEnum>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Tuple_2_get_Item2_m15F076302750FA6F7F3AB37946FA10AA6E87B456_gshared_inline (Tuple_2_t1E323C87394A4DF45775FDAF9CB8B2FB875F6324* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<System.Int32Enum,System.ByteEnum>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m22A6196F7E92CE16121886E797DDC9CFF0609671_gshared (Tuple_2_t1E323C87394A4DF45775FDAF9CB8B2FB875F6324* __this, int32_t ___item10, uint8_t ___item21, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::TryGetMonoBehaviour<System.Object>(T,UnityEngine.MonoBehaviour&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_TryGetMonoBehaviour_TisRuntimeObject_mA94BEC62B4805553353D59D11CA31FCD4E4FC1BC_gshared (RuntimeObject* ___interface0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71** ___monoBehaviour1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation/<StartProgressBehavior>d__5>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_mE46C5542344553A9B10B135CFC9C86DBB40EE8F7_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation/<StartProgressBehavior>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m440D5CA2B7C09487CAF47729BD1D4F2FA0B62142_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation/<StartProgressBehavior>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m7D521DCD37A0807B9F0F509D9008390D25EE2042_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<StartProgressBehavior>d__8>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_mD0F890FF69CEFBF7311775B3389891F726CE372C_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<AsyncMethod>d__9>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE_m85A63B32C9F662E3DFFB7C52C6829166F74CF2F2_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<StartProgressBehavior>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_m83516A031D181675B8B1A3723A67E5D34FDC32C2_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<StartProgressBehavior>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_mD4B35CE9ADF86AD6556E99A5159113134AD0AFA2_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<AsyncMethod>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE_mC08BDBFB89C539E7DEB910A6AA058F19FF6DFCB1_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m075D11E370377454E0561D964686B54D9C31DB2A_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m0C3B36CE8FC327CBA8AB41A8A906789371CA131A_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m677C7463D68320CE2B243236CDD169ECC6C4CBD8_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::Register<System.Object>(System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,T>,Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageRegistry_Register_TisRuntimeObject_m249582AB586F3157BB2E536B4905C7557B10F290_gshared (String_t* ___rosMessageName0, Func_2_t89B22632A0C7273D549D5290F817207968F77B7B* ___deserialize1, int32_t ___subtopic2, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// T1 System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.InputSourceType,Microsoft.MixedReality.Toolkit.Utilities.Handedness>::get_Item1()
inline int32_t Tuple_2_get_Item1_m3A1DED7BC6DA1FC4B308F9760732B449AACB8FA2_inline (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375*, const RuntimeMethod*))Tuple_2_get_Item1_mEFA23BD2BE43E299B2198BC2BBD0AB03865E2BF7_gshared_inline)(__this, method);
}
// T2 System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.InputSourceType,Microsoft.MixedReality.Toolkit.Utilities.Handedness>::get_Item2()
inline uint8_t Tuple_2_get_Item2_m99004F229E18A73A3BF435B3645EEA2EF787C400_inline (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375*, const RuntimeMethod*))Tuple_2_get_Item2_m15F076302750FA6F7F3AB37946FA10AA6E87B456_gshared_inline)(__this, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputRayUtils::TryGetRay(Microsoft.MixedReality.Toolkit.Input.InputSourceType,Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Ray&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputRayUtils_TryGetRay_m39E96D7C92B820622DF5CB227DDA77EBCED2AA75 (int32_t ___sourceType0, uint8_t ___hand1, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* ___ray2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943 (const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::GetEnumerator()
inline Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540 HashSet_1_GetEnumerator_mFD270DB64CA6CFBBEC0204BA3883F03DEB325CCA (HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540 (*) (HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::Dispose()
inline void Enumerator_Dispose_m71CAA2062645DBD932D8214BDEDB18585DE55A54 (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m82FE574FEF92EE2D1465259DDBAB99634137B46F_inline (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Description()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityInteractionMapping_get_Description_mB4C6619EF2F1E6AEE57C98A24F2C90A0FBCACD50_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_AxisType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_AxisType_mCD3EA297AACF47BE8DFCCDCEBB0ABD2F5933EA40_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PositionData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MixedRealityInteractionMapping_get_PositionData_m189D602B6846B225CBFBAB5C64699469900972E5_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_RotationData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MixedRealityInteractionMapping_get_RotationData_m37593A681A7F3DF462819D9576EF74F8FE7DD43D_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Quaternion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Quaternion_ToString_mC5BD5DEF60FCA4A38924462A5C4440ECFCF934C4 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m69F4D6E88FF5DF204C3C38426A2BCD74AB7060CB_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_FloatData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInteractionMapping_get_FloatData_m427535AC6E511D46014CADA75E2410FA4CE5C903_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::MoveNext()
inline bool Enumerator_MoveNext_m8B090EFB59282696217E0C4BF4772DF044BEBAAB (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.PointerUtils::SetGazePointerBehavior(Microsoft.MixedReality.Toolkit.Input.PointerBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerUtils_SetGazePointerBehavior_mDD11B1492339F30F7189EE92CC7C6BAA999FD831 (int32_t ___pointerBehavior0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.PointerUtils::SetHandRayPointerBehavior(Microsoft.MixedReality.Toolkit.Input.PointerBehavior,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerUtils_SetHandRayPointerBehavior_m1B78E33A766DFEF79BA0D41DA660E7ECC4123752 (int32_t ___pointerBehavior0, uint8_t ___handedness1, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.InputSourceType,Microsoft.MixedReality.Toolkit.Utilities.Handedness>::.ctor(T1,T2)
inline void Tuple_2__ctor_m91C82BB401A8205ACFBDEFB4918ECC60687FF73D (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375* __this, int32_t ___item10, uint8_t ___item21, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375*, int32_t, uint8_t, const RuntimeMethod*))Tuple_2__ctor_m22A6196F7E92CE16121886E797DDC9CFF0609671_gshared)(__this, ___item10, ___item21, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.InputDataExampleGizmo::SetIsDataAvailable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDataExampleGizmo_SetIsDataAvailable_m7A9DF9F25D6D16DD610E5FA495D325626C41CA76 (InputDataExampleGizmo_tD48249BAD6F7C31601CC90A79D8CA8DD9B2ED9FB* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::get_Pointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MixedRealityPointerEventData_get_Pointer_mE5664622195651CF4C2DC3CEAAF99E3823B74E82_inline (MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Point()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FocusDetails_get_Point_mED97A47BC407BF95930337DF61EE88143661B89B_inline (FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Normal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FocusDetails_get_Normal_mE74AC45EDDA7AC6432BD7C0F27928DDF75192242_inline (FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.PrimaryPointerChangedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimaryPointerChangedHandler__ctor_m606B901E796B1E1AAC1542943D7D34D1491DD123 (PrimaryPointerChangedHandler_t1C9E0CDB5009F770A464C9126C67A745E2D544E8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::TryGetMonoBehaviour<Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor>(T,UnityEngine.MonoBehaviour&)
inline bool UnityObjectExtensions_TryGetMonoBehaviour_TisIMixedRealityCursor_t59775B0000A1264F48A2A2B8E459189BD459B85C_m6E768B891560F4761F9975129DD0631C6386FE1C (RuntimeObject* ___interface0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71** ___monoBehaviour1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71**, const RuntimeMethod*))UnityObjectExtensions_TryGetMonoBehaviour_TisRuntimeObject_mA94BEC62B4805553353D59D11CA31FCD4E4FC1BC_gshared)(___interface0, ___monoBehaviour1, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::TryGetMonoBehaviour<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>(T,UnityEngine.MonoBehaviour&)
inline bool UnityObjectExtensions_TryGetMonoBehaviour_TisIMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_mC4D9845F8A7F0CE4B731048671596E9BEF464E8D (RuntimeObject* ___interface0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71** ___monoBehaviour1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71**, const RuntimeMethod*))UnityObjectExtensions_TryGetMonoBehaviour_TisRuntimeObject_mA94BEC62B4805553353D59D11CA31FCD4E4FC1BC_gshared)(___interface0, ___monoBehaviour1, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.PrimaryPointerHandlerExample::OnPrimaryPointerChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimaryPointerHandlerExample_OnPrimaryPointerChanged_m056DBFB929005ED8B7AB9276FE9D02B0048A87E6 (PrimaryPointerHandlerExample_tB2A0E6E868757817A2F02AF60A7E532A5027414A* __this, RuntimeObject* ___oldPointer0, RuntimeObject* ___newPointer1, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.CoreServices::get_SpatialAwarenessSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_SpatialAwarenessSystem_mD0ED61C3A26D541C23E92BC0062CBB6154DC3DE2 (const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes::get_CanCreatePlanes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMeshesToPlanes_get_CanCreatePlanes_m8081CBE1237DA720ECEBCAC99052466D79388703 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::Sequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoundingBoxExampleTest_Sequence_m52B3C449C585EB03563F40D49531BB49F96F31DB (BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSequenceU3Ed__12__ctor_m7D5B9C81C79BDFDA12B9C2630156D85048EC8CF3 (U3CSequenceU3Ed__12_tF55D339C4A243C24CBE65F823E7A04CE6E203933* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSpeechCommandU3Ed__13__ctor_m6FB0854046E56A3E0B22E796BCD6EED6EF8CF782 (U3CWaitForSpeechCommandU3Ed__13_tA3478029843B23D9C8A63D157FFB5BB99CF37ED5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.SpeechCommands Microsoft.MixedReality.Toolkit.Input.SpeechEventData::get_Command()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC SpeechEventData_get_Command_m55D611C557104EC236CE8D929CFBFA2D37216636_inline (SpeechEventData_t4424832821FEC4163B9CFCD3A9F457DF930A95BD* __this, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::get_Keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechCommands_get_Keyword_m381228670D38A858F9AE14CBA8D101E7085BA94C (SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::HighlightWires()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_HighlightWires_mC0791AE8EB6F2D41F02A1FF73A3E5CE3763438D8 (BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::UnhighlightWires()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_UnhighlightWires_mE61DF57E00BAFC07AB13C81C5A7EDF4F09179F18 (BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507 (int32_t ___type0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::SetStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853 (BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* __this, String_t* ___status0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.UI.BoundingBox>()
inline BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* GameObject_AddComponent_TisBoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D_mEA8B8AEA4CD2F47BF50E5147B6C2DEF2B2D4DDFF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::set_HideElementsInInspector(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_set_HideElementsInInspector_mC65AA0D989BED6AD12A16C33DC7203B6915E2307 (BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::set_BoundingBoxActivation(Microsoft.MixedReality.Toolkit.UI.BoundingBox/BoundingBoxActivationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_set_BoundingBoxActivation_m4A83D6FFCC6FC0F24CD56AD364DAFA33EC790623 (BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.UI.ConstraintManager>()
inline ConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16* GameObject_AddComponent_TisConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16_mFE64421C1E4C885473A4025C4220BED207C48687 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.UI.ObjectManipulator>()
inline ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* GameObject_AddComponent_TisObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38_m7987B1E4C0405213AFBED42D2DEE4C11B040AE41 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::WaitForSpeechCommand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9 (BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.BoxCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider_set_center_m0AB0482699735FEE8306A7FCAAE66A76C479F0F0 (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoxCollider::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::set_BoundsOverride(UnityEngine.BoxCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_set_BoundsOverride_m09F66B730928F61382A7A940A74034620B694E83 (BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* __this, BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::set_FlattenAxis(Microsoft.MixedReality.Toolkit.UI.BoundingBox/FlattenModeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_set_FlattenAxis_m73041E6529FFACDA2ABF192FB22C82035CC28B93 (BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::set_ShowWireFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_set_ShowWireFrame_m815D7777785EF3D147490FCBAF35D451D6DFF9E8 (BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::set_BoxPadding(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_set_BoxPadding_mB13723223DDB6C56F1DFF5828A42A0B263B69412 (BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::set_ScaleHandleSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_set_ScaleHandleSize_mDCA3EA97F6B9F25349B5DDFD15DE2A50EAA85A89 (BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::set_ScaleHandlePrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_set_ScaleHandlePrefab_m0EB259BC50A44A0D0E2619FB7ECC5237F1A02246 (BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::set_HandleMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_set_HandleMaterial_m4231BBF0D51BFAB2958E3260B5667F381C6274AA (BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::set_BoxMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_set_BoxMaterial_m3419D9EA57D6A6F7FC6F26A7749D25C6EA2B6295 (BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::set_BoxGrabbedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_set_BoxGrabbedMaterial_mA6E21F5A06224FBF7820E752C397506259AFDF23 (BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::get_OnManipulationStarted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ObjectManipulator_get_OnManipulationStarted_m6D34E8A4815F7BAF59B40857C3D991CA684E70C5_inline (ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mFCCE72B022568BFF6808E4C468007FF699A26D2E (UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.ManipulationEventData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mCE472D576E4B9591F706A2D7A00FC0BA3C985BBF (UnityEvent_1_t0BD17C20BEE262A9D68E86035A0112D1D2BF9749* __this, UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t0BD17C20BEE262A9D68E86035A0112D1D2BF9749*, UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::get_OnManipulationEnded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ObjectManipulator_get_OnManipulationEnded_m342FD627CB115449ED8BE8C1A36FABD9C875E630_inline (ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::CreateRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_CreateRig_mDA4FDD6CF7A31298584CAF2627A9FFC9DE134886 (BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::set_ShowRotationHandleForY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_set_ShowRotationHandleForY_m612FAE84BC3AE5390DB8479A1EF41AAA451223B9 (BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::set_WireframeEdgeRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_set_WireframeEdgeRadius_m6D523BF47450AEFD1D662F0212D768F4003AED68 (BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundingBox::set_WireframeShape(Microsoft.MixedReality.Toolkit.UI.BoundingBox/WireframeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBox_set_WireframeShape_mF3ED914F2F1357BD7BD6D3487291731078970077 (BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::Sequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoundsControlRuntimeExample_Sequence_mA8BB9C4271B68A0FE6082F3C9398AE11ABE3AE0F (BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSequenceU3Ed__12__ctor_mEE411CE274DF4BBEFA671D5E4915AA11AD47EA2E (U3CSequenceU3Ed__12_tC2B6193C1B40DBAC26777FF6B1D1F96218C979B6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSpeechCommandU3Ed__13__ctor_m7D65D5CDE2156C2AD5B4FB7E9B352CDD5A8EF794 (U3CWaitForSpeechCommandU3Ed__13_tBCE429335B21A71E6105155218A71C1E2926AA7E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::HighlightWires()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControl_HighlightWires_m01C0EB86622840FA767F97742BA176808F9C09B4 (BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::UnhighlightWires()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControl_UnhighlightWires_m6909DF3D0D5F1378EA3C54CD23E92A7F4974AFF0 (BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::SetStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646 (BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* __this, String_t* ___status0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl>()
inline BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* GameObject_AddComponent_TisBoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547_m9533CFEE6F12C8F67D2A0440BE89C7EBB61BCE4C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::set_HideElementsInInspector(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControl_set_HideElementsInInspector_m702F0CD475F2B103A435A85B1F6BDCDDD98577F4 (BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::set_BoundsControlActivation(Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.BoundsControlActivationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControl_set_BoundsControlActivation_mF2A4AE4EAA5F60BED97B99789B5682F570317114 (BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::WaitForSpeechCommand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E (BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::set_BoundsOverride(UnityEngine.BoxCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControl_set_BoundsOverride_m082BC37EC5FBD74449F66C6007F3ABF888128959 (BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* __this, BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::set_FlattenAxis(Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.FlattenModeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControl_set_FlattenAxis_m2B22D2EBEA7DE9CE54CCE5E766B184368B07A2CE (BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.LinksConfiguration Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::get_LinksConfig()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LinksConfiguration_tED831CC1625B1AF6E76810B5B5AF40018342DBB9* BoundsControl_get_LinksConfig_mE38043D5C379F5B33BFA563AFCBC863F2433AABD_inline (BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.LinksConfiguration::set_ShowWireFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinksConfiguration_set_ShowWireFrame_m47BE8E7E8781D10E64B9B059A1506EEB7B70E9FA (LinksConfiguration_tED831CC1625B1AF6E76810B5B5AF40018342DBB9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::set_BoxPadding(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControl_set_BoxPadding_m83A3E2381ACE717EDEEDF3ACADF5E8718EC1026C (BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.ScaleHandlesConfiguration Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::get_ScaleHandlesConfig()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScaleHandlesConfiguration_t79002721D09E9BAE57FCF4ACCB206EB0C59A57A8* BoundsControl_get_ScaleHandlesConfig_mF4E6B27A29516D14D9FE07697CC281723402B622_inline (BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.HandlesBaseConfiguration::set_HandleSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandlesBaseConfiguration_set_HandleSize_m94C7533916041EE7F9DF9E15F076031A1CB824D5 (HandlesBaseConfiguration_t8126A2B5AFC202250D090BD23035A6A2BE49DEE2* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.HandlesBaseConfiguration::set_HandlePrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandlesBaseConfiguration_set_HandlePrefab_m01057A187A2CCF61C7A0D7BEF85B49AC4E190ACA (HandlesBaseConfiguration_t8126A2B5AFC202250D090BD23035A6A2BE49DEE2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.HandlesBaseConfiguration::set_HandleMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandlesBaseConfiguration_set_HandleMaterial_m50C2284D22EF6238412080982E524B0D23C9E588 (HandlesBaseConfiguration_t8126A2B5AFC202250D090BD23035A6A2BE49DEE2* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.RotationHandlesConfiguration Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::get_RotationHandlesConfig()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RotationHandlesConfiguration_t01D98D5153FF07876782F838682A59A9BD381A2C* BoundsControl_get_RotationHandlesConfig_m14068630E6743C226CE4C1377DB2EBFC024CB64B_inline (BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoxDisplayConfiguration Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::get_BoxDisplayConfig()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoxDisplayConfiguration_t83FA4561B3E0ADDC45AC2516DD78775F5E80849A* BoundsControl_get_BoxDisplayConfig_m9BB482C42F5C33EFEFDEDEFA5ED471ABF14C4FB8_inline (BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoxDisplayConfiguration::set_BoxMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxDisplayConfiguration_set_BoxMaterial_m0339CB100454537F353C0C05B4D1AFA90E552AA3 (BoxDisplayConfiguration_t83FA4561B3E0ADDC45AC2516DD78775F5E80849A* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoxDisplayConfiguration::set_BoxGrabbedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxDisplayConfiguration_set_BoxGrabbedMaterial_mB04396FA73CBC084B6217B04C5A6F9135678AD54 (BoxDisplayConfiguration_t83FA4561B3E0ADDC45AC2516DD78775F5E80849A* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.PerAxisHandlesConfiguration::set_ShowHandleForY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerAxisHandlesConfiguration_set_ShowHandleForY_m065ECBDECE8AA8F9334F71011D4F2C92123BCD5F (PerAxisHandlesConfiguration_t2022EEF3D15578CEB7AE3098E6F219C0B8797B6A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.LinksConfiguration::set_WireframeEdgeRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinksConfiguration_set_WireframeEdgeRadius_m6CB72573C4BE7CE2F607BA2CBEB2A92346EF1CAB (LinksConfiguration_tED831CC1625B1AF6E76810B5B5AF40018342DBB9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.LinksConfiguration::set_WireframeShape(Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.WireframeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinksConfiguration_set_WireframeShape_mB9F003BF06B6A6C6034E5472A7F93EA79DBC146A (LinksConfiguration_tED831CC1625B1AF6E76810B5B5AF40018342DBB9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.BoundsControl.BoundsControl::CreateRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControl_CreateRig_m51078C730147B68617E770C7869283DD43427AD7 (BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.LayoutAnchor Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::get_Anchor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridObjectCollection_get_Anchor_mB6FA34EA4A07AFBF05A654C44B418EA451EE2B47_inline (GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.String[] System.Enum::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enum_GetNames_mA16B3D5DABC2AE21290B05053660F925DBFF6D94 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_Anchor(Microsoft.MixedReality.Toolkit.Utilities.LayoutAnchor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridObjectCollection_set_Anchor_m9DF757AF4A59A3E60B42A2C1ABF0331B878973CB_inline (GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridObjectLayoutControl_UpdateUI_m92C6BA426052AC25EB90F414934D11D4CC289B37 (GridObjectLayoutControl_t83248AA1F700E00F0BA07A4A0706DFED0961DB61* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl::TestAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GridObjectLayoutControl_TestAnchors_m460F0482E8D73A8E9749B93D35D1B8734D88825F (GridObjectLayoutControl_t83248AA1F700E00F0BA07A4A0706DFED0961DB61* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestAnchorsU3Ed__7__ctor_mD8981BD02A905CEAC06D4E553E23F2BFE65F342F (U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestAnchorsU3Ed__7_U3CU3Em__Finally1_mE68AF14C40C20BB79882F1BC1C1AEF1E272FFD8B (U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestAnchorsU3Ed__7_System_IDisposable_Dispose_m9AE8C2217C68186641F8D54E874B247AD4745E5F (U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection>()
inline GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* GameObject_AddComponent_TisGridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A_m29F9D2888AF518C05291912715B3AB212F6AE74C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_Distance(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridObjectCollection_set_Distance_m33956DDBFE29F4652BD648251B4B115AAB007F4C_inline (GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_CellWidth(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridObjectCollection_set_CellWidth_m460BA037B49D4462ACF2173D95619E0F1B38EB0D_inline (GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_CellHeight(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridObjectCollection_set_CellHeight_mE38DE154245EE05E4D4F0AFF816BA54337C0746F_inline (GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::set_Layout(Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridObjectCollection_set_Layout_m221254CF50167FECC66F496225CA5D15CECF8F71_inline (GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m5D776FFEBC81592B361E4C7AF373297C5DFB46FD (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl::PrintGrid(Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection,System.String,System.String,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridObjectLayoutControl_PrintGrid_mE315C6E513E6E21AB49DDA56E9CE753DB53D39BA (GridObjectLayoutControl_t83248AA1F700E00F0BA07A4A0706DFED0961DB61* __this, GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* ___grid0, String_t* ___prefix1, String_t* ___path2, StringBuilder_t* ___builder3, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m54CE9C47ED974C0589400DA9BC2AB3F7F481595B (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ChangeManipulation::TryStopManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeManipulation_TryStopManipulation_m750D6248316C1A1223BDC8E27529437B2CA8F28C (ChangeManipulation_tB834F15B688C0C56CDD5C05AE9F996F99692390A* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Intersects_m91D6CE48052C56F8519243104C3575738B159531 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.UI.ConstraintManager>()
inline ConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16* GameObject_GetComponent_TisConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16_m8C52CCCAB0ED8CCB6BBA1B3CED54970D65A5DBB2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.UI.ManipulationHandler>()
inline ManipulationHandler_tFA015F7923D30D62CDE4B41B9DE243F7606DDCD2* GameObject_GetComponent_TisManipulationHandler_tFA015F7923D30D62CDE4B41B9DE243F7606DDCD2_m1BEF468BF3902F3889885F619107BB8B37C0F6CE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ManipulationHandler_tFA015F7923D30D62CDE4B41B9DE243F7606DDCD2* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.UI.ObjectManipulator>()
inline ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* GameObject_GetComponent_TisObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38_m09C4ED8F5CEB0A2E8253BE11A2756FFF2B9C3972 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.UI.ManipulationHandler::ForceEndManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationHandler_ForceEndManipulation_m2A6867CA91D17A0344FCF6892B9C245D9E151085 (ManipulationHandler_tFA015F7923D30D62CDE4B41B9DE243F7606DDCD2* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::ForceEndManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectManipulator_ForceEndManipulation_m23CC2FA2F6F525CBF3D51A8C7C85CD76870032BF (ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.Examples.Demos.IProgressIndicatorDemoObject>()
inline RuntimeObject* GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::HandleButtonClick(Microsoft.MixedReality.Toolkit.Examples.Demos.IProgressIndicatorDemoObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressIndicatorDemo_HandleButtonClick_m546F9C1E1AC95322A60BF294E495858C2D3113EE (ProgressIndicatorDemo_t6A221029ABCFDCE0E67949979A34B87AE2545D01* __this, RuntimeObject* ___demoObject0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.UI.IProgressIndicator>()
inline RuntimeObject* GameObject_GetComponent_TisIProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_mAD8800425B8EFE6CF373EB80E9FA62FCEAAF2111 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation/<StartProgressBehavior>d__5>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_mE46C5542344553A9B10B135CFC9C86DBB40EE8F7 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_mE46C5542344553A9B10B135CFC9C86DBB40EE8F7_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation/<StartProgressBehavior>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m440D5CA2B7C09487CAF47729BD1D4F2FA0B62142 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m440D5CA2B7C09487CAF47729BD1D4F2FA0B62142_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable System.Threading.Tasks.Task::Yield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB Task_Yield_m243FF1482B112E594401BAC859F9084753C4E653 (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter System.Runtime.CompilerServices.YieldAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E (YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation/<StartProgressBehavior>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m7D521DCD37A0807B9F0F509D9008390D25EE2042 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m7D521DCD37A0807B9F0F509D9008390D25EE2042_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation/<StartProgressBehavior>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartProgressBehaviorU3Ed__5_MoveNext_m843CD393E4AEA0499AC8C62E669E7FE3FE902BFB (U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation/<StartProgressBehavior>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartProgressBehaviorU3Ed__5_SetStateMachine_m96AD4A4F814E2FF54ADAC5BE1C8586F426D9754A (U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenSource::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<StartProgressBehavior>d__8>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_mD0F890FF69CEFBF7311775B3389891F726CE372C (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_mD0F890FF69CEFBF7311775B3389891F726CE372C_gshared)(__this, ___stateMachine0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<AsyncMethod>d__9>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE_m85A63B32C9F662E3DFFB7C52C6829166F74CF2F2 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE_m85A63B32C9F662E3DFFB7C52C6829166F74CF2F2_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<StartProgressBehavior>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_m83516A031D181675B8B1A3723A67E5D34FDC32C2 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_m83516A031D181675B8B1A3723A67E5D34FDC32C2_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Threading.CancellationTokenSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4 (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod::AsyncMethod(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ProgressIndicatorDemoAsyncMethod_AsyncMethod_m55E60A89B6C77FA28494E3316906DB72B7280012 (ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___token0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<StartProgressBehavior>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_mD4B35CE9ADF86AD6556E99A5159113134AD0AFA2 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_mD4B35CE9ADF86AD6556E99A5159113134AD0AFA2_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<StartProgressBehavior>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartProgressBehaviorU3Ed__8_MoveNext_m62CDA140A7821419665E435C3EA5D8FB59D572AF (U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<StartProgressBehavior>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartProgressBehaviorU3Ed__8_SetStateMachine_m19D69CC62B297B3B0B8BAD06E33CEDF96E276168 (U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<AsyncMethod>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE_mC08BDBFB89C539E7DEB910A6AA058F19FF6DFCB1 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE_mC08BDBFB89C539E7DEB910A6AA058F19FF6DFCB1_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<AsyncMethod>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncMethodU3Ed__9_MoveNext_m575F58B2568865FC9699CCBF4B5BA4F73A3416DE (U3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<AsyncMethod>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncMethodU3Ed__9_SetStateMachine_m0424443862F055A35A9F8D61AAD3A0CD2E1D4270 (U3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m075D11E370377454E0561D964686B54D9C31DB2A (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m075D11E370377454E0561D964686B54D9C31DB2A_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m0C3B36CE8FC327CBA8AB41A8A906789371CA131A (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m0C3B36CE8FC327CBA8AB41A8A906789371CA131A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m677C7463D68320CE2B243236CDD169ECC6C4CBD8 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___awaiter0, U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m677C7463D68320CE2B243236CDD169ECC6C4CBD8_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// Microsoft.MixedReality.Toolkit.SceneSystem.IMixedRealitySceneSystem Microsoft.MixedReality.Toolkit.CoreServices::get_SceneSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_SceneSystem_m09FA120251C7BF6C97926A14990FC510A1385520 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartProgressBehaviorU3Ed__4_MoveNext_m9A41723CF8D8E4172E0C693C410C7CA572BA0F70 (U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartProgressBehaviorU3Ed__4_SetStateMachine_m741306E6BDBB3CB825E7EDD5CD8966E7E1C2E19B (U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.UI.SliderEventData::get_NewValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SliderEventData_get_NewValue_m5E0B8480E8D0AEAEBCB2AC29ADCFAC8C6F14401F_inline (SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.Message::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676 (Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* __this, const RuntimeMethod* method) ;
// System.Void RosMessageTypes.UnityRoboticsDemo.PosRotMsg::.ctor(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PosRotMsg__ctor_mBFA5CFC096E7746AB5014AA8FFD5219D21697121 (PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* __this, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) ;
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_mA49D63D7CE978914FA91D79DFB5703863F24CE94 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, float* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m021DAEA22795AA327AB9D673B6204E863D363874 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, float ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.PosRotMsg>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF26592C7EF4EAF4A9CDC510509038F254A437284 (Func_2_tB5E220E48E4286DB039FA7EA9E550FF4CAA148E0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB5E220E48E4286DB039FA7EA9E550FF4CAA148E0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::Register<RosMessageTypes.UnityRoboticsDemo.PosRotMsg>(System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,T>,Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic)
inline void MessageRegistry_Register_TisPosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6_m889C983EA2371072FA79C88DA8D44ED334FF7DF3 (String_t* ___rosMessageName0, Func_2_tB5E220E48E4286DB039FA7EA9E550FF4CAA148E0* ___deserialize1, int32_t ___subtopic2, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Func_2_tB5E220E48E4286DB039FA7EA9E550FF4CAA148E0*, int32_t, const RuntimeMethod*))MessageRegistry_Register_TisRuntimeObject_m249582AB586F3157BB2E536B4905C7557B10F290_gshared)(___rosMessageName0, ___deserialize1, ___subtopic2, method);
}
// System.Void RosMessageTypes.UnityRoboticsDemo.UnityColorMsg::.ctor(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityColorMsg__ctor_m85523DC09129963C74D116916A0D3FB69C150E36 (UnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C* __this, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) ;
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m7BB886F522350724AA8560D7349B800804FCD0B2 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, int32_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_mCE95E66B6BFA2E0382A1C65748319D7110B52C6A (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.UnityColorMsg>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEEB43F6403D30323C8C5A23155E89036348E3C9C (Func_2_tF8849497BB86332E0D22F18145E68B6BAB0BD4F7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF8849497BB86332E0D22F18145E68B6BAB0BD4F7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::Register<RosMessageTypes.UnityRoboticsDemo.UnityColorMsg>(System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,T>,Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic)
inline void MessageRegistry_Register_TisUnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C_m0FB666A15FA6F9FC69DC3A43C7A2369B54D84E12 (String_t* ___rosMessageName0, Func_2_tF8849497BB86332E0D22F18145E68B6BAB0BD4F7* ___deserialize1, int32_t ___subtopic2, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Func_2_tF8849497BB86332E0D22F18145E68B6BAB0BD4F7*, int32_t, const RuntimeMethod*))MessageRegistry_Register_TisRuntimeObject_m249582AB586F3157BB2E536B4905C7557B10F290_gshared)(___rosMessageName0, ___deserialize1, ___subtopic2, method);
}
// System.Void RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceRequest::.ctor(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoseServiceRequest__ctor_m4CDFB39FC804570A9CF71422D88B6DBC28D7FEDA (ObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26* __this, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) ;
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer::Read(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDeserializer_Read_m82B22DA76582918DC2FF9771977798BDBF5D49D7 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* __this, String_t** ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m312F6ADF2C641C9B93F4E1FC7D416F60034C9B1C (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, String_t* ___inputString0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceRequest>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE4E77A84C16AD3E5BE79ED6AD95B8D5381AFF9CC (Func_2_t94AC646487397F6CAE12DD4E9754D5EAD663F377* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t94AC646487397F6CAE12DD4E9754D5EAD663F377*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::Register<RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceRequest>(System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,T>,Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic)
inline void MessageRegistry_Register_TisObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26_m3A6F9C134856325A359D07FA10D6CA95D1D0EDDE (String_t* ___rosMessageName0, Func_2_t94AC646487397F6CAE12DD4E9754D5EAD663F377* ___deserialize1, int32_t ___subtopic2, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Func_2_t94AC646487397F6CAE12DD4E9754D5EAD663F377*, int32_t, const RuntimeMethod*))MessageRegistry_Register_TisRuntimeObject_m249582AB586F3157BB2E536B4905C7557B10F290_gshared)(___rosMessageName0, ___deserialize1, ___subtopic2, method);
}
// System.Void RosMessageTypes.Geometry.PoseMsg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseMsg__ctor_m967EC0092480A26AD95D5AADB783A86AAADCDE18 (PoseMsg_t68AFC5A79FA5F4DFAA007467CBD85D1EFD6A53C1* __this, const RuntimeMethod* method) ;
// System.Void RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceResponse::.ctor(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoseServiceResponse__ctor_m9E34677D230FB5C4562944F3AED71F6ED685B697 (ObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A* __this, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) ;
// RosMessageTypes.Geometry.PoseMsg RosMessageTypes.Geometry.PoseMsg::Deserialize(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseMsg_t68AFC5A79FA5F4DFAA007467CBD85D1EFD6A53C1* PoseMsg_Deserialize_m70AA4E25ADC1355DC2A29981574AAF3D6DDD5694 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) ;
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer::Write(Unity.Robotics.ROSTCPConnector.MessageGeneration.Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Write_m613055761C27F6318B64533D2DA22356BEB98317 (MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* __this, Message_tBD8A361BD6D49D4FF433A098AE3E5EE758F160FF* ___message0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceResponse>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1A436C31791AF4C3BC36B5000DA8132F42B279CB (Func_2_t7F82221457BA5B9A80A4C7223171F78F0D85183F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F82221457BA5B9A80A4C7223171F78F0D85183F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::Register<RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceResponse>(System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,T>,Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic)
inline void MessageRegistry_Register_TisObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A_m0870CBAF6FD7B41472F8B5B8F3055351BC1D1147 (String_t* ___rosMessageName0, Func_2_t7F82221457BA5B9A80A4C7223171F78F0D85183F* ___deserialize1, int32_t ___subtopic2, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Func_2_t7F82221457BA5B9A80A4C7223171F78F0D85183F*, int32_t, const RuntimeMethod*))MessageRegistry_Register_TisRuntimeObject_m249582AB586F3157BB2E536B4905C7557B10F290_gshared)(___rosMessageName0, ___deserialize1, ___subtopic2, method);
}
// System.Void RosMessageTypes.UnityRoboticsDemo.PosRotMsg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PosRotMsg__ctor_m53342C953F46717578C632F49D4092BB1AB855D0 (PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* __this, const RuntimeMethod* method) ;
// System.Void RosMessageTypes.UnityRoboticsDemo.PositionServiceRequest::.ctor(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionServiceRequest__ctor_m0AFE70244C806147367672B8DC4C44E8E17F3D30 (PositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249* __this, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) ;
// RosMessageTypes.UnityRoboticsDemo.PosRotMsg RosMessageTypes.UnityRoboticsDemo.PosRotMsg::Deserialize(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* PosRotMsg_Deserialize_m9A70A37AE6697C991201D947CE36D6453E33AE46 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.PositionServiceRequest>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1628826EA47CAC4B0512253F3F51B5CD16037CD4 (Func_2_t61BFBFD6FA3985F5FDE6690A62974114FDCDD333* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t61BFBFD6FA3985F5FDE6690A62974114FDCDD333*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::Register<RosMessageTypes.UnityRoboticsDemo.PositionServiceRequest>(System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,T>,Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic)
inline void MessageRegistry_Register_TisPositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249_mCE0A7CB460C6CAE778B9BDD77D576182575C0CAD (String_t* ___rosMessageName0, Func_2_t61BFBFD6FA3985F5FDE6690A62974114FDCDD333* ___deserialize1, int32_t ___subtopic2, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Func_2_t61BFBFD6FA3985F5FDE6690A62974114FDCDD333*, int32_t, const RuntimeMethod*))MessageRegistry_Register_TisRuntimeObject_m249582AB586F3157BB2E536B4905C7557B10F290_gshared)(___rosMessageName0, ___deserialize1, ___subtopic2, method);
}
// System.Void RosMessageTypes.UnityRoboticsDemo.PositionServiceResponse::.ctor(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionServiceResponse__ctor_m480BD8CDC6092E7D995624334E547A22AC818059 (PositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F* __this, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.UnityRoboticsDemo.PositionServiceResponse>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC4B5587B2B3C2BC191525DD1874EF3372B74FD48 (Func_2_t2E8127890CD2554569E06D23C316FAB42D7D71E4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2E8127890CD2554569E06D23C316FAB42D7D71E4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::Register<RosMessageTypes.UnityRoboticsDemo.PositionServiceResponse>(System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,T>,Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic)
inline void MessageRegistry_Register_TisPositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F_mC574A5D9F05283E94D13D1929097ED16497FF523 (String_t* ___rosMessageName0, Func_2_t2E8127890CD2554569E06D23C316FAB42D7D71E4* ___deserialize1, int32_t ___subtopic2, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Func_2_t2E8127890CD2554569E06D23C316FAB42D7D71E4*, int32_t, const RuntimeMethod*))MessageRegistry_Register_TisRuntimeObject_m249582AB586F3157BB2E536B4905C7557B10F290_gshared)(___rosMessageName0, ___deserialize1, ___subtopic2, method);
}
// System.Void RosMessageTypes.Sensor.PointCloud2Msg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloud2Msg__ctor_mD26B0F3FE5A1033BCD1E8DF17FC5CF3D9F8E5AF5 (PointCloud2Msg_tE3DF4D4C7466D88C9936CF9A5DA33F09D7CA204E* __this, const RuntimeMethod* method) ;
// System.Void RosMessageTypes.Mhy16.LabelPCLMsg::.ctor(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LabelPCLMsg__ctor_m5EF6F0A17D9DD8143C28F1CB88234EE79A61AA39 (LabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F* __this, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) ;
// RosMessageTypes.Sensor.PointCloud2Msg RosMessageTypes.Sensor.PointCloud2Msg::Deserialize(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointCloud2Msg_tE3DF4D4C7466D88C9936CF9A5DA33F09D7CA204E* PointCloud2Msg_Deserialize_m29EF41F4F0189A76F0E76A719AF11134E6EF0DA1 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.Mhy16.LabelPCLMsg>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m916FF960EC68E168206772530F77987680129328 (Func_2_tF97AD7AB25E55D162ABE644CC94BD6AEB26884EA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF97AD7AB25E55D162ABE644CC94BD6AEB26884EA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::Register<RosMessageTypes.Mhy16.LabelPCLMsg>(System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,T>,Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic)
inline void MessageRegistry_Register_TisLabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F_mFE03A397B21794990D4C86FAF3B3175E79025914 (String_t* ___rosMessageName0, Func_2_tF97AD7AB25E55D162ABE644CC94BD6AEB26884EA* ___deserialize1, int32_t ___subtopic2, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Func_2_tF97AD7AB25E55D162ABE644CC94BD6AEB26884EA*, int32_t, const RuntimeMethod*))MessageRegistry_Register_TisRuntimeObject_m249582AB586F3157BB2E536B4905C7557B10F290_gshared)(___rosMessageName0, ___deserialize1, ___subtopic2, method);
}
// System.Void RosMessageTypes.Geometry.TwistMsg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwistMsg__ctor_mD7927B2FD276F0ED868DDB1276742BA73421BA60 (TwistMsg_tCB222F66966F92E11D7B0AEBFF7312A02195D103* __this, const RuntimeMethod* method) ;
// System.Void RosMessageTypes.CustomInterfaces.TransformationMsg::.ctor(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformationMsg__ctor_m8172C739B971E4D93310796B2F97CCFAD75652F1 (TransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A* __this, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) ;
// RosMessageTypes.Geometry.TwistMsg RosMessageTypes.Geometry.TwistMsg::Deserialize(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TwistMsg_tCB222F66966F92E11D7B0AEBFF7312A02195D103* TwistMsg_Deserialize_m7DFA2383A90817F5807154E73B6F4B51D31C23D4 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,RosMessageTypes.CustomInterfaces.TransformationMsg>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEFBEFEDC7DDCC6D4235795A1944493AAFF0B149C (Func_2_t7A6883C6BFCBE3E954623EC86AD6CA5FBB1EAD1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7A6883C6BFCBE3E954623EC86AD6CA5FBB1EAD1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageRegistry::Register<RosMessageTypes.CustomInterfaces.TransformationMsg>(System.String,System.Func`2<Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer,T>,Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSubtopic)
inline void MessageRegistry_Register_TisTransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A_m1AD7DC1080A3B6C41AC4E33E724ADD906BCF6213 (String_t* ___rosMessageName0, Func_2_t7A6883C6BFCBE3E954623EC86AD6CA5FBB1EAD1B* ___deserialize1, int32_t ___subtopic2, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Func_2_t7A6883C6BFCBE3E954623EC86AD6CA5FBB1EAD1B*, int32_t, const RuntimeMethod*))MessageRegistry_Register_TisRuntimeObject_m249582AB586F3157BB2E536B4905C7557B10F290_gshared)(___rosMessageName0, ___deserialize1, ___subtopic2, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.Rotator::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_Rotate_m9C30728AA6DDBB6414F95AD3C2F4EED9BB56F52F (Rotator_tD661E3A479EEDC39492BA31D09D81C15D6CBA1AA* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(0, angle, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1 = __this->___angle_4;
		NullCheck(L_0);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_0, (0.0f), L_1, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.Rotator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator__ctor_mDC4DCF4B852F99E46D355FF0F80732352E4593AB (Rotator_tD661E3A479EEDC39492BA31D09D81C15D6CBA1AA* __this, const RuntimeMethod* method) 
{
	{
		// public float angle = 45f;
		__this->___angle_4 = (45.0f);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.InputDataExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDataExample_Update_m42D3EDD3EA92C407C6EAAA9C8C44A12EE5026A90 (InputDataExample_t2595EFEFC54C3E25E46AADB78D7D3EB54DA154E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxisType_tB348B2B7E813A5E50E48FF0B55E0751351C67FA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceInputType_t99CD658FF01DFACCDBE7C08908F919F16798F689_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m71CAA2062645DBD932D8214BDEDB18585DE55A54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8B090EFB59282696217E0C4BF4772DF044BEBAAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m82FE574FEF92EE2D1465259DDBAB99634137B46F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handedness_t8F3D346D04DED9C8F19FDD0EAB3DFFF385E485FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_mFD270DB64CA6CFBBEC0204BA3883F03DEB325CCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSource_t9E9DFD08DEE578702833FF502590A1E0476E59E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSourceType_t00ECE49D73629782019DE8F9BB0D4824459B9CA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_m3A1DED7BC6DA1FC4B308F9760732B449AACB8FA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m99004F229E18A73A3BF435B3645EEA2EF787C400_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D6713E74DC7CBA240CD7666DD30B8FB477E846);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36E8F5BEBE77E9972EA1D70C476B8ED00E93A34F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F24BE735A949034EAB8F00D68AB3579AD172ADD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral429D8F132170CDADF68E7EFEA1640AD07E6A5409);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral722BE640E7BBFC94C531C4DA1609983A47944102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B8E54C3676191FC4187DC8D5C25CC3C0E79CA72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral813FC0BDD0E7968754809DDBB6266A6258CBF23A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B844E061FC69602E303E7B518701EAA7843F4A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB02F9D12DFE8125F749C81D01E2575414FA3F771);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE765BBCE62EF135C02429EC2775052977CEF5E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEAD704F1DD1A17350EF8AEF9D41A292BDA9AD34);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* V_8 = NULL;
	MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	float V_15 = 0.0f;
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// foreach (var tuple in inputSources)
		Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD* L_1 = __this->___inputSources_6;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0118;
	}

IL_0014:
	{
		// foreach (var tuple in inputSources)
		Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// var sourceType = tuple.Item1;
		Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375* L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Tuple_2_get_Item1_m3A1DED7BC6DA1FC4B308F9760732B449AACB8FA2_inline(L_6, Tuple_2_get_Item1_m3A1DED7BC6DA1FC4B308F9760732B449AACB8FA2_RuntimeMethod_var);
		V_3 = L_7;
		// var handedness = tuple.Item2;
		NullCheck(L_6);
		uint8_t L_8;
		L_8 = Tuple_2_get_Item2_m99004F229E18A73A3BF435B3645EEA2EF787C400_inline(L_6, Tuple_2_get_Item2_m99004F229E18A73A3BF435B3645EEA2EF787C400_RuntimeMethod_var);
		V_4 = L_8;
		// sb.Append(sourceType.ToString() + " ");
		StringBuilder_t* L_9 = V_0;
		Il2CppFakeBox<int32_t> L_10(InputSourceType_t00ECE49D73629782019DE8F9BB0D4824459B9CA8_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_11;
		L_11 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_10), NULL);
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_11, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		NullCheck(L_9);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, L_12, NULL);
		// if (handedness != Handedness.Any)
		uint8_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)7)))
		{
			goto IL_005c;
		}
	}
	{
		// sb.Append(handedness.ToString());
		StringBuilder_t* L_15 = V_0;
		Il2CppFakeBox<uint8_t> L_16(Handedness_t8F3D346D04DED9C8F19FDD0EAB3DFFF385E485FF_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_17;
		L_17 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_16), NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
	}

IL_005c:
	{
		// sb.Append(": ");
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, NULL);
		// if (InputRayUtils.TryGetRay(sourceType, handedness, out myRay))
		int32_t L_21 = V_3;
		uint8_t L_22 = V_4;
		bool L_23;
		L_23 = InputRayUtils_TryGetRay_m39E96D7C92B820622DF5CB227DDA77EBCED2AA75(L_21, L_22, (&V_5), NULL);
		if (!L_23)
		{
			goto IL_0101;
		}
	}
	{
		// sb.Append($"pos: ({myRay.origin.x:F2}, {myRay.origin.y:F2}, {myRay.origin.z:F2}");
		StringBuilder_t* L_24 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_5), NULL);
		float L_26 = L_25.___x_2;
		float L_27 = L_26;
		RuntimeObject* L_28 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_5), NULL);
		float L_30 = L_29.___y_3;
		float L_31 = L_30;
		RuntimeObject* L_32 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_5), NULL);
		float L_34 = L_33.___z_4;
		float L_35 = L_34;
		RuntimeObject* L_36 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37;
		L_37 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral27D6713E74DC7CBA240CD7666DD30B8FB477E846, L_28, L_32, L_36, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_37, NULL);
		// sb.Append($" forward: ({myRay.direction.x:F2}, {myRay.direction.y:F2}, {myRay.direction.z:F2}");
		StringBuilder_t* L_39 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_5), NULL);
		float L_41 = L_40.___x_2;
		float L_42 = L_41;
		RuntimeObject* L_43 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_5), NULL);
		float L_45 = L_44.___y_3;
		float L_46 = L_45;
		RuntimeObject* L_47 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_5), NULL);
		float L_49 = L_48.___z_4;
		float L_50 = L_49;
		RuntimeObject* L_51 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_50);
		String_t* L_52;
		L_52 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteralCE765BBCE62EF135C02429EC2775052977CEF5E5, L_43, L_47, L_51, NULL);
		NullCheck(L_39);
		StringBuilder_t* L_53;
		L_53 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_39, L_52, NULL);
		goto IL_010d;
	}

IL_0101:
	{
		// sb.Append(" not available");
		StringBuilder_t* L_54 = V_0;
		NullCheck(L_54);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_54, _stringLiteral429D8F132170CDADF68E7EFEA1640AD07E6A5409, NULL);
	}

IL_010d:
	{
		// sb.AppendLine();
		StringBuilder_t* L_56 = V_0;
		NullCheck(L_56);
		StringBuilder_t* L_57;
		L_57 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_56, NULL);
		int32_t L_58 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_0118:
	{
		// foreach (var tuple in inputSources)
		int32_t L_59 = V_2;
		Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD* L_60 = V_1;
		NullCheck(L_60);
		if ((((int32_t)L_59) < ((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		// inputUtilsText.text = sb.ToString();
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_61 = __this->___inputUtilsText_4;
		StringBuilder_t* L_62 = V_0;
		NullCheck(L_62);
		String_t* L_63;
		L_63 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_62);
		NullCheck(L_61);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_61, L_63, NULL);
		// sb.Clear();
		StringBuilder_t* L_64 = V_0;
		NullCheck(L_64);
		StringBuilder_t* L_65;
		L_65 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_64, NULL);
		// foreach (var controller in CoreServices.InputSystem.DetectedControllers)
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_66;
		L_66 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
		NullCheck(L_66);
		HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* L_67;
		L_67 = InterfaceFuncInvoker0< HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* >::Invoke(5 /* System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_DetectedControllers() */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_66);
		NullCheck(L_67);
		Enumerator_t2F1D0A4895829A663556DF261FAA05673B05D540 L_68;
		L_68 = HashSet_1_GetEnumerator_mFD270DB64CA6CFBBEC0204BA3883F03DEB325CCA(L_67, HashSet_1_GetEnumerator_mFD270DB64CA6CFBBEC0204BA3883F03DEB325CCA_RuntimeMethod_var);
		V_6 = L_68;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02b9:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m71CAA2062645DBD932D8214BDEDB18585DE55A54((&V_6), Enumerator_Dispose_m71CAA2062645DBD932D8214BDEDB18585DE55A54_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_02ab_1;
			}

IL_014f_1:
			{
				// foreach (var controller in CoreServices.InputSystem.DetectedControllers)
				RuntimeObject* L_69;
				L_69 = Enumerator_get_Current_m82FE574FEF92EE2D1465259DDBAB99634137B46F_inline((&V_6), Enumerator_get_Current_m82FE574FEF92EE2D1465259DDBAB99634137B46F_RuntimeMethod_var);
				V_7 = L_69;
				// sb.AppendLine("Inputs for " + controller.InputSource.SourceName);
				StringBuilder_t* L_70 = V_0;
				RuntimeObject* L_71 = V_7;
				NullCheck(L_71);
				RuntimeObject* L_72;
				L_72 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var, L_71);
				NullCheck(L_72);
				String_t* L_73;
				L_73 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Microsoft.MixedReality.Toolkit.IMixedRealityEventSource::get_SourceName() */, IMixedRealityEventSource_t9E9DFD08DEE578702833FF502590A1E0476E59E1_il2cpp_TypeInfo_var, L_72);
				String_t* L_74;
				L_74 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral813FC0BDD0E7968754809DDBB6266A6258CBF23A, L_73, NULL);
				NullCheck(L_70);
				StringBuilder_t* L_75;
				L_75 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_70, L_74, NULL);
				// sb.AppendLine();
				StringBuilder_t* L_76 = V_0;
				NullCheck(L_76);
				StringBuilder_t* L_77;
				L_77 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_76, NULL);
				// foreach (MixedRealityInteractionMapping inputMapping in controller.Interactions)
				RuntimeObject* L_78 = V_7;
				NullCheck(L_78);
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_79;
				L_79 = InterfaceFuncInvoker0< MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Interactions() */, IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var, L_78);
				V_8 = L_79;
				V_2 = 0;
				goto IL_029a_1;
			}

IL_018c_1:
			{
				// foreach (MixedRealityInteractionMapping inputMapping in controller.Interactions)
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_80 = V_8;
				int32_t L_81 = V_2;
				NullCheck(L_80);
				int32_t L_82 = L_81;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
				V_9 = L_83;
				// sb.AppendLine("\tDescription: " + inputMapping.Description);
				StringBuilder_t* L_84 = V_0;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_85 = V_9;
				NullCheck(L_85);
				String_t* L_86;
				L_86 = MixedRealityInteractionMapping_get_Description_mB4C6619EF2F1E6AEE57C98A24F2C90A0FBCACD50_inline(L_85, NULL);
				String_t* L_87;
				L_87 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB02F9D12DFE8125F749C81D01E2575414FA3F771, L_86, NULL);
				NullCheck(L_84);
				StringBuilder_t* L_88;
				L_88 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_84, L_87, NULL);
				// sb.Append("\tAxisType: " + inputMapping.AxisType);
				StringBuilder_t* L_89 = V_0;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_90 = V_9;
				NullCheck(L_90);
				int32_t L_91;
				L_91 = MixedRealityInteractionMapping_get_AxisType_mCD3EA297AACF47BE8DFCCDCEBB0ABD2F5933EA40_inline(L_90, NULL);
				V_10 = L_91;
				Il2CppFakeBox<int32_t> L_92(AxisType_tB348B2B7E813A5E50E48FF0B55E0751351C67FA9_il2cpp_TypeInfo_var, (&V_10));
				String_t* L_93;
				L_93 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_92), NULL);
				String_t* L_94;
				L_94 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral36E8F5BEBE77E9972EA1D70C476B8ED00E93A34F, L_93, NULL);
				NullCheck(L_89);
				StringBuilder_t* L_95;
				L_95 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_89, L_94, NULL);
				// sb.Append("\tInputType: " + inputMapping.InputType);
				StringBuilder_t* L_96 = V_0;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_97 = V_9;
				NullCheck(L_97);
				int32_t L_98;
				L_98 = MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline(L_97, NULL);
				V_11 = L_98;
				Il2CppFakeBox<int32_t> L_99(DeviceInputType_t99CD658FF01DFACCDBE7C08908F919F16798F689_il2cpp_TypeInfo_var, (&V_11));
				String_t* L_100;
				L_100 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_99), NULL);
				String_t* L_101;
				L_101 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral722BE640E7BBFC94C531C4DA1609983A47944102, L_100, NULL);
				NullCheck(L_96);
				StringBuilder_t* L_102;
				L_102 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_96, L_101, NULL);
				// sb.Append("\tPositionData: " + inputMapping.PositionData);
				StringBuilder_t* L_103 = V_0;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_104 = V_9;
				NullCheck(L_104);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
				L_105 = MixedRealityInteractionMapping_get_PositionData_m189D602B6846B225CBFBAB5C64699469900972E5_inline(L_104, NULL);
				V_12 = L_105;
				String_t* L_106;
				L_106 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_12), NULL);
				String_t* L_107;
				L_107 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralFEAD704F1DD1A17350EF8AEF9D41A292BDA9AD34, L_106, NULL);
				NullCheck(L_103);
				StringBuilder_t* L_108;
				L_108 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_103, L_107, NULL);
				// sb.Append("\tRotationData: " + inputMapping.RotationData);
				StringBuilder_t* L_109 = V_0;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_110 = V_9;
				NullCheck(L_110);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_111;
				L_111 = MixedRealityInteractionMapping_get_RotationData_m37593A681A7F3DF462819D9576EF74F8FE7DD43D_inline(L_110, NULL);
				V_13 = L_111;
				String_t* L_112;
				L_112 = Quaternion_ToString_mC5BD5DEF60FCA4A38924462A5C4440ECFCF934C4((&V_13), NULL);
				String_t* L_113;
				L_113 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral9B844E061FC69602E303E7B518701EAA7843F4A7, L_112, NULL);
				NullCheck(L_109);
				StringBuilder_t* L_114;
				L_114 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_109, L_113, NULL);
				// sb.Append("\tBoolData: " + inputMapping.BoolData);
				StringBuilder_t* L_115 = V_0;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_116 = V_9;
				NullCheck(L_116);
				bool L_117;
				L_117 = MixedRealityInteractionMapping_get_BoolData_m69F4D6E88FF5DF204C3C38426A2BCD74AB7060CB_inline(L_116, NULL);
				V_14 = L_117;
				String_t* L_118;
				L_118 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_14), NULL);
				String_t* L_119;
				L_119 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3F24BE735A949034EAB8F00D68AB3579AD172ADD, L_118, NULL);
				NullCheck(L_115);
				StringBuilder_t* L_120;
				L_120 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_115, L_119, NULL);
				// sb.Append("\tFloatData: " + inputMapping.FloatData);
				StringBuilder_t* L_121 = V_0;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_122 = V_9;
				NullCheck(L_122);
				float L_123;
				L_123 = MixedRealityInteractionMapping_get_FloatData_m427535AC6E511D46014CADA75E2410FA4CE5C903_inline(L_122, NULL);
				V_15 = L_123;
				String_t* L_124;
				L_124 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_15), NULL);
				String_t* L_125;
				L_125 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7B8E54C3676191FC4187DC8D5C25CC3C0E79CA72, L_124, NULL);
				NullCheck(L_121);
				StringBuilder_t* L_126;
				L_126 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_121, L_125, NULL);
				// sb.AppendLine();
				StringBuilder_t* L_127 = V_0;
				NullCheck(L_127);
				StringBuilder_t* L_128;
				L_128 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_127, NULL);
				// sb.AppendLine();
				StringBuilder_t* L_129 = V_0;
				NullCheck(L_129);
				StringBuilder_t* L_130;
				L_130 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_129, NULL);
				int32_t L_131 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_131, 1));
			}

IL_029a_1:
			{
				// foreach (MixedRealityInteractionMapping inputMapping in controller.Interactions)
				int32_t L_132 = V_2;
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_133 = V_8;
				NullCheck(L_133);
				if ((((int32_t)L_132) < ((int32_t)((int32_t)(((RuntimeArray*)L_133)->max_length)))))
				{
					goto IL_018c_1;
				}
			}
			{
				// sb.AppendLine();
				StringBuilder_t* L_134 = V_0;
				NullCheck(L_134);
				StringBuilder_t* L_135;
				L_135 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_134, NULL);
			}

IL_02ab_1:
			{
				// foreach (var controller in CoreServices.InputSystem.DetectedControllers)
				bool L_136;
				L_136 = Enumerator_MoveNext_m8B090EFB59282696217E0C4BF4772DF044BEBAAB((&V_6), Enumerator_MoveNext_m8B090EFB59282696217E0C4BF4772DF044BEBAAB_RuntimeMethod_var);
				if (L_136)
				{
					goto IL_014f_1;
				}
			}
			{
				goto IL_02c7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02c7:
	{
		// rawDataText.text = sb.ToString();
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_137 = __this->___rawDataText_5;
		StringBuilder_t* L_138 = V_0;
		NullCheck(L_138);
		String_t* L_139;
		L_139 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_138);
		NullCheck(L_137);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_137, L_139, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.InputDataExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDataExample_Start_m2BE6957A24DB43264CF4BC5DF4AEA2B219D8CC35 (InputDataExample_t2595EFEFC54C3E25E46AADB78D7D3EB54DA154E4* __this, const RuntimeMethod* method) 
{
	{
		// PointerUtils.SetGazePointerBehavior(PointerBehavior.AlwaysOff);
		PointerUtils_SetGazePointerBehavior_mDD11B1492339F30F7189EE92CC7C6BAA999FD831(2, NULL);
		// PointerUtils.SetHandRayPointerBehavior(PointerBehavior.AlwaysOff);
		PointerUtils_SetHandRayPointerBehavior_m1B78E33A766DFEF79BA0D41DA660E7ECC4123752(2, 7, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.InputDataExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDataExample__ctor_mE2D52779029ADD0152A1ECD4973935F9F8371B60 (InputDataExample_t2595EFEFC54C3E25E46AADB78D7D3EB54DA154E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2__ctor_m91C82BB401A8205ACFBDEFB4918ECC60687FF73D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Tuple<InputSourceType, Handedness>[] inputSources = new Tuple<InputSourceType, Handedness>[]
		// {
		//     new Tuple<InputSourceType, Handedness>(InputSourceType.Controller, Handedness.Right) ,
		//     new Tuple<InputSourceType, Handedness>(InputSourceType.Controller, Handedness.Left) ,
		//     new Tuple<InputSourceType, Handedness>(InputSourceType.Eyes, Handedness.Any) ,
		//     new Tuple<InputSourceType, Handedness>(InputSourceType.Head, Handedness.Any) ,
		//     new Tuple<InputSourceType, Handedness>(InputSourceType.Hand, Handedness.Left) ,
		//     new Tuple<InputSourceType, Handedness>(InputSourceType.Hand, Handedness.Right)
		// };
		Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD* L_0 = (Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD*)(Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD*)SZArrayNew(Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD_il2cpp_TypeInfo_var, (uint32_t)6);
		Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD* L_1 = L_0;
		Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375* L_2 = (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375*)il2cpp_codegen_object_new(Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Tuple_2__ctor_m91C82BB401A8205ACFBDEFB4918ECC60687FF73D(L_2, 2, 2, Tuple_2__ctor_m91C82BB401A8205ACFBDEFB4918ECC60687FF73D_RuntimeMethod_var);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375*)L_2);
		Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD* L_3 = L_1;
		Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375* L_4 = (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375*)il2cpp_codegen_object_new(Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Tuple_2__ctor_m91C82BB401A8205ACFBDEFB4918ECC60687FF73D(L_4, 2, 1, Tuple_2__ctor_m91C82BB401A8205ACFBDEFB4918ECC60687FF73D_RuntimeMethod_var);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375*)L_4);
		Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD* L_5 = L_3;
		Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375* L_6 = (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375*)il2cpp_codegen_object_new(Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Tuple_2__ctor_m91C82BB401A8205ACFBDEFB4918ECC60687FF73D(L_6, 5, 7, Tuple_2__ctor_m91C82BB401A8205ACFBDEFB4918ECC60687FF73D_RuntimeMethod_var);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375*)L_6);
		Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD* L_7 = L_5;
		Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375* L_8 = (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375*)il2cpp_codegen_object_new(Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Tuple_2__ctor_m91C82BB401A8205ACFBDEFB4918ECC60687FF73D(L_8, 4, 7, Tuple_2__ctor_m91C82BB401A8205ACFBDEFB4918ECC60687FF73D_RuntimeMethod_var);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375*)L_8);
		Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD* L_9 = L_7;
		Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375* L_10 = (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375*)il2cpp_codegen_object_new(Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Tuple_2__ctor_m91C82BB401A8205ACFBDEFB4918ECC60687FF73D(L_10, 1, 1, Tuple_2__ctor_m91C82BB401A8205ACFBDEFB4918ECC60687FF73D_RuntimeMethod_var);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375*)L_10);
		Tuple_2U5BU5D_tF17785BDA1FB0F20445934231D49E609DBFBCAAD* L_11 = L_9;
		Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375* L_12 = (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375*)il2cpp_codegen_object_new(Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Tuple_2__ctor_m91C82BB401A8205ACFBDEFB4918ECC60687FF73D(L_12, 1, 2, Tuple_2__ctor_m91C82BB401A8205ACFBDEFB4918ECC60687FF73D_RuntimeMethod_var);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Tuple_2_tEA48FA3FB6F09278C2B7C83AA229BC1A2791E375*)L_12);
		__this->___inputSources_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputSources_6), (void*)L_11);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.InputDataExampleGizmo::SetIsDataAvailable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDataExampleGizmo_SetIsDataAvailable_m7A9DF9F25D6D16DD610E5FA495D325626C41CA76 (InputDataExampleGizmo_tD48249BAD6F7C31601CC90A79D8CA8DD9B2ED9FB* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (value != isDataAvailable)
		bool L_0 = ___value0;
		bool L_1 = __this->___isDataAvailable_6;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0027;
		}
	}
	{
		// foreach (var item in GetComponentsInChildren<Renderer>())
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_2;
		L_2 = Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7(__this, Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0021;
	}

IL_0014:
	{
		// foreach (var item in GetComponentsInChildren<Renderer>())
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// item.enabled = value;
		bool L_7 = ___value0;
		NullCheck(L_6);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_6, L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0021:
	{
		// foreach (var item in GetComponentsInChildren<Renderer>())
		int32_t L_9 = V_1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0014;
		}
	}

IL_0027:
	{
		// isDataAvailable = value;
		bool L_11 = ___value0;
		__this->___isDataAvailable_6 = L_11;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.InputDataExampleGizmo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDataExampleGizmo_Update_m5FEDB21DF2A5124A80A44A77E00DAA7920C57694 (InputDataExampleGizmo_tD48249BAD6F7C31601CC90A79D8CA8DD9B2ED9FB* __this, const RuntimeMethod* method) 
{
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (InputRayUtils.TryGetRay(sourceType, handedness, out myRay))
		int32_t L_0 = __this->___sourceType_4;
		uint8_t L_1 = __this->___handedness_5;
		bool L_2;
		L_2 = InputRayUtils_TryGetRay_m39E96D7C92B820622DF5CB227DDA77EBCED2AA75(L_0, L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		// transform.localPosition = myRay.origin;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_0), NULL);
		NullCheck(L_3);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_3, L_4, NULL);
		// transform.localRotation = Quaternion.LookRotation(myRay.direction, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_6, L_7, NULL);
		NullCheck(L_5);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_5, L_8, NULL);
		// SetIsDataAvailable(true);
		InputDataExampleGizmo_SetIsDataAvailable_m7A9DF9F25D6D16DD610E5FA495D325626C41CA76(__this, (bool)1, NULL);
		return;
	}

IL_004b:
	{
		// SetIsDataAvailable(false);
		InputDataExampleGizmo_SetIsDataAvailable_m7A9DF9F25D6D16DD610E5FA495D325626C41CA76(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.InputDataExampleGizmo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDataExampleGizmo__ctor_mB0E72B20C8C8833255B0E6330E8EE1B83DD2C9BA (InputDataExampleGizmo_tD48249BAD6F7C31601CC90A79D8CA8DD9B2ED9FB* __this, const RuntimeMethod* method) 
{
	{
		// private bool isDataAvailable = true;
		__this->___isDataAvailable_6 = (bool)1;
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SpawnOnPointerEvent::Spawn(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnOnPointerEvent_Spawn_m28A42E905B34B797BEDB1276B50EE00C790BD76F (SpawnOnPointerEvent_t4192231F2213C31C5FA27A9AAC7D99C8E8F96A0A* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerResult_t7778124D479BBC1920888EC74BB907B9B569599F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (PrefabToSpawn != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PrefabToSpawn_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		// var result = eventData.Pointer.Result;
		MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* L_2 = ___eventData0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MixedRealityPointerEventData_get_Pointer_mE5664622195651CF4C2DC3CEAAF99E3823B74E82_inline(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
		// Instantiate(PrefabToSpawn, result.Details.Point, Quaternion.LookRotation(result.Details.Normal));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___PrefabToSpawn_4;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 L_7;
		L_7 = InterfaceFuncInvoker0< FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_Details() */, IPointerResult_t7778124D479BBC1920888EC74BB907B9B569599F_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = FocusDetails_get_Point_mED97A47BC407BF95930337DF61EE88143661B89B_inline((&V_1), NULL);
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 L_10;
		L_10 = InterfaceFuncInvoker0< FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_Details() */, IPointerResult_t7778124D479BBC1920888EC74BB907B9B569599F_il2cpp_TypeInfo_var, L_9);
		V_1 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = FocusDetails_get_Normal_mE74AC45EDDA7AC6432BD7C0F27928DDF75192242_inline((&V_1), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_5, L_8, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SpawnOnPointerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnOnPointerEvent__ctor_mF4501DBA5DCB61B7BDF97C252644013AAC1BB242 (SpawnOnPointerEvent_t4192231F2213C31C5FA27A9AAC7D99C8E8F96A0A* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.PrimaryPointerHandlerExample::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimaryPointerHandlerExample_OnEnable_m373469C4B43BEA03EC91C4F85F846A0CA2557D44 (PrimaryPointerHandlerExample_tB2A0E6E868757817A2F02AF60A7E532A5027414A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusProvider_t2766EE713C9E441F03CA32A27287C1EF1713AE00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimaryPointerChangedHandler_t1C9E0CDB5009F770A464C9126C67A745E2D544E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimaryPointerHandlerExample_OnPrimaryPointerChanged_m056DBFB929005ED8B7AB9276FE9D02B0048A87E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// CoreServices.InputSystem?.FocusProvider?.SubscribeToPrimaryPointerChanged(OnPrimaryPointerChanged, true);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_FocusProvider() */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B2_0);
		RuntimeObject* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		PrimaryPointerChangedHandler_t1C9E0CDB5009F770A464C9126C67A745E2D544E8* L_4 = (PrimaryPointerChangedHandler_t1C9E0CDB5009F770A464C9126C67A745E2D544E8*)il2cpp_codegen_object_new(PrimaryPointerChangedHandler_t1C9E0CDB5009F770A464C9126C67A745E2D544E8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		PrimaryPointerChangedHandler__ctor_m606B901E796B1E1AAC1542943D7D34D1491DD123(L_4, __this, (intptr_t)((void*)PrimaryPointerHandlerExample_OnPrimaryPointerChanged_m056DBFB929005ED8B7AB9276FE9D02B0048A87E6_RuntimeMethod_var), NULL);
		NullCheck(G_B4_0);
		InterfaceActionInvoker2< PrimaryPointerChangedHandler_t1C9E0CDB5009F770A464C9126C67A745E2D544E8*, bool >::Invoke(12 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider::SubscribeToPrimaryPointerChanged(Microsoft.MixedReality.Toolkit.Input.PrimaryPointerChangedHandler,System.Boolean) */, IMixedRealityFocusProvider_t2766EE713C9E441F03CA32A27287C1EF1713AE00_il2cpp_TypeInfo_var, G_B4_0, L_4, (bool)1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.PrimaryPointerHandlerExample::OnPrimaryPointerChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimaryPointerHandlerExample_OnPrimaryPointerChanged_m056DBFB929005ED8B7AB9276FE9D02B0048A87E6 (PrimaryPointerHandlerExample_tB2A0E6E868757817A2F02AF60A7E532A5027414A* __this, RuntimeObject* ___oldPointer0, RuntimeObject* ___newPointer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GGVPointer_t5D017CA59C5DE1F7E8482B81F2FF262D6AB9CF43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGazeProvider_t172D38E3FF653E0D7B293184D160FD6DC1A9213A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_TryGetMonoBehaviour_TisIMixedRealityCursor_t59775B0000A1264F48A2A2B8E459189BD459B85C_m6E768B891560F4761F9975129DD0631C6386FE1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_TryGetMonoBehaviour_TisIMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_mC4D9845F8A7F0CE4B731048671596E9BEF464E8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* V_1 = NULL;
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* V_2 = NULL;
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* V_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B10_0 = NULL;
	{
		// if (CursorHighlight != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___CursorHighlight_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00c3;
		}
	}
	{
		// if (newPointer != null)
		RuntimeObject* L_2 = ___newPointer1;
		if (!L_2)
		{
			goto IL_00a5;
		}
	}
	{
		// Transform parentTransform = null;
		V_0 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// if (newPointer is GGVPointer)
		RuntimeObject* L_3 = ___newPointer1;
		if (!((GGVPointer_t5D017CA59C5DE1F7E8482B81F2FF262D6AB9CF43*)IsInstClass((RuntimeObject*)L_3, GGVPointer_t5D017CA59C5DE1F7E8482B81F2FF262D6AB9CF43_il2cpp_TypeInfo_var)))
		{
			goto IL_004a;
		}
	}
	{
		// parentTransform = CoreServices.InputSystem.GazeProvider.GazePointer.BaseCursor.TryGetMonoBehaviour(out MonoBehaviour baseCursor) ? baseCursor.transform : null;
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_GazeProvider() */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider::get_GazePointer() */, IMixedRealityGazeProvider_t172D38E3FF653E0D7B293184D160FD6DC1A9213A_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_BaseCursor() */, IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var, L_6);
		bool L_8;
		L_8 = UnityObjectExtensions_TryGetMonoBehaviour_TisIMixedRealityCursor_t59775B0000A1264F48A2A2B8E459189BD459B85C_m6E768B891560F4761F9975129DD0631C6386FE1C(L_7, (&V_1), UnityObjectExtensions_TryGetMonoBehaviour_TisIMixedRealityCursor_t59775B0000A1264F48A2A2B8E459189BD459B85C_m6E768B891560F4761F9975129DD0631C6386FE1C_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_0041;
		}
	}
	{
		G_B6_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)(NULL));
		goto IL_0047;
	}

IL_0041:
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_9 = V_1;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		G_B6_0 = L_10;
	}

IL_0047:
	{
		V_0 = G_B6_0;
		goto IL_0063;
	}

IL_004a:
	{
		// parentTransform = newPointer.BaseCursor.TryGetMonoBehaviour(out MonoBehaviour baseCursor) ? baseCursor.transform : null;
		RuntimeObject* L_11 = ___newPointer1;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_BaseCursor() */, IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var, L_11);
		bool L_13;
		L_13 = UnityObjectExtensions_TryGetMonoBehaviour_TisIMixedRealityCursor_t59775B0000A1264F48A2A2B8E459189BD459B85C_m6E768B891560F4761F9975129DD0631C6386FE1C(L_12, (&V_2), UnityObjectExtensions_TryGetMonoBehaviour_TisIMixedRealityCursor_t59775B0000A1264F48A2A2B8E459189BD459B85C_m6E768B891560F4761F9975129DD0631C6386FE1C_RuntimeMethod_var);
		if (L_13)
		{
			goto IL_005c;
		}
	}
	{
		G_B10_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)(NULL));
		goto IL_0062;
	}

IL_005c:
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_14 = V_2;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		G_B10_0 = L_15;
	}

IL_0062:
	{
		V_0 = G_B10_0;
	}

IL_0063:
	{
		// if (parentTransform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_007d;
		}
	}
	{
		// if (newPointer.TryGetMonoBehaviour(out MonoBehaviour controllerPointer))
		RuntimeObject* L_18 = ___newPointer1;
		bool L_19;
		L_19 = UnityObjectExtensions_TryGetMonoBehaviour_TisIMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_mC4D9845F8A7F0CE4B731048671596E9BEF464E8D(L_18, (&V_3), UnityObjectExtensions_TryGetMonoBehaviour_TisIMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_mC4D9845F8A7F0CE4B731048671596E9BEF464E8D_RuntimeMethod_var);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		// parentTransform = controllerPointer.transform;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_20 = V_3;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		V_0 = L_21;
	}

IL_007d:
	{
		// if (parentTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00a5;
		}
	}
	{
		// CursorHighlight.transform.SetParent(parentTransform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___CursorHighlight_4;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = V_0;
		NullCheck(L_25);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_25, L_26, (bool)0, NULL);
		// CursorHighlight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___CursorHighlight_4;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)1, NULL);
		// return;
		return;
	}

IL_00a5:
	{
		// CursorHighlight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___CursorHighlight_4;
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
		// CursorHighlight.transform.SetParent(null, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___CursorHighlight_4;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		NullCheck(L_30);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_30, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (bool)0, NULL);
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.PrimaryPointerHandlerExample::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimaryPointerHandlerExample_OnDisable_mE71162D75DF5352D9265B07651786DEE8E868017 (PrimaryPointerHandlerExample_tB2A0E6E868757817A2F02AF60A7E532A5027414A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityFocusProvider_t2766EE713C9E441F03CA32A27287C1EF1713AE00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimaryPointerChangedHandler_t1C9E0CDB5009F770A464C9126C67A745E2D544E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimaryPointerHandlerExample_OnPrimaryPointerChanged_m056DBFB929005ED8B7AB9276FE9D02B0048A87E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// CoreServices.InputSystem?.FocusProvider?.UnsubscribeFromPrimaryPointerChanged(OnPrimaryPointerChanged);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0027;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_FocusProvider() */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B2_0);
		RuntimeObject* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0016;
		}
	}
	{
		goto IL_0027;
	}

IL_0016:
	{
		PrimaryPointerChangedHandler_t1C9E0CDB5009F770A464C9126C67A745E2D544E8* L_4 = (PrimaryPointerChangedHandler_t1C9E0CDB5009F770A464C9126C67A745E2D544E8*)il2cpp_codegen_object_new(PrimaryPointerChangedHandler_t1C9E0CDB5009F770A464C9126C67A745E2D544E8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		PrimaryPointerChangedHandler__ctor_m606B901E796B1E1AAC1542943D7D34D1491DD123(L_4, __this, (intptr_t)((void*)PrimaryPointerHandlerExample_OnPrimaryPointerChanged_m056DBFB929005ED8B7AB9276FE9D02B0048A87E6_RuntimeMethod_var), NULL);
		NullCheck(G_B4_0);
		InterfaceActionInvoker1< PrimaryPointerChangedHandler_t1C9E0CDB5009F770A464C9126C67A745E2D544E8* >::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider::UnsubscribeFromPrimaryPointerChanged(Microsoft.MixedReality.Toolkit.Input.PrimaryPointerChangedHandler) */, IMixedRealityFocusProvider_t2766EE713C9E441F03CA32A27287C1EF1713AE00_il2cpp_TypeInfo_var, G_B4_0, L_4);
	}

IL_0027:
	{
		// OnPrimaryPointerChanged(null, null);
		PrimaryPointerHandlerExample_OnPrimaryPointerChanged_m056DBFB929005ED8B7AB9276FE9D02B0048A87E6(__this, (RuntimeObject*)NULL, (RuntimeObject*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.PrimaryPointerHandlerExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimaryPointerHandlerExample__ctor_mF6CC650501FDA49A11D19F35C0B15E6E8B623E0B (PrimaryPointerHandlerExample_tB2A0E6E868757817A2F02AF60A7E532A5027414A* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ClearSpatialObservations::ToggleObservers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearSpatialObservations_ToggleObservers_mCBF8F34B48824CECE007EAED66B739A21FCA3D97 (ClearSpatialObservations_t18FFAE06576A1113BE55974326CB215F4264E2A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpatialAwarenessSystem_tF5F2975ACCFD98470DF1D17EC3850A257BF28817_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var spatialAwarenessSystem = CoreServices.SpatialAwarenessSystem;
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_SpatialAwarenessSystem_mD0ED61C3A26D541C23E92BC0062CBB6154DC3DE2(NULL);
		V_0 = L_0;
		// if (spatialAwarenessSystem != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// if (clearObservations)
		bool L_2 = __this->___clearObservations_4;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// spatialAwarenessSystem.SuspendObservers();
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(11 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem::SuspendObservers() */, IMixedRealitySpatialAwarenessSystem_tF5F2975ACCFD98470DF1D17EC3850A257BF28817_il2cpp_TypeInfo_var, L_3);
		// spatialAwarenessSystem.ClearObservations();
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(14 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem::ClearObservations() */, IMixedRealitySpatialAwarenessSystem_tF5F2975ACCFD98470DF1D17EC3850A257BF28817_il2cpp_TypeInfo_var, L_4);
		// clearObservations = false;
		__this->___clearObservations_4 = (bool)0;
		return;
	}

IL_0025:
	{
		// spatialAwarenessSystem.ResumeObservers();
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem::ResumeObservers() */, IMixedRealitySpatialAwarenessSystem_tF5F2975ACCFD98470DF1D17EC3850A257BF28817_il2cpp_TypeInfo_var, L_5);
		// clearObservations = true;
		__this->___clearObservations_4 = (bool)1;
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ClearSpatialObservations::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClearSpatialObservations__ctor_m7F145FA493156190DF93C07A9D7E3A77F238857B (ClearSpatialObservations_t18FFAE06576A1113BE55974326CB215F4264E2A1* __this, const RuntimeMethod* method) 
{
	{
		// private bool clearObservations = true;
		__this->___clearObservations_4 = (bool)1;
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ShowPlaneFindingInstructions::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowPlaneFindingInstructions_Start_mEC65BE9F96543B1D2242318482CFD33811D9608F (ShowPlaneFindingInstructions_tA0D7A65D27297E8FAD34556BAB27963BF2458E4F* __this, const RuntimeMethod* method) 
{
	{
		// planeFindingPanel.SetActive(SurfaceMeshesToPlanes.CanCreatePlanes);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___planeFindingPanel_4;
		bool L_1;
		L_1 = SurfaceMeshesToPlanes_get_CanCreatePlanes_m8081CBE1237DA720ECEBCAC99052466D79388703(NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ShowPlaneFindingInstructions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowPlaneFindingInstructions__ctor_m43706941098FB18156D44C75BFDC7FCF10412B99 (ShowPlaneFindingInstructions_tA0D7A65D27297E8FAD34556BAB27963BF2458E4F* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBoxExampleTest_OnEnable_m65D4644D563AB28D1C2C7B3DF566353A85276F42 (BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySpeechHandler_tF57481E35DD5D8C0EC2D82DA0E72CDE0058C12B5_m02DD2BB27CFB3B352F1D771B1EB3DDF1A7EB9547_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// CoreServices.InputSystem?.RegisterHandler<IMixedRealitySpeechHandler>(this);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySpeechHandler_tF57481E35DD5D8C0EC2D82DA0E72CDE0058C12B5_m02DD2BB27CFB3B352F1D771B1EB3DDF1A7EB9547_RuntimeMethod_var, G_B2_0, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBoxExampleTest_OnDisable_mE5B2A1090E831F707BF7FA2CB96FE5171D4C0770 (BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySpeechHandler_tF57481E35DD5D8C0EC2D82DA0E72CDE0058C12B5_m00DB1183F954B0E4F7D51E2D771A39E88F2C2661_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// CoreServices.InputSystem?.UnregisterHandler<IMixedRealitySpeechHandler>(this);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySpeechHandler_tF57481E35DD5D8C0EC2D82DA0E72CDE0058C12B5_m00DB1183F954B0E4F7D51E2D771A39E88F2C2661_RuntimeMethod_var, G_B2_0, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBoxExampleTest_Start_mD1B2522A85F1B5148511B145F68525B00B9AFFE8 (BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Sequence());
		RuntimeObject* L_0;
		L_0 = BoundingBoxExampleTest_Sequence_m52B3C449C585EB03563F40D49531BB49F96F31DB(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::SetStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853 (BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* __this, String_t* ___status0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC74B0680110FAF1A171E3BA0F738CB4754DA7389);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	StringBuilder_t* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	StringBuilder_t* G_B1_1 = NULL;
	{
		// StringBuilder b = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// b.AppendLine($"{status}");
		StringBuilder_t* L_1 = V_0;
		String_t* L_2 = ___status0;
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0011;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B2_1, G_B2_0, NULL);
		// b.AppendLine($"Press '1' or say 'select' to continue");
		StringBuilder_t* L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_5, _stringLiteralC74B0680110FAF1A171E3BA0F738CB4754DA7389, NULL);
		// statusText.text = b.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_7 = __this->___statusText_4;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_9);
		// }
		return;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::Sequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoundingBoxExampleTest_Sequence_m52B3C449C585EB03563F40D49531BB49F96F31DB (BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSequenceU3Ed__12_tF55D339C4A243C24CBE65F823E7A04CE6E203933_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSequenceU3Ed__12_tF55D339C4A243C24CBE65F823E7A04CE6E203933* L_0 = (U3CSequenceU3Ed__12_tF55D339C4A243C24CBE65F823E7A04CE6E203933*)il2cpp_codegen_object_new(U3CSequenceU3Ed__12_tF55D339C4A243C24CBE65F823E7A04CE6E203933_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSequenceU3Ed__12__ctor_m7D5B9C81C79BDFDA12B9C2630156D85048EC8CF3(L_0, 0, NULL);
		U3CSequenceU3Ed__12_tF55D339C4A243C24CBE65F823E7A04CE6E203933* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::WaitForSpeechCommand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9 (BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForSpeechCommandU3Ed__13_tA3478029843B23D9C8A63D157FFB5BB99CF37ED5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForSpeechCommandU3Ed__13_tA3478029843B23D9C8A63D157FFB5BB99CF37ED5* L_0 = (U3CWaitForSpeechCommandU3Ed__13_tA3478029843B23D9C8A63D157FFB5BB99CF37ED5*)il2cpp_codegen_object_new(U3CWaitForSpeechCommandU3Ed__13_tA3478029843B23D9C8A63D157FFB5BB99CF37ED5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitForSpeechCommandU3Ed__13__ctor_m6FB0854046E56A3E0B22E796BCD6EED6EF8CF782(L_0, 0, NULL);
		U3CWaitForSpeechCommandU3Ed__13_tA3478029843B23D9C8A63D157FFB5BB99CF37ED5* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBoxExampleTest_OnSpeechKeywordRecognized_m222463231C0659533D4B9EAF6431BB38292E4798 (BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* __this, SpeechEventData_t4424832821FEC4163B9CFCD3A9F457DF930A95BD* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31E8E4ACB2EDC39B158FBA91185DE1333306F668);
		s_Il2CppMethodInitialized = true;
	}
	SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (eventData.Command.Keyword.Equals("Select", System.StringComparison.CurrentCultureIgnoreCase))
		SpeechEventData_t4424832821FEC4163B9CFCD3A9F457DF930A95BD* L_0 = ___eventData0;
		NullCheck(L_0);
		SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC L_1;
		L_1 = SpeechEventData_get_Command_m55D611C557104EC236CE8D929CFBFA2D37216636_inline(L_0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = SpeechCommands_get_Keyword_m381228670D38A858F9AE14CBA8D101E7085BA94C((&V_0), NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_2, _stringLiteral31E8E4ACB2EDC39B158FBA91185DE1333306F668, 1, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// speechTriggeredFalg = true;
		__this->___speechTriggeredFalg_9 = (bool)1;
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBoxExampleTest__ctor_m6C5C3EC8C9674650FD2FF831805C59C4871BEE93 (BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 cubePosition = new Vector3(0, 0, 2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (2.0f), /*hidden argument*/NULL);
		__this->___cubePosition_10 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::<Sequence>b__12_0(Microsoft.MixedReality.Toolkit.UI.ManipulationEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBoxExampleTest_U3CSequenceU3Eb__12_0_mFF939D0D67AA1DF5F1F85FE83E45D4FCDF6278C1 (BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* __this, ManipulationEventData_t3669F25A1E18443CE54C89DA7F6B5C641FD80F89* ___med0, const RuntimeMethod* method) 
{
	{
		// om.OnManipulationStarted.AddListener((med) => bbox.HighlightWires());
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_0 = __this->___bbox_11;
		NullCheck(L_0);
		BoundingBox_HighlightWires_mC0791AE8EB6F2D41F02A1FF73A3E5CE3763438D8(L_0, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest::<Sequence>b__12_1(Microsoft.MixedReality.Toolkit.UI.ManipulationEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundingBoxExampleTest_U3CSequenceU3Eb__12_1_m0575870681F4EA0D248901AB93FDD48BB8F56280 (BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* __this, ManipulationEventData_t3669F25A1E18443CE54C89DA7F6B5C641FD80F89* ___med0, const RuntimeMethod* method) 
{
	{
		// om.OnManipulationEnded.AddListener((med) => bbox.UnhighlightWires());
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_0 = __this->___bbox_11;
		NullCheck(L_0);
		BoundingBox_UnhighlightWires_mE61DF57E00BAFC07AB13C81C5A7EDF4F09179F18(L_0, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSequenceU3Ed__12__ctor_m7D5B9C81C79BDFDA12B9C2630156D85048EC8CF3 (U3CSequenceU3Ed__12_tF55D339C4A243C24CBE65F823E7A04CE6E203933* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSequenceU3Ed__12_System_IDisposable_Dispose_m4E214E8D6DCF7575C01A264A47D3B88F9E77851C (U3CSequenceU3Ed__12_tF55D339C4A243C24CBE65F823E7A04CE6E203933* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSequenceU3Ed__12_MoveNext_m255898E02B9A76DA875999DFBB658DB7B5834114 (U3CSequenceU3Ed__12_tF55D339C4A243C24CBE65F823E7A04CE6E203933* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundingBoxExampleTest_U3CSequenceU3Eb__12_0_mFF939D0D67AA1DF5F1F85FE83E45D4FCDF6278C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundingBoxExampleTest_U3CSequenceU3Eb__12_1_m0575870681F4EA0D248901AB93FDD48BB8F56280_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D_mEA8B8AEA4CD2F47BF50E5147B6C2DEF2B2D4DDFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16_mFE64421C1E4C885473A4025C4220BED207C48687_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38_m7987B1E4C0405213AFBED42D2DEE4C11B040AE41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mCE472D576E4B9591F706A2D7A00FC0BA3C985BBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0893B6EE7D7D92EEC5DF4B8BD819415A9048260D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C4AA015CF736BA57D6243943A6C9DA33C794A91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25F0B5C5097297B2DE6C0F2A70A5DDE0BF7B99ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral285AE8367EF72F152792EF14AAAC6EF625130994);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2977EACE2BE13FBCAE160266FAB922F500F7F401);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E0CC2DE428319C2646E0E295A66C35A732ED352);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral330B191DB5AF908CB6A3230530DCD6E9A21D2C4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3655EFA58CD918A6CF06BBB9D43BFC9D3AAE2404);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ED8C8ED37C8A0119FC85220A1B4073DACA3A53A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EF79C9C03F34A466743105CBD82EFB038AE1047);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40442EDA4EDA74622DB1FC827383DFA39BAE341B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral497963E2D53B0D05EEB52F563374952F51400304);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6596B125B0B472CE30C09148B49799ECB7AD3B6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral670F8C2828AA4722DE617A1B888E4515BF0C2485);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B3A9C268EC2A1B1C035619C6A0C1FCF7C78C99B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C5D6EBEDFE936648874854E5F6DF342D594104D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral816442123FBC6285ACBB7D610A9E968403EFDE1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E91D5EB2D73DE0D2500DAE0645428EC6B06F37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B6F45F608528E2F182DFB9A4714097FD6DA2E17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5676CB0976CA579589039A064A0D04BACF68C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABD4164FE9CCC6A2A0367A5E5A99E916644C5621);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB106B257720A10C98419096B5FAEEB08EA673997);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB50148F64C80D84E61F7A56AF2EF142058BE341F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8550D4379B5F21DD5B0080AA4E715E8E76C17CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD29CFE22E70049887B0491EE4860B0A772EF8CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFC1C2D158A032F8FC48C299D5FDB28194E34C6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0F771D59E9ED5FD093C2B91752841DE48F1BAE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA4F59CE87B7FAC2A32C219EF9C2F065CA108A5A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	int32_t V_5 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B28_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B27_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B29_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B29_1 = NULL;
	float G_B32_0 = 0.0f;
	float G_B39_0 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_007e;
			}
			case 1:
			{
				goto IL_0123;
			}
			case 2:
			{
				goto IL_01b5;
			}
			case 3:
			{
				goto IL_01fb;
			}
			case 4:
			{
				goto IL_0240;
			}
			case 5:
			{
				goto IL_0273;
			}
			case 6:
			{
				goto IL_02a6;
			}
			case 7:
			{
				goto IL_02d9;
			}
			case 8:
			{
				goto IL_030c;
			}
			case 9:
			{
				goto IL_0340;
			}
			case 10:
			{
				goto IL_0374;
			}
			case 11:
			{
				goto IL_03a8;
			}
			case 12:
			{
				goto IL_03ef;
			}
			case 13:
			{
				goto IL_0427;
			}
			case 14:
			{
				goto IL_045f;
			}
			case 15:
			{
				goto IL_0498;
			}
			case 16:
			{
				goto IL_04d1;
			}
			case 17:
			{
				goto IL_050a;
			}
			case 18:
			{
				goto IL_057b;
			}
			case 19:
			{
				goto IL_05af;
			}
			case 20:
			{
				goto IL_0606;
			}
			case 21:
			{
				goto IL_0669;
			}
			case 22:
			{
				goto IL_06a1;
			}
			case 23:
			{
				goto IL_06d5;
			}
			case 24:
			{
				goto IL_089e;
			}
			case 25:
			{
				goto IL_0991;
			}
		}
	}
	{
		return (bool)0;
	}

IL_007e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507(3, NULL);
		__this->___U3CcubeU3E5__2_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcubeU3E5__2_3), (void*)L_3);
		// cube.GetComponent<MeshRenderer>().material = darkGrayMaterial;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___U3CcubeU3E5__2_3;
		NullCheck(L_4);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5;
		L_5 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_4, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_6 = V_1;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = L_6->___darkGrayMaterial_5;
		NullCheck(L_5);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_5, L_7, NULL);
		// cube.transform.position = cubePosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___U3CcubeU3E5__2_3;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_10 = V_1;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10->___cubePosition_10;
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_11, NULL);
		// SetStatus("Instantiate BoundingBox");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_12 = V_1;
		NullCheck(L_12);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_12, _stringLiteral2977EACE2BE13FBCAE160266FAB922F500F7F401, NULL);
		// bbox = cube.AddComponent<BoundingBox>();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_13 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___U3CcubeU3E5__2_3;
		NullCheck(L_14);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_15;
		L_15 = GameObject_AddComponent_TisBoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D_mEA8B8AEA4CD2F47BF50E5147B6C2DEF2B2D4DDFF(L_14, GameObject_AddComponent_TisBoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D_mEA8B8AEA4CD2F47BF50E5147B6C2DEF2B2D4DDFF_RuntimeMethod_var);
		NullCheck(L_13);
		L_13->___bbox_11 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___bbox_11), (void*)L_15);
		// bbox.HideElementsInInspector = false;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_16 = V_1;
		NullCheck(L_16);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_17 = L_16->___bbox_11;
		NullCheck(L_17);
		BoundingBox_set_HideElementsInInspector_mC65AA0D989BED6AD12A16C33DC7203B6915E2307(L_17, (bool)0, NULL);
		// bbox.BoundingBoxActivation = BoundingBox.BoundingBoxActivationType.ActivateOnStart;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_18 = V_1;
		NullCheck(L_18);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_19 = L_18->___bbox_11;
		NullCheck(L_19);
		BoundingBox_set_BoundingBoxActivation_m4A83D6FFCC6FC0F24CD56AD364DAFA33EC790623(L_19, 0, NULL);
		// var cm = cube.AddComponent<ConstraintManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___U3CcubeU3E5__2_3;
		NullCheck(L_20);
		ConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16* L_21;
		L_21 = GameObject_AddComponent_TisConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16_mFE64421C1E4C885473A4025C4220BED207C48687(L_20, GameObject_AddComponent_TisConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16_mFE64421C1E4C885473A4025C4220BED207C48687_RuntimeMethod_var);
		// var om = cube.AddComponent<MRTKObjectManipulator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___U3CcubeU3E5__2_3;
		NullCheck(L_22);
		ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* L_23;
		L_23 = GameObject_AddComponent_TisObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38_m7987B1E4C0405213AFBED42D2DEE4C11B040AE41(L_22, GameObject_AddComponent_TisObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38_m7987B1E4C0405213AFBED42D2DEE4C11B040AE41_RuntimeMethod_var);
		__this->___U3ComU3E5__3_4 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ComU3E5__3_4), (void*)L_23);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_24 = V_1;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_24, NULL);
		__this->___U3CU3E2__current_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_25);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0123:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Set Target bounds override");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_26 = V_1;
		NullCheck(L_26);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_26, _stringLiteralB8550D4379B5F21DD5B0080AA4E715E8E76C17CB, NULL);
		// var newObject = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_27, NULL);
		__this->___U3CnewObjectU3E5__4_5 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnewObjectU3E5__4_5), (void*)L_27);
		// var bc = newObject.AddComponent<BoxCollider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_28);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_29;
		L_29 = GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23(L_28, GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23_RuntimeMethod_var);
		__this->___U3CbcU3E5__5_6 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbcU3E5__5_6), (void*)L_29);
		// bc.center = new Vector3(.25f, 0, 0);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_30 = __this->___U3CbcU3E5__5_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (0.25f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		BoxCollider_set_center_m0AB0482699735FEE8306A7FCAAE66A76C479F0F0(L_30, L_31, NULL);
		// bc.size = new Vector3(0.162f, 0.1f, 1);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_32 = __this->___U3CbcU3E5__5_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), (0.162f), (0.100000001f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_32);
		BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A(L_32, L_33, NULL);
		// bbox.BoundsOverride = bc;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_34 = V_1;
		NullCheck(L_34);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_35 = L_34->___bbox_11;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_36 = __this->___U3CbcU3E5__5_6;
		NullCheck(L_35);
		BoundingBox_set_BoundsOverride_m09F66B730928F61382A7A940A74034620B694E83(L_35, L_36, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_37 = V_1;
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_37, NULL);
		__this->___U3CU3E2__current_1 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_38);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_01b5:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Change target bounds override size");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_39 = V_1;
		NullCheck(L_39);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_39, _stringLiteral285AE8367EF72F152792EF14AAAC6EF625130994, NULL);
		// bc.size = new Vector3(0.5f, 0.1f, 1);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_40 = __this->___U3CbcU3E5__5_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_41), (0.5f), (0.100000001f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_40);
		BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A(L_40, L_41, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_42 = V_1;
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_42, NULL);
		__this->___U3CU3E2__current_1 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_43);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_01fb:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Remove target bounds override");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_44 = V_1;
		NullCheck(L_44);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_44, _stringLiteral9B6F45F608528E2F182DFB9A4714097FD6DA2E17, NULL);
		// bbox.BoundsOverride = null;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_45 = V_1;
		NullCheck(L_45);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_46 = L_45->___bbox_11;
		NullCheck(L_46);
		BoundingBox_set_BoundsOverride_m09F66B730928F61382A7A940A74034620B694E83(L_46, (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)NULL, NULL);
		// Destroy(newObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___U3CnewObjectU3E5__4_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_47, NULL);
		// newObject = null;
		__this->___U3CnewObjectU3E5__4_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnewObjectU3E5__4_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_48 = V_1;
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_48, NULL);
		__this->___U3CU3E2__current_1 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_49);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_0240:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("HideElementsInInspector true");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_50 = V_1;
		NullCheck(L_50);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_50, _stringLiteral1C4AA015CF736BA57D6243943A6C9DA33C794A91, NULL);
		// bbox.HideElementsInInspector = true;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_51 = V_1;
		NullCheck(L_51);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_52 = L_51->___bbox_11;
		NullCheck(L_52);
		BoundingBox_set_HideElementsInInspector_mC65AA0D989BED6AD12A16C33DC7203B6915E2307(L_52, (bool)1, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_53 = V_1;
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_53, NULL);
		__this->___U3CU3E2__current_1 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_54);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_0273:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("HideElementsInInspector false");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_55 = V_1;
		NullCheck(L_55);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_55, _stringLiteral7B3A9C268EC2A1B1C035619C6A0C1FCF7C78C99B, NULL);
		// bbox.HideElementsInInspector = false;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_56 = V_1;
		NullCheck(L_56);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_57 = L_56->___bbox_11;
		NullCheck(L_57);
		BoundingBox_set_HideElementsInInspector_mC65AA0D989BED6AD12A16C33DC7203B6915E2307(L_57, (bool)0, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_58 = V_1;
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_58, NULL);
		__this->___U3CU3E2__current_1 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_59);
		__this->___U3CU3E1__state_0 = 6;
		return (bool)1;
	}

IL_02a6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("FlattenX");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_60 = V_1;
		NullCheck(L_60);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_60, _stringLiteral25F0B5C5097297B2DE6C0F2A70A5DDE0BF7B99ED, NULL);
		// bbox.FlattenAxis = BoundingBox.FlattenModeType.FlattenX;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_61 = V_1;
		NullCheck(L_61);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_62 = L_61->___bbox_11;
		NullCheck(L_62);
		BoundingBox_set_FlattenAxis_m73041E6529FFACDA2ABF192FB22C82035CC28B93(L_62, 1, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_63 = V_1;
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_63, NULL);
		__this->___U3CU3E2__current_1 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_64);
		__this->___U3CU3E1__state_0 = 7;
		return (bool)1;
	}

IL_02d9:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("FlattenY");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_65 = V_1;
		NullCheck(L_65);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_65, _stringLiteralCD29CFE22E70049887B0491EE4860B0A772EF8CE, NULL);
		// bbox.FlattenAxis = BoundingBox.FlattenModeType.FlattenY;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_66 = V_1;
		NullCheck(L_66);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_67 = L_66->___bbox_11;
		NullCheck(L_67);
		BoundingBox_set_FlattenAxis_m73041E6529FFACDA2ABF192FB22C82035CC28B93(L_67, 2, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_68 = V_1;
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_68, NULL);
		__this->___U3CU3E2__current_1 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_69);
		__this->___U3CU3E1__state_0 = 8;
		return (bool)1;
	}

IL_030c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("FlattenNone");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_70 = V_1;
		NullCheck(L_70);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_70, _stringLiteralABD4164FE9CCC6A2A0367A5E5A99E916644C5621, NULL);
		// bbox.FlattenAxis = BoundingBox.FlattenModeType.DoNotFlatten;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_71 = V_1;
		NullCheck(L_71);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_72 = L_71->___bbox_11;
		NullCheck(L_72);
		BoundingBox_set_FlattenAxis_m73041E6529FFACDA2ABF192FB22C82035CC28B93(L_72, 0, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_73 = V_1;
		NullCheck(L_73);
		RuntimeObject* L_74;
		L_74 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_73, NULL);
		__this->___U3CU3E2__current_1 = L_74;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_74);
		__this->___U3CU3E1__state_0 = ((int32_t)9);
		return (bool)1;
	}

IL_0340:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("ShowWireframe false");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_75 = V_1;
		NullCheck(L_75);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_75, _stringLiteralDA4F59CE87B7FAC2A32C219EF9C2F065CA108A5A, NULL);
		// bbox.ShowWireFrame = false;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_76 = V_1;
		NullCheck(L_76);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_77 = L_76->___bbox_11;
		NullCheck(L_77);
		BoundingBox_set_ShowWireFrame_m815D7777785EF3D147490FCBAF35D451D6DFF9E8(L_77, (bool)0, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_78 = V_1;
		NullCheck(L_78);
		RuntimeObject* L_79;
		L_79 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_78, NULL);
		__this->___U3CU3E2__current_1 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_79);
		__this->___U3CU3E1__state_0 = ((int32_t)10);
		return (bool)1;
	}

IL_0374:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("ShowWireframe true");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_80 = V_1;
		NullCheck(L_80);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_80, _stringLiteral2E0CC2DE428319C2646E0E295A66C35A732ED352, NULL);
		// bbox.ShowWireFrame = true;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_81 = V_1;
		NullCheck(L_81);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_82 = L_81->___bbox_11;
		NullCheck(L_82);
		BoundingBox_set_ShowWireFrame_m815D7777785EF3D147490FCBAF35D451D6DFF9E8(L_82, (bool)1, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_83 = V_1;
		NullCheck(L_83);
		RuntimeObject* L_84;
		L_84 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_83, NULL);
		__this->___U3CU3E2__current_1 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_84);
		__this->___U3CU3E1__state_0 = ((int32_t)11);
		return (bool)1;
	}

IL_03a8:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("BoxPadding 0.2f");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_85 = V_1;
		NullCheck(L_85);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_85, _stringLiteral3EF79C9C03F34A466743105CBD82EFB038AE1047, NULL);
		// bbox.BoxPadding = new Vector3(0.2f, 0.2f, 0.2f);
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_86 = V_1;
		NullCheck(L_86);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_87 = L_86->___bbox_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), (0.200000003f), (0.200000003f), (0.200000003f), /*hidden argument*/NULL);
		NullCheck(L_87);
		BoundingBox_set_BoxPadding_mB13723223DDB6C56F1DFF5828A42A0B263B69412(L_87, L_88, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_89 = V_1;
		NullCheck(L_89);
		RuntimeObject* L_90;
		L_90 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_89, NULL);
		__this->___U3CU3E2__current_1 = L_90;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_90);
		__this->___U3CU3E1__state_0 = ((int32_t)12);
		return (bool)1;
	}

IL_03ef:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("BoxPadding 0");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_91 = V_1;
		NullCheck(L_91);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_91, _stringLiteral3ED8C8ED37C8A0119FC85220A1B4073DACA3A53A, NULL);
		// bbox.BoxPadding = Vector3.zero;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_92 = V_1;
		NullCheck(L_92);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_93 = L_92->___bbox_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_93);
		BoundingBox_set_BoxPadding_mB13723223DDB6C56F1DFF5828A42A0B263B69412(L_93, L_94, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_95 = V_1;
		NullCheck(L_95);
		RuntimeObject* L_96;
		L_96 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_95, NULL);
		__this->___U3CU3E2__current_1 = L_96;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_96);
		__this->___U3CU3E1__state_0 = ((int32_t)13);
		return (bool)1;
	}

IL_0427:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Set scale handle size 0.3");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_97 = V_1;
		NullCheck(L_97);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_97, _stringLiteral7C5D6EBEDFE936648874854E5F6DF342D594104D, NULL);
		// bbox.ScaleHandleSize = 0.3f;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_98 = V_1;
		NullCheck(L_98);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_99 = L_98->___bbox_11;
		NullCheck(L_99);
		BoundingBox_set_ScaleHandleSize_mDCA3EA97F6B9F25349B5DDFD15DE2A50EAA85A89(L_99, (0.300000012f), NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_100 = V_1;
		NullCheck(L_100);
		RuntimeObject* L_101;
		L_101 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_100, NULL);
		__this->___U3CU3E2__current_1 = L_101;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_101);
		__this->___U3CU3E1__state_0 = ((int32_t)14);
		return (bool)1;
	}

IL_045f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Set scale handle widget prefab");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_102 = V_1;
		NullCheck(L_102);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_102, _stringLiteral9D5676CB0976CA579589039A064A0D04BACF68C2, NULL);
		// bbox.ScaleHandlePrefab = scaleWidget;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_103 = V_1;
		NullCheck(L_103);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_104 = L_103->___bbox_11;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_105 = V_1;
		NullCheck(L_105);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_106 = L_105->___scaleWidget_8;
		NullCheck(L_104);
		BoundingBox_set_ScaleHandlePrefab_m0EB259BC50A44A0D0E2619FB7ECC5237F1A02246(L_104, L_106, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_107 = V_1;
		NullCheck(L_107);
		RuntimeObject* L_108;
		L_108 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_107, NULL);
		__this->___U3CU3E2__current_1 = L_108;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_108);
		__this->___U3CU3E1__state_0 = ((int32_t)15);
		return (bool)1;
	}

IL_0498:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Handles red");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_109 = V_1;
		NullCheck(L_109);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_109, _stringLiteralB106B257720A10C98419096B5FAEEB08EA673997, NULL);
		// bbox.HandleMaterial = redMaterial;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_110 = V_1;
		NullCheck(L_110);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_111 = L_110->___bbox_11;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_112 = V_1;
		NullCheck(L_112);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113 = L_112->___redMaterial_6;
		NullCheck(L_111);
		BoundingBox_set_HandleMaterial_m4231BBF0D51BFAB2958E3260B5667F381C6274AA(L_111, L_113, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_114 = V_1;
		NullCheck(L_114);
		RuntimeObject* L_115;
		L_115 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_114, NULL);
		__this->___U3CU3E2__current_1 = L_115;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_115);
		__this->___U3CU3E1__state_0 = ((int32_t)16);
		return (bool)1;
	}

IL_04d1:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("BBox material cyan");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_116 = V_1;
		NullCheck(L_116);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_116, _stringLiteral330B191DB5AF908CB6A3230530DCD6E9A21D2C4A, NULL);
		// bbox.BoxMaterial = cyanMaterial;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_117 = V_1;
		NullCheck(L_117);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_118 = L_117->___bbox_11;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_119 = V_1;
		NullCheck(L_119);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120 = L_119->___cyanMaterial_7;
		NullCheck(L_118);
		BoundingBox_set_BoxMaterial_m3419D9EA57D6A6F7FC6F26A7749D25C6EA2B6295(L_118, L_120, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_121 = V_1;
		NullCheck(L_121);
		RuntimeObject* L_122;
		L_122 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_121, NULL);
		__this->___U3CU3E2__current_1 = L_122;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_122);
		__this->___U3CU3E1__state_0 = ((int32_t)17);
		return (bool)1;
	}

IL_050a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("BBox grabbed material red");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_123 = V_1;
		NullCheck(L_123);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_123, _stringLiteral40442EDA4EDA74622DB1FC827383DFA39BAE341B, NULL);
		// bbox.BoxGrabbedMaterial = redMaterial;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_124 = V_1;
		NullCheck(L_124);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_125 = L_124->___bbox_11;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_126 = V_1;
		NullCheck(L_126);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127 = L_126->___redMaterial_6;
		NullCheck(L_125);
		BoundingBox_set_BoxGrabbedMaterial_mA6E21F5A06224FBF7820E752C397506259AFDF23(L_125, L_127, NULL);
		// om.OnManipulationStarted.AddListener((med) => bbox.HighlightWires());
		ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* L_128 = __this->___U3ComU3E5__3_4;
		NullCheck(L_128);
		ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* L_129;
		L_129 = ObjectManipulator_get_OnManipulationStarted_m6D34E8A4815F7BAF59B40857C3D991CA684E70C5_inline(L_128, NULL);
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_130 = V_1;
		UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49* L_131 = (UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49*)il2cpp_codegen_object_new(UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49_il2cpp_TypeInfo_var);
		NullCheck(L_131);
		UnityAction_1__ctor_mFCCE72B022568BFF6808E4C468007FF699A26D2E(L_131, L_130, (intptr_t)((void*)BoundingBoxExampleTest_U3CSequenceU3Eb__12_0_mFF939D0D67AA1DF5F1F85FE83E45D4FCDF6278C1_RuntimeMethod_var), NULL);
		NullCheck(L_129);
		UnityEvent_1_AddListener_mCE472D576E4B9591F706A2D7A00FC0BA3C985BBF(L_129, L_131, UnityEvent_1_AddListener_mCE472D576E4B9591F706A2D7A00FC0BA3C985BBF_RuntimeMethod_var);
		// om.OnManipulationEnded.AddListener((med) => bbox.UnhighlightWires());
		ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* L_132 = __this->___U3ComU3E5__3_4;
		NullCheck(L_132);
		ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* L_133;
		L_133 = ObjectManipulator_get_OnManipulationEnded_m342FD627CB115449ED8BE8C1A36FABD9C875E630_inline(L_132, NULL);
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_134 = V_1;
		UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49* L_135 = (UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49*)il2cpp_codegen_object_new(UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49_il2cpp_TypeInfo_var);
		NullCheck(L_135);
		UnityAction_1__ctor_mFCCE72B022568BFF6808E4C468007FF699A26D2E(L_135, L_134, (intptr_t)((void*)BoundingBoxExampleTest_U3CSequenceU3Eb__12_1_m0575870681F4EA0D248901AB93FDD48BB8F56280_RuntimeMethod_var), NULL);
		NullCheck(L_133);
		UnityEvent_1_AddListener_mCE472D576E4B9591F706A2D7A00FC0BA3C985BBF(L_133, L_135, UnityEvent_1_AddListener_mCE472D576E4B9591F706A2D7A00FC0BA3C985BBF_RuntimeMethod_var);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_136 = V_1;
		NullCheck(L_136);
		RuntimeObject* L_137;
		L_137 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_136, NULL);
		__this->___U3CU3E2__current_1 = L_137;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_137);
		__this->___U3CU3E1__state_0 = ((int32_t)18);
		return (bool)1;
	}

IL_057b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("BBox material none");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_138 = V_1;
		NullCheck(L_138);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_138, _stringLiteral670F8C2828AA4722DE617A1B888E4515BF0C2485, NULL);
		// bbox.BoxMaterial = null;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_139 = V_1;
		NullCheck(L_139);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_140 = L_139->___bbox_11;
		NullCheck(L_140);
		BoundingBox_set_BoxMaterial_m3419D9EA57D6A6F7FC6F26A7749D25C6EA2B6295(L_140, (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_141 = V_1;
		NullCheck(L_141);
		RuntimeObject* L_142;
		L_142 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_141, NULL);
		__this->___U3CU3E2__current_1 = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_142);
		__this->___U3CU3E1__state_0 = ((int32_t)19);
		return (bool)1;
	}

IL_05af:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Scale X and update rig");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_143 = V_1;
		NullCheck(L_143);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_143, _stringLiteral0893B6EE7D7D92EEC5DF4B8BD819415A9048260D, NULL);
		// cube.transform.localScale = new Vector3(2, 1, 1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_144 = __this->___U3CcubeU3E5__2_3;
		NullCheck(L_144);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_145;
		L_145 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_144, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		memset((&L_146), 0, sizeof(L_146));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_146), (2.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_145);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_145, L_146, NULL);
		// bbox.CreateRig();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_147 = V_1;
		NullCheck(L_147);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_148 = L_147->___bbox_11;
		NullCheck(L_148);
		BoundingBox_CreateRig_mDA4FDD6CF7A31298584CAF2627A9FFC9DE134886(L_148, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_149 = V_1;
		NullCheck(L_149);
		RuntimeObject* L_150;
		L_150 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_149, NULL);
		__this->___U3CU3E2__current_1 = L_150;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_150);
		__this->___U3CU3E1__state_0 = ((int32_t)20);
		return (bool)1;
	}

IL_0606:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Rotate 20 degrees and update rig");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_151 = V_1;
		NullCheck(L_151);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_151, _stringLiteral91E91D5EB2D73DE0D2500DAE0645428EC6B06F37, NULL);
		// cube.transform.localRotation = Quaternion.Euler(0, 20, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_152 = __this->___U3CcubeU3E5__2_3;
		NullCheck(L_152);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_153;
		L_153 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_152, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_154;
		L_154 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (20.0f), (0.0f), NULL);
		NullCheck(L_153);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_153, L_154, NULL);
		// bbox.ShowRotationHandleForY = true;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_155 = V_1;
		NullCheck(L_155);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_156 = L_155->___bbox_11;
		NullCheck(L_156);
		BoundingBox_set_ShowRotationHandleForY_m612FAE84BC3AE5390DB8479A1EF41AAA451223B9(L_156, (bool)1, NULL);
		// bbox.CreateRig();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_157 = V_1;
		NullCheck(L_157);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_158 = L_157->___bbox_11;
		NullCheck(L_158);
		BoundingBox_CreateRig_mDA4FDD6CF7A31298584CAF2627A9FFC9DE134886(L_158, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_159 = V_1;
		NullCheck(L_159);
		RuntimeObject* L_160;
		L_160 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_159, NULL);
		__this->___U3CU3E2__current_1 = L_160;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_160);
		__this->___U3CU3E1__state_0 = ((int32_t)21);
		return (bool)1;
	}

IL_0669:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Wireframe radius 0.1");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_161 = V_1;
		NullCheck(L_161);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_161, _stringLiteralCFC1C2D158A032F8FC48C299D5FDB28194E34C6A, NULL);
		// bbox.WireframeEdgeRadius = 0.1f;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_162 = V_1;
		NullCheck(L_162);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_163 = L_162->___bbox_11;
		NullCheck(L_163);
		BoundingBox_set_WireframeEdgeRadius_m6D523BF47450AEFD1D662F0212D768F4003AED68(L_163, (0.100000001f), NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_164 = V_1;
		NullCheck(L_164);
		RuntimeObject* L_165;
		L_165 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_164, NULL);
		__this->___U3CU3E2__current_1 = L_165;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_165);
		__this->___U3CU3E1__state_0 = ((int32_t)22);
		return (bool)1;
	}

IL_06a1:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Wireframe shape cylinder");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_166 = V_1;
		NullCheck(L_166);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_166, _stringLiteralB50148F64C80D84E61F7A56AF2EF142058BE341F, NULL);
		// bbox.WireframeShape = BoundingBox.WireframeType.Cylindrical;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_167 = V_1;
		NullCheck(L_167);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_168 = L_167->___bbox_11;
		NullCheck(L_168);
		BoundingBox_set_WireframeShape_mF3ED914F2F1357BD7BD6D3487291731078970077(L_168, 1, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_169 = V_1;
		NullCheck(L_169);
		RuntimeObject* L_170;
		L_170 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_169, NULL);
		__this->___U3CU3E2__current_1 = L_170;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_170);
		__this->___U3CU3E1__state_0 = ((int32_t)23);
		return (bool)1;
	}

IL_06d5:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(cube);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_171 = __this->___U3CcubeU3E5__2_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_171, NULL);
		// }
		__this->___U3CcubeU3E5__2_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcubeU3E5__2_3), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		__this->___U3ComU3E5__3_4 = (ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ComU3E5__3_4), (void*)(ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38*)NULL);
		__this->___U3CnewObjectU3E5__4_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnewObjectU3E5__4_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		__this->___U3CbcU3E5__5_6 = (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbcU3E5__5_6), (void*)(BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)NULL);
		// SetStatus("Many children");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_172 = V_1;
		NullCheck(L_172);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_172, _stringLiteral816442123FBC6285ACBB7D610A9E968403EFDE1E, NULL);
		// GameObject multiRoot = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_173 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_173);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_173, NULL);
		__this->___U3CnewObjectU3E5__4_5 = L_173;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnewObjectU3E5__4_5), (void*)L_173);
		// multiRoot.name = "multiRoot";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_174 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_174);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_174, _stringLiteral6596B125B0B472CE30C09148B49799ECB7AD3B6B, NULL);
		// Vector3 forwardOffset = Vector3.forward * .5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_175;
		L_175 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_176;
		L_176 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_175, (0.5f), NULL);
		V_2 = L_176;
		// multiRoot.transform.position = cubePosition + forwardOffset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_177 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_177);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_178;
		L_178 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_177, NULL);
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_179 = V_1;
		NullCheck(L_179);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_180 = L_179->___cubePosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_181 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_182;
		L_182 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_180, L_181, NULL);
		NullCheck(L_178);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_178, L_182, NULL);
		// Transform lastParent = null;
		__this->___U3ClastParentU3E5__6_7 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClastParentU3E5__6_7), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// int numCubes = 10;
		V_3 = ((int32_t)10);
		// for (int i = 0; i < numCubes; i++)
		V_5 = 0;
		goto IL_0824;
	}

IL_0767:
	{
		// var cubechild = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_183;
		L_183 = GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507(3, NULL);
		V_6 = L_183;
		// cubechild.transform.localPosition = Random.insideUnitSphere + cubePosition + forwardOffset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_184 = V_6;
		NullCheck(L_184);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_185;
		L_185 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_184, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_186;
		L_186 = Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C(NULL);
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_187 = V_1;
		NullCheck(L_187);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_188 = L_187->___cubePosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_189;
		L_189 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_186, L_188, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_190 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_191;
		L_191 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_189, L_190, NULL);
		NullCheck(L_185);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_185, L_191, NULL);
		// cubechild.transform.rotation = Quaternion.Euler(Random.insideUnitSphere * 360f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_192 = V_6;
		NullCheck(L_192);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_193;
		L_193 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_192, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194;
		L_194 = Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_195;
		L_195 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_194, (360.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_196;
		L_196 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_195, NULL);
		NullCheck(L_193);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_193, L_196, NULL);
		// cubechild.transform.parent = (lastParent != null) ? lastParent : multiRoot.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_197 = V_6;
		NullCheck(L_197);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_198;
		L_198 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_197, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_199 = __this->___U3ClastParentU3E5__6_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_200;
		L_200 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_199, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B27_0 = L_198;
		if (L_200)
		{
			G_B28_0 = L_198;
			goto IL_07d3;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_201 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_201);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_202;
		L_202 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_201, NULL);
		G_B29_0 = L_202;
		G_B29_1 = G_B27_0;
		goto IL_07d9;
	}

IL_07d3:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_203 = __this->___U3ClastParentU3E5__6_7;
		G_B29_0 = L_203;
		G_B29_1 = G_B28_0;
	}

IL_07d9:
	{
		NullCheck(G_B29_1);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(G_B29_1, G_B29_0, NULL);
		// float baseScale = lastParent == null ? 0.1f : 1f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_204 = __this->___U3ClastParentU3E5__6_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_205;
		L_205 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_204, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_205)
		{
			goto IL_07f3;
		}
	}
	{
		G_B32_0 = (1.0f);
		goto IL_07f8;
	}

IL_07f3:
	{
		G_B32_0 = (0.100000001f);
	}

IL_07f8:
	{
		V_7 = G_B32_0;
		// cubechild.transform.localScale = new Vector3(baseScale, baseScale, baseScale);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_206 = V_6;
		NullCheck(L_206);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_207;
		L_207 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_206, NULL);
		float L_208 = V_7;
		float L_209 = V_7;
		float L_210 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_211;
		memset((&L_211), 0, sizeof(L_211));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_211), L_208, L_209, L_210, /*hidden argument*/NULL);
		NullCheck(L_207);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_207, L_211, NULL);
		// lastParent = cubechild.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_212 = V_6;
		NullCheck(L_212);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_213;
		L_213 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_212, NULL);
		__this->___U3ClastParentU3E5__6_7 = L_213;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClastParentU3E5__6_7), (void*)L_213);
		// for (int i = 0; i < numCubes; i++)
		int32_t L_214 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_214, 1));
	}

IL_0824:
	{
		// for (int i = 0; i < numCubes; i++)
		int32_t L_215 = V_5;
		int32_t L_216 = V_3;
		if ((((int32_t)L_215) < ((int32_t)L_216)))
		{
			goto IL_0767;
		}
	}
	{
		// bbox = multiRoot.AddComponent<BoundingBox>();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_217 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_218 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_218);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_219;
		L_219 = GameObject_AddComponent_TisBoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D_mEA8B8AEA4CD2F47BF50E5147B6C2DEF2B2D4DDFF(L_218, GameObject_AddComponent_TisBoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D_mEA8B8AEA4CD2F47BF50E5147B6C2DEF2B2D4DDFF_RuntimeMethod_var);
		NullCheck(L_217);
		L_217->___bbox_11 = L_219;
		Il2CppCodeGenWriteBarrier((void**)(&L_217->___bbox_11), (void*)L_219);
		// bbox.BoundingBoxActivation = BoundingBox.BoundingBoxActivationType.ActivateOnStart;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_220 = V_1;
		NullCheck(L_220);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_221 = L_220->___bbox_11;
		NullCheck(L_221);
		BoundingBox_set_BoundingBoxActivation_m4A83D6FFCC6FC0F24CD56AD364DAFA33EC790623(L_221, 0, NULL);
		// bbox.HideElementsInInspector = false;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_222 = V_1;
		NullCheck(L_222);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_223 = L_222->___bbox_11;
		NullCheck(L_223);
		BoundingBox_set_HideElementsInInspector_mC65AA0D989BED6AD12A16C33DC7203B6915E2307(L_223, (bool)0, NULL);
		// bbox.WireframeEdgeRadius = .05f;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_224 = V_1;
		NullCheck(L_224);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_225 = L_224->___bbox_11;
		NullCheck(L_225);
		BoundingBox_set_WireframeEdgeRadius_m6D523BF47450AEFD1D662F0212D768F4003AED68(L_225, (0.0500000007f), NULL);
		// multiRoot.AddComponent<ConstraintManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_226 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_226);
		ConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16* L_227;
		L_227 = GameObject_AddComponent_TisConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16_mFE64421C1E4C885473A4025C4220BED207C48687(L_226, GameObject_AddComponent_TisConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16_mFE64421C1E4C885473A4025C4220BED207C48687_RuntimeMethod_var);
		// multiRoot.AddComponent<ObjectManipulator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_228 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_228);
		ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* L_229;
		L_229 = GameObject_AddComponent_TisObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38_m7987B1E4C0405213AFBED42D2DEE4C11B040AE41(L_228, GameObject_AddComponent_TisObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38_m7987B1E4C0405213AFBED42D2DEE4C11B040AE41_RuntimeMethod_var);
		// SetStatus("Randomize Child Scale for skewing");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_230 = V_1;
		NullCheck(L_230);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_230, _stringLiteral3655EFA58CD918A6CF06BBB9D43BFC9D3AAE2404, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_231 = V_1;
		NullCheck(L_231);
		RuntimeObject* L_232;
		L_232 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_231, NULL);
		__this->___U3CU3E2__current_1 = L_232;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_232);
		__this->___U3CU3E1__state_0 = ((int32_t)24);
		return (bool)1;
	}

IL_089e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// multiRoot.transform.position += Vector3.forward * 200f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_233 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_233);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_234;
		L_234 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_233, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_235 = L_234;
		NullCheck(L_235);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_236;
		L_236 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_235, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_237;
		L_237 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_238;
		L_238 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_237, (200.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_239;
		L_239 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_236, L_238, NULL);
		NullCheck(L_235);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_235, L_239, NULL);
		// var childTransform = multiRoot.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_240 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_240);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_241;
		L_241 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_240, NULL);
		V_4 = L_241;
		goto IL_094b;
	}

IL_08de:
	{
		// childTransform = childTransform.GetChild(0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_242 = V_4;
		NullCheck(L_242);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_243;
		L_243 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_242, 0, NULL);
		V_4 = L_243;
		// float baseScale = lastParent == null ? 0.1f : 1f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_244 = __this->___U3ClastParentU3E5__6_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_245;
		L_245 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_244, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_245)
		{
			goto IL_08fd;
		}
	}
	{
		G_B39_0 = (1.0f);
		goto IL_0902;
	}

IL_08fd:
	{
		G_B39_0 = (0.100000001f);
	}

IL_0902:
	{
		V_8 = G_B39_0;
		// childTransform.transform.localScale = new Vector3(baseScale * Random.Range(.5f, 2f), baseScale * Random.Range(.5f, 2f), baseScale * Random.Range(.5f, 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_246 = V_4;
		NullCheck(L_246);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_247;
		L_247 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_246, NULL);
		float L_248 = V_8;
		float L_249;
		L_249 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.5f), (2.0f), NULL);
		float L_250 = V_8;
		float L_251;
		L_251 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.5f), (2.0f), NULL);
		float L_252 = V_8;
		float L_253;
		L_253 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.5f), (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_254;
		memset((&L_254), 0, sizeof(L_254));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_254), ((float)il2cpp_codegen_multiply(L_248, L_249)), ((float)il2cpp_codegen_multiply(L_250, L_251)), ((float)il2cpp_codegen_multiply(L_252, L_253)), /*hidden argument*/NULL);
		NullCheck(L_247);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_247, L_254, NULL);
	}

IL_094b:
	{
		// while (childTransform.childCount > 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_255 = V_4;
		NullCheck(L_255);
		int32_t L_256;
		L_256 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_255, NULL);
		if ((((int32_t)L_256) > ((int32_t)0)))
		{
			goto IL_08de;
		}
	}
	{
		// bbox.WireframeEdgeRadius = 1f;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_257 = V_1;
		NullCheck(L_257);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_258 = L_257->___bbox_11;
		NullCheck(L_258);
		BoundingBox_set_WireframeEdgeRadius_m6D523BF47450AEFD1D662F0212D768F4003AED68(L_258, (1.0f), NULL);
		// bbox.CreateRig();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_259 = V_1;
		NullCheck(L_259);
		BoundingBox_t42AE0573F5E0C923C445160E40BE4B877F481A8D* L_260 = L_259->___bbox_11;
		NullCheck(L_260);
		BoundingBox_CreateRig_mDA4FDD6CF7A31298584CAF2627A9FFC9DE134886(L_260, NULL);
		// SetStatus("Delete GameObject");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_261 = V_1;
		NullCheck(L_261);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_261, _stringLiteralD0F771D59E9ED5FD093C2B91752841DE48F1BAE6, NULL);
		// yield return WaitForSpeechCommand();
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_262 = V_1;
		NullCheck(L_262);
		RuntimeObject* L_263;
		L_263 = BoundingBoxExampleTest_WaitForSpeechCommand_mEF5751F616E21567794FCB92397AA9BC67EBAFD9(L_262, NULL);
		__this->___U3CU3E2__current_1 = L_263;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_263);
		__this->___U3CU3E1__state_0 = ((int32_t)25);
		return (bool)1;
	}

IL_0991:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(multiRoot);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_264 = __this->___U3CnewObjectU3E5__4_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_264, NULL);
		// }
		__this->___U3CnewObjectU3E5__4_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnewObjectU3E5__4_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		__this->___U3ClastParentU3E5__6_7 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClastParentU3E5__6_7), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// SetStatus("Done!");
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_265 = V_1;
		NullCheck(L_265);
		BoundingBoxExampleTest_SetStatus_mAB092B537F3279C2763D5CDEA8581C77AA6C9853(L_265, _stringLiteral497963E2D53B0D05EEB52F563374952F51400304, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSequenceU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5FE29693EF5BB291C1BACB0F7950360E6F45AAC9 (U3CSequenceU3Ed__12_tF55D339C4A243C24CBE65F823E7A04CE6E203933* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSequenceU3Ed__12_System_Collections_IEnumerator_Reset_mA28B956659A382EA5DF3C7E8EC322CB548EB49FC (U3CSequenceU3Ed__12_tF55D339C4A243C24CBE65F823E7A04CE6E203933* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSequenceU3Ed__12_System_Collections_IEnumerator_Reset_mA28B956659A382EA5DF3C7E8EC322CB548EB49FC_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<Sequence>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSequenceU3Ed__12_System_Collections_IEnumerator_get_Current_m2FF6E0ECCBA04C71AD0BB20D0FFFCC605D72CFAF (U3CSequenceU3Ed__12_tF55D339C4A243C24CBE65F823E7A04CE6E203933* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSpeechCommandU3Ed__13__ctor_m6FB0854046E56A3E0B22E796BCD6EED6EF8CF782 (U3CWaitForSpeechCommandU3Ed__13_tA3478029843B23D9C8A63D157FFB5BB99CF37ED5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSpeechCommandU3Ed__13_System_IDisposable_Dispose_m283D88A6B0AD0FAE77E4453D509E33A61409117D (U3CWaitForSpeechCommandU3Ed__13_tA3478029843B23D9C8A63D157FFB5BB99CF37ED5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForSpeechCommandU3Ed__13_MoveNext_m4EC32F7EDA8014CBFBA9F3864E08E4588A143277 (U3CWaitForSpeechCommandU3Ed__13_tA3478029843B23D9C8A63D157FFB5BB99CF37ED5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0037;
	}

IL_0020:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0037:
	{
		// while (!speechTriggeredFalg)
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->___speechTriggeredFalg_9;
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// speechTriggeredFalg = false;
		BoundingBoxExampleTest_t286F3AF05F857D5F8AACC9A4A216416EBDC7E552* L_6 = V_1;
		NullCheck(L_6);
		L_6->___speechTriggeredFalg_9 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForSpeechCommandU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6B3A3044C25185F3AEFF5BE7B1480F5BF0727C64 (U3CWaitForSpeechCommandU3Ed__13_tA3478029843B23D9C8A63D157FFB5BB99CF37ED5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSpeechCommandU3Ed__13_System_Collections_IEnumerator_Reset_m776239BEEA992B4EC07BF4820B48DF308E9BD601 (U3CWaitForSpeechCommandU3Ed__13_tA3478029843B23D9C8A63D157FFB5BB99CF37ED5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForSpeechCommandU3Ed__13_System_Collections_IEnumerator_Reset_m776239BEEA992B4EC07BF4820B48DF308E9BD601_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundingBoxExampleTest/<WaitForSpeechCommand>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForSpeechCommandU3Ed__13_System_Collections_IEnumerator_get_Current_m3C65E81450D102BAB16E193330897F48B3A9AE17 (U3CWaitForSpeechCommandU3Ed__13_tA3478029843B23D9C8A63D157FFB5BB99CF37ED5* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControlRuntimeExample_OnEnable_m5FEE3602036C62349B9537E4F7A3550ADA2FEF79 (BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySpeechHandler_tF57481E35DD5D8C0EC2D82DA0E72CDE0058C12B5_m02DD2BB27CFB3B352F1D771B1EB3DDF1A7EB9547_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// CoreServices.InputSystem?.RegisterHandler<IMixedRealitySpeechHandler>(this);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySpeechHandler_tF57481E35DD5D8C0EC2D82DA0E72CDE0058C12B5_m02DD2BB27CFB3B352F1D771B1EB3DDF1A7EB9547_RuntimeMethod_var, G_B2_0, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControlRuntimeExample_OnDisable_m2D717D12A295402AC6580E2787AFEFE606C78A61 (BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySpeechHandler_tF57481E35DD5D8C0EC2D82DA0E72CDE0058C12B5_m00DB1183F954B0E4F7D51E2D771A39E88F2C2661_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// CoreServices.InputSystem?.UnregisterHandler<IMixedRealitySpeechHandler>(this);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m47147418643299159BF4DF408F768844FDC33943(NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySpeechHandler_tF57481E35DD5D8C0EC2D82DA0E72CDE0058C12B5_m00DB1183F954B0E4F7D51E2D771A39E88F2C2661_RuntimeMethod_var, G_B2_0, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControlRuntimeExample_Start_m4984E137FCE0C1F2433910514EB8A60BBB636481 (BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Sequence());
		RuntimeObject* L_0;
		L_0 = BoundsControlRuntimeExample_Sequence_mA8BB9C4271B68A0FE6082F3C9398AE11ABE3AE0F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::SetStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646 (BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* __this, String_t* ___status0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC74B0680110FAF1A171E3BA0F738CB4754DA7389);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	StringBuilder_t* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	StringBuilder_t* G_B1_1 = NULL;
	{
		// StringBuilder b = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// b.AppendLine($"{status}");
		StringBuilder_t* L_1 = V_0;
		String_t* L_2 = ___status0;
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0011;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B2_1, G_B2_0, NULL);
		// b.AppendLine($"Press '1' or say 'select' to continue");
		StringBuilder_t* L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_5, _stringLiteralC74B0680110FAF1A171E3BA0F738CB4754DA7389, NULL);
		// statusText.text = b.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_7 = __this->___statusText_4;
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_9);
		// }
		return;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::Sequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoundsControlRuntimeExample_Sequence_mA8BB9C4271B68A0FE6082F3C9398AE11ABE3AE0F (BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSequenceU3Ed__12_tC2B6193C1B40DBAC26777FF6B1D1F96218C979B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSequenceU3Ed__12_tC2B6193C1B40DBAC26777FF6B1D1F96218C979B6* L_0 = (U3CSequenceU3Ed__12_tC2B6193C1B40DBAC26777FF6B1D1F96218C979B6*)il2cpp_codegen_object_new(U3CSequenceU3Ed__12_tC2B6193C1B40DBAC26777FF6B1D1F96218C979B6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSequenceU3Ed__12__ctor_mEE411CE274DF4BBEFA671D5E4915AA11AD47EA2E(L_0, 0, NULL);
		U3CSequenceU3Ed__12_tC2B6193C1B40DBAC26777FF6B1D1F96218C979B6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::WaitForSpeechCommand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E (BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForSpeechCommandU3Ed__13_tBCE429335B21A71E6105155218A71C1E2926AA7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForSpeechCommandU3Ed__13_tBCE429335B21A71E6105155218A71C1E2926AA7E* L_0 = (U3CWaitForSpeechCommandU3Ed__13_tBCE429335B21A71E6105155218A71C1E2926AA7E*)il2cpp_codegen_object_new(U3CWaitForSpeechCommandU3Ed__13_tBCE429335B21A71E6105155218A71C1E2926AA7E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitForSpeechCommandU3Ed__13__ctor_m7D65D5CDE2156C2AD5B4FB7E9B352CDD5A8EF794(L_0, 0, NULL);
		U3CWaitForSpeechCommandU3Ed__13_tBCE429335B21A71E6105155218A71C1E2926AA7E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::OnSpeechKeywordRecognized(Microsoft.MixedReality.Toolkit.Input.SpeechEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControlRuntimeExample_OnSpeechKeywordRecognized_mD75A366084299899AD3FCF16A4A47F21174957BB (BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* __this, SpeechEventData_t4424832821FEC4163B9CFCD3A9F457DF930A95BD* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31E8E4ACB2EDC39B158FBA91185DE1333306F668);
		s_Il2CppMethodInitialized = true;
	}
	SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (eventData.Command.Keyword.Equals("Select", System.StringComparison.CurrentCultureIgnoreCase))
		SpeechEventData_t4424832821FEC4163B9CFCD3A9F457DF930A95BD* L_0 = ___eventData0;
		NullCheck(L_0);
		SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC L_1;
		L_1 = SpeechEventData_get_Command_m55D611C557104EC236CE8D929CFBFA2D37216636_inline(L_0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = SpeechCommands_get_Keyword_m381228670D38A858F9AE14CBA8D101E7085BA94C((&V_0), NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_2, _stringLiteral31E8E4ACB2EDC39B158FBA91185DE1333306F668, 1, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// speechTriggeredFlag = true;
		__this->___speechTriggeredFlag_9 = (bool)1;
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControlRuntimeExample__ctor_m7D81D7B40FB28D1F54B1678FE948BE6ED1D3C43D (BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 cubePosition = new Vector3(0, 0, 2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (2.0f), /*hidden argument*/NULL);
		__this->___cubePosition_10 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::<Sequence>b__12_0(Microsoft.MixedReality.Toolkit.UI.ManipulationEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControlRuntimeExample_U3CSequenceU3Eb__12_0_m56CBCF1CCB44BE9BF323DBE554BE7741A60EFA89 (BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* __this, ManipulationEventData_t3669F25A1E18443CE54C89DA7F6B5C641FD80F89* ___med0, const RuntimeMethod* method) 
{
	{
		// om.OnManipulationStarted.AddListener((med) => boundsControl.HighlightWires());
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_0 = __this->___boundsControl_11;
		NullCheck(L_0);
		BoundsControl_HighlightWires_m01C0EB86622840FA767F97742BA176808F9C09B4(L_0, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample::<Sequence>b__12_1(Microsoft.MixedReality.Toolkit.UI.ManipulationEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsControlRuntimeExample_U3CSequenceU3Eb__12_1_mEEDE0BEB4314834E65950313E42394FE4FE55402 (BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* __this, ManipulationEventData_t3669F25A1E18443CE54C89DA7F6B5C641FD80F89* ___med0, const RuntimeMethod* method) 
{
	{
		// om.OnManipulationEnded.AddListener((med) => boundsControl.UnhighlightWires());
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_0 = __this->___boundsControl_11;
		NullCheck(L_0);
		BoundsControl_UnhighlightWires_m6909DF3D0D5F1378EA3C54CD23E92A7F4974AFF0(L_0, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSequenceU3Ed__12__ctor_mEE411CE274DF4BBEFA671D5E4915AA11AD47EA2E (U3CSequenceU3Ed__12_tC2B6193C1B40DBAC26777FF6B1D1F96218C979B6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSequenceU3Ed__12_System_IDisposable_Dispose_m842C6733D840A95DDBE0C3946E5A79EB8A0DE880 (U3CSequenceU3Ed__12_tC2B6193C1B40DBAC26777FF6B1D1F96218C979B6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSequenceU3Ed__12_MoveNext_mEC2CF8A264CC326E6EEED4581E3935DC2879DE75 (U3CSequenceU3Ed__12_tC2B6193C1B40DBAC26777FF6B1D1F96218C979B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsControlRuntimeExample_U3CSequenceU3Eb__12_0_m56CBCF1CCB44BE9BF323DBE554BE7741A60EFA89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsControlRuntimeExample_U3CSequenceU3Eb__12_1_mEEDE0BEB4314834E65950313E42394FE4FE55402_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547_m9533CFEE6F12C8F67D2A0440BE89C7EBB61BCE4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16_mFE64421C1E4C885473A4025C4220BED207C48687_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38_m7987B1E4C0405213AFBED42D2DEE4C11B040AE41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mCE472D576E4B9591F706A2D7A00FC0BA3C985BBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0893B6EE7D7D92EEC5DF4B8BD819415A9048260D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C4AA015CF736BA57D6243943A6C9DA33C794A91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25F0B5C5097297B2DE6C0F2A70A5DDE0BF7B99ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral285AE8367EF72F152792EF14AAAC6EF625130994);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E0CC2DE428319C2646E0E295A66C35A732ED352);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral330B191DB5AF908CB6A3230530DCD6E9A21D2C4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3655EFA58CD918A6CF06BBB9D43BFC9D3AAE2404);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ED8C8ED37C8A0119FC85220A1B4073DACA3A53A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EF79C9C03F34A466743105CBD82EFB038AE1047);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40442EDA4EDA74622DB1FC827383DFA39BAE341B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral497963E2D53B0D05EEB52F563374952F51400304);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6596B125B0B472CE30C09148B49799ECB7AD3B6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral670F8C2828AA4722DE617A1B888E4515BF0C2485);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B3A9C268EC2A1B1C035619C6A0C1FCF7C78C99B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C5D6EBEDFE936648874854E5F6DF342D594104D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral816442123FBC6285ACBB7D610A9E968403EFDE1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E91D5EB2D73DE0D2500DAE0645428EC6B06F37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B6F45F608528E2F182DFB9A4714097FD6DA2E17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5676CB0976CA579589039A064A0D04BACF68C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABB6CA9F15FA4D0C88D5EF00F5CB7C8FFFE24E87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABD4164FE9CCC6A2A0367A5E5A99E916644C5621);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB106B257720A10C98419096B5FAEEB08EA673997);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB50148F64C80D84E61F7A56AF2EF142058BE341F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8550D4379B5F21DD5B0080AA4E715E8E76C17CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD29CFE22E70049887B0491EE4860B0A772EF8CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFC1C2D158A032F8FC48C299D5FDB28194E34C6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0F771D59E9ED5FD093C2B91752841DE48F1BAE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA4F59CE87B7FAC2A32C219EF9C2F065CA108A5A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	int32_t V_5 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B28_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B27_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B29_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B29_1 = NULL;
	float G_B32_0 = 0.0f;
	float G_B39_0 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_007e;
			}
			case 1:
			{
				goto IL_0123;
			}
			case 2:
			{
				goto IL_01b5;
			}
			case 3:
			{
				goto IL_01fb;
			}
			case 4:
			{
				goto IL_0240;
			}
			case 5:
			{
				goto IL_0273;
			}
			case 6:
			{
				goto IL_02a6;
			}
			case 7:
			{
				goto IL_02d9;
			}
			case 8:
			{
				goto IL_030c;
			}
			case 9:
			{
				goto IL_0340;
			}
			case 10:
			{
				goto IL_0379;
			}
			case 11:
			{
				goto IL_03b2;
			}
			case 12:
			{
				goto IL_03f9;
			}
			case 13:
			{
				goto IL_0431;
			}
			case 14:
			{
				goto IL_046e;
			}
			case 15:
			{
				goto IL_04ac;
			}
			case 16:
			{
				goto IL_0500;
			}
			case 17:
			{
				goto IL_053e;
			}
			case 18:
			{
				goto IL_05b4;
			}
			case 19:
			{
				goto IL_05ed;
			}
			case 20:
			{
				goto IL_0639;
			}
			case 21:
			{
				goto IL_0696;
			}
			case 22:
			{
				goto IL_06d3;
			}
			case 23:
			{
				goto IL_070c;
			}
			case 24:
			{
				goto IL_08da;
			}
			case 25:
			{
				goto IL_09d2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_007e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507(3, NULL);
		__this->___U3CcubeU3E5__2_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcubeU3E5__2_3), (void*)L_3);
		// cube.GetComponent<MeshRenderer>().material = darkGrayMaterial;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___U3CcubeU3E5__2_3;
		NullCheck(L_4);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5;
		L_5 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_4, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_6 = V_1;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = L_6->___darkGrayMaterial_5;
		NullCheck(L_5);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_5, L_7, NULL);
		// cube.transform.position = cubePosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___U3CcubeU3E5__2_3;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_10 = V_1;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10->___cubePosition_10;
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_11, NULL);
		// SetStatus("Instantiate BoundsControl");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_12 = V_1;
		NullCheck(L_12);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_12, _stringLiteralABB6CA9F15FA4D0C88D5EF00F5CB7C8FFFE24E87, NULL);
		// boundsControl = cube.AddComponent<BoundsControl>();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_13 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___U3CcubeU3E5__2_3;
		NullCheck(L_14);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_15;
		L_15 = GameObject_AddComponent_TisBoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547_m9533CFEE6F12C8F67D2A0440BE89C7EBB61BCE4C(L_14, GameObject_AddComponent_TisBoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547_m9533CFEE6F12C8F67D2A0440BE89C7EBB61BCE4C_RuntimeMethod_var);
		NullCheck(L_13);
		L_13->___boundsControl_11 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___boundsControl_11), (void*)L_15);
		// boundsControl.HideElementsInInspector = false;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_16 = V_1;
		NullCheck(L_16);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_17 = L_16->___boundsControl_11;
		NullCheck(L_17);
		BoundsControl_set_HideElementsInInspector_m702F0CD475F2B103A435A85B1F6BDCDDD98577F4(L_17, (bool)0, NULL);
		// boundsControl.BoundsControlActivation = BoundsControlActivationType.ActivateOnStart;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_18 = V_1;
		NullCheck(L_18);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_19 = L_18->___boundsControl_11;
		NullCheck(L_19);
		BoundsControl_set_BoundsControlActivation_mF2A4AE4EAA5F60BED97B99789B5682F570317114(L_19, 0, NULL);
		// var cm = cube.AddComponent<ConstraintManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___U3CcubeU3E5__2_3;
		NullCheck(L_20);
		ConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16* L_21;
		L_21 = GameObject_AddComponent_TisConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16_mFE64421C1E4C885473A4025C4220BED207C48687(L_20, GameObject_AddComponent_TisConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16_mFE64421C1E4C885473A4025C4220BED207C48687_RuntimeMethod_var);
		// var om = cube.AddComponent<MRTKObjectManipulator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___U3CcubeU3E5__2_3;
		NullCheck(L_22);
		ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* L_23;
		L_23 = GameObject_AddComponent_TisObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38_m7987B1E4C0405213AFBED42D2DEE4C11B040AE41(L_22, GameObject_AddComponent_TisObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38_m7987B1E4C0405213AFBED42D2DEE4C11B040AE41_RuntimeMethod_var);
		__this->___U3ComU3E5__3_4 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ComU3E5__3_4), (void*)L_23);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_24 = V_1;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_24, NULL);
		__this->___U3CU3E2__current_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_25);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0123:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Set Target bounds override");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_26 = V_1;
		NullCheck(L_26);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_26, _stringLiteralB8550D4379B5F21DD5B0080AA4E715E8E76C17CB, NULL);
		// var newObject = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_27, NULL);
		__this->___U3CnewObjectU3E5__4_5 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnewObjectU3E5__4_5), (void*)L_27);
		// var bc = newObject.AddComponent<BoxCollider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_28);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_29;
		L_29 = GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23(L_28, GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23_RuntimeMethod_var);
		__this->___U3CbcU3E5__5_6 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbcU3E5__5_6), (void*)L_29);
		// bc.center = new Vector3(.25f, 0, 0);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_30 = __this->___U3CbcU3E5__5_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), (0.25f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		BoxCollider_set_center_m0AB0482699735FEE8306A7FCAAE66A76C479F0F0(L_30, L_31, NULL);
		// bc.size = new Vector3(0.162f, 0.1f, 1);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_32 = __this->___U3CbcU3E5__5_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), (0.162f), (0.100000001f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_32);
		BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A(L_32, L_33, NULL);
		// boundsControl.BoundsOverride = bc;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_34 = V_1;
		NullCheck(L_34);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_35 = L_34->___boundsControl_11;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_36 = __this->___U3CbcU3E5__5_6;
		NullCheck(L_35);
		BoundsControl_set_BoundsOverride_m082BC37EC5FBD74449F66C6007F3ABF888128959(L_35, L_36, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_37 = V_1;
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_37, NULL);
		__this->___U3CU3E2__current_1 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_38);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_01b5:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Change target bounds override size");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_39 = V_1;
		NullCheck(L_39);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_39, _stringLiteral285AE8367EF72F152792EF14AAAC6EF625130994, NULL);
		// bc.size = new Vector3(0.5f, 0.1f, 1);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_40 = __this->___U3CbcU3E5__5_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_41), (0.5f), (0.100000001f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_40);
		BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A(L_40, L_41, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_42 = V_1;
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_42, NULL);
		__this->___U3CU3E2__current_1 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_43);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_01fb:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Remove target bounds override");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_44 = V_1;
		NullCheck(L_44);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_44, _stringLiteral9B6F45F608528E2F182DFB9A4714097FD6DA2E17, NULL);
		// boundsControl.BoundsOverride = null;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_45 = V_1;
		NullCheck(L_45);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_46 = L_45->___boundsControl_11;
		NullCheck(L_46);
		BoundsControl_set_BoundsOverride_m082BC37EC5FBD74449F66C6007F3ABF888128959(L_46, (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)NULL, NULL);
		// Destroy(newObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___U3CnewObjectU3E5__4_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_47, NULL);
		// newObject = null;
		__this->___U3CnewObjectU3E5__4_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnewObjectU3E5__4_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_48 = V_1;
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_48, NULL);
		__this->___U3CU3E2__current_1 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_49);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_0240:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("HideElementsInInspector true");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_50 = V_1;
		NullCheck(L_50);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_50, _stringLiteral1C4AA015CF736BA57D6243943A6C9DA33C794A91, NULL);
		// boundsControl.HideElementsInInspector = true;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_51 = V_1;
		NullCheck(L_51);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_52 = L_51->___boundsControl_11;
		NullCheck(L_52);
		BoundsControl_set_HideElementsInInspector_m702F0CD475F2B103A435A85B1F6BDCDDD98577F4(L_52, (bool)1, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_53 = V_1;
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_53, NULL);
		__this->___U3CU3E2__current_1 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_54);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_0273:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("HideElementsInInspector false");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_55 = V_1;
		NullCheck(L_55);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_55, _stringLiteral7B3A9C268EC2A1B1C035619C6A0C1FCF7C78C99B, NULL);
		// boundsControl.HideElementsInInspector = false;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_56 = V_1;
		NullCheck(L_56);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_57 = L_56->___boundsControl_11;
		NullCheck(L_57);
		BoundsControl_set_HideElementsInInspector_m702F0CD475F2B103A435A85B1F6BDCDDD98577F4(L_57, (bool)0, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_58 = V_1;
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_58, NULL);
		__this->___U3CU3E2__current_1 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_59);
		__this->___U3CU3E1__state_0 = 6;
		return (bool)1;
	}

IL_02a6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("FlattenX");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_60 = V_1;
		NullCheck(L_60);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_60, _stringLiteral25F0B5C5097297B2DE6C0F2A70A5DDE0BF7B99ED, NULL);
		// boundsControl.FlattenAxis = FlattenModeType.FlattenX;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_61 = V_1;
		NullCheck(L_61);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_62 = L_61->___boundsControl_11;
		NullCheck(L_62);
		BoundsControl_set_FlattenAxis_m2B22D2EBEA7DE9CE54CCE5E766B184368B07A2CE(L_62, 1, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_63 = V_1;
		NullCheck(L_63);
		RuntimeObject* L_64;
		L_64 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_63, NULL);
		__this->___U3CU3E2__current_1 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_64);
		__this->___U3CU3E1__state_0 = 7;
		return (bool)1;
	}

IL_02d9:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("FlattenY");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_65 = V_1;
		NullCheck(L_65);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_65, _stringLiteralCD29CFE22E70049887B0491EE4860B0A772EF8CE, NULL);
		// boundsControl.FlattenAxis = FlattenModeType.FlattenY;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_66 = V_1;
		NullCheck(L_66);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_67 = L_66->___boundsControl_11;
		NullCheck(L_67);
		BoundsControl_set_FlattenAxis_m2B22D2EBEA7DE9CE54CCE5E766B184368B07A2CE(L_67, 2, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_68 = V_1;
		NullCheck(L_68);
		RuntimeObject* L_69;
		L_69 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_68, NULL);
		__this->___U3CU3E2__current_1 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_69);
		__this->___U3CU3E1__state_0 = 8;
		return (bool)1;
	}

IL_030c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("FlattenNone");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_70 = V_1;
		NullCheck(L_70);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_70, _stringLiteralABD4164FE9CCC6A2A0367A5E5A99E916644C5621, NULL);
		// boundsControl.FlattenAxis = FlattenModeType.DoNotFlatten;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_71 = V_1;
		NullCheck(L_71);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_72 = L_71->___boundsControl_11;
		NullCheck(L_72);
		BoundsControl_set_FlattenAxis_m2B22D2EBEA7DE9CE54CCE5E766B184368B07A2CE(L_72, 0, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_73 = V_1;
		NullCheck(L_73);
		RuntimeObject* L_74;
		L_74 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_73, NULL);
		__this->___U3CU3E2__current_1 = L_74;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_74);
		__this->___U3CU3E1__state_0 = ((int32_t)9);
		return (bool)1;
	}

IL_0340:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("ShowWireframe false");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_75 = V_1;
		NullCheck(L_75);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_75, _stringLiteralDA4F59CE87B7FAC2A32C219EF9C2F065CA108A5A, NULL);
		// boundsControl.LinksConfig.ShowWireFrame = false;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_76 = V_1;
		NullCheck(L_76);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_77 = L_76->___boundsControl_11;
		NullCheck(L_77);
		LinksConfiguration_tED831CC1625B1AF6E76810B5B5AF40018342DBB9* L_78;
		L_78 = BoundsControl_get_LinksConfig_mE38043D5C379F5B33BFA563AFCBC863F2433AABD_inline(L_77, NULL);
		NullCheck(L_78);
		LinksConfiguration_set_ShowWireFrame_m47BE8E7E8781D10E64B9B059A1506EEB7B70E9FA(L_78, (bool)0, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_79 = V_1;
		NullCheck(L_79);
		RuntimeObject* L_80;
		L_80 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_79, NULL);
		__this->___U3CU3E2__current_1 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_80);
		__this->___U3CU3E1__state_0 = ((int32_t)10);
		return (bool)1;
	}

IL_0379:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("ShowWireframe true");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_81 = V_1;
		NullCheck(L_81);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_81, _stringLiteral2E0CC2DE428319C2646E0E295A66C35A732ED352, NULL);
		// boundsControl.LinksConfig.ShowWireFrame = true;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_82 = V_1;
		NullCheck(L_82);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_83 = L_82->___boundsControl_11;
		NullCheck(L_83);
		LinksConfiguration_tED831CC1625B1AF6E76810B5B5AF40018342DBB9* L_84;
		L_84 = BoundsControl_get_LinksConfig_mE38043D5C379F5B33BFA563AFCBC863F2433AABD_inline(L_83, NULL);
		NullCheck(L_84);
		LinksConfiguration_set_ShowWireFrame_m47BE8E7E8781D10E64B9B059A1506EEB7B70E9FA(L_84, (bool)1, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_85 = V_1;
		NullCheck(L_85);
		RuntimeObject* L_86;
		L_86 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_85, NULL);
		__this->___U3CU3E2__current_1 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_86);
		__this->___U3CU3E1__state_0 = ((int32_t)11);
		return (bool)1;
	}

IL_03b2:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("BoxPadding 0.2f");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_87 = V_1;
		NullCheck(L_87);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_87, _stringLiteral3EF79C9C03F34A466743105CBD82EFB038AE1047, NULL);
		// boundsControl.BoxPadding = new Vector3(0.2f, 0.2f, 0.2f);
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_88 = V_1;
		NullCheck(L_88);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_89 = L_88->___boundsControl_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		memset((&L_90), 0, sizeof(L_90));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_90), (0.200000003f), (0.200000003f), (0.200000003f), /*hidden argument*/NULL);
		NullCheck(L_89);
		BoundsControl_set_BoxPadding_m83A3E2381ACE717EDEEDF3ACADF5E8718EC1026C(L_89, L_90, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_91 = V_1;
		NullCheck(L_91);
		RuntimeObject* L_92;
		L_92 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_91, NULL);
		__this->___U3CU3E2__current_1 = L_92;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_92);
		__this->___U3CU3E1__state_0 = ((int32_t)12);
		return (bool)1;
	}

IL_03f9:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("BoxPadding 0");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_93 = V_1;
		NullCheck(L_93);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_93, _stringLiteral3ED8C8ED37C8A0119FC85220A1B4073DACA3A53A, NULL);
		// boundsControl.BoxPadding = Vector3.zero;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_94 = V_1;
		NullCheck(L_94);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_95 = L_94->___boundsControl_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_95);
		BoundsControl_set_BoxPadding_m83A3E2381ACE717EDEEDF3ACADF5E8718EC1026C(L_95, L_96, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_97 = V_1;
		NullCheck(L_97);
		RuntimeObject* L_98;
		L_98 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_97, NULL);
		__this->___U3CU3E2__current_1 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_98);
		__this->___U3CU3E1__state_0 = ((int32_t)13);
		return (bool)1;
	}

IL_0431:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Set scale handle size 0.3");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_99 = V_1;
		NullCheck(L_99);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_99, _stringLiteral7C5D6EBEDFE936648874854E5F6DF342D594104D, NULL);
		// boundsControl.ScaleHandlesConfig.HandleSize = 0.3f;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_100 = V_1;
		NullCheck(L_100);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_101 = L_100->___boundsControl_11;
		NullCheck(L_101);
		ScaleHandlesConfiguration_t79002721D09E9BAE57FCF4ACCB206EB0C59A57A8* L_102;
		L_102 = BoundsControl_get_ScaleHandlesConfig_mF4E6B27A29516D14D9FE07697CC281723402B622_inline(L_101, NULL);
		NullCheck(L_102);
		HandlesBaseConfiguration_set_HandleSize_m94C7533916041EE7F9DF9E15F076031A1CB824D5(L_102, (0.300000012f), NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_103 = V_1;
		NullCheck(L_103);
		RuntimeObject* L_104;
		L_104 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_103, NULL);
		__this->___U3CU3E2__current_1 = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_104);
		__this->___U3CU3E1__state_0 = ((int32_t)14);
		return (bool)1;
	}

IL_046e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Set scale handle widget prefab");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_105 = V_1;
		NullCheck(L_105);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_105, _stringLiteral9D5676CB0976CA579589039A064A0D04BACF68C2, NULL);
		// boundsControl.ScaleHandlesConfig.HandlePrefab = scaleWidget;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_106 = V_1;
		NullCheck(L_106);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_107 = L_106->___boundsControl_11;
		NullCheck(L_107);
		ScaleHandlesConfiguration_t79002721D09E9BAE57FCF4ACCB206EB0C59A57A8* L_108;
		L_108 = BoundsControl_get_ScaleHandlesConfig_mF4E6B27A29516D14D9FE07697CC281723402B622_inline(L_107, NULL);
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_109 = V_1;
		NullCheck(L_109);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_110 = L_109->___scaleWidget_8;
		NullCheck(L_108);
		HandlesBaseConfiguration_set_HandlePrefab_m01057A187A2CCF61C7A0D7BEF85B49AC4E190ACA(L_108, L_110, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_111 = V_1;
		NullCheck(L_111);
		RuntimeObject* L_112;
		L_112 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_111, NULL);
		__this->___U3CU3E2__current_1 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_112);
		__this->___U3CU3E1__state_0 = ((int32_t)15);
		return (bool)1;
	}

IL_04ac:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Handles red");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_113 = V_1;
		NullCheck(L_113);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_113, _stringLiteralB106B257720A10C98419096B5FAEEB08EA673997, NULL);
		// boundsControl.ScaleHandlesConfig.HandleMaterial = redMaterial;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_114 = V_1;
		NullCheck(L_114);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_115 = L_114->___boundsControl_11;
		NullCheck(L_115);
		ScaleHandlesConfiguration_t79002721D09E9BAE57FCF4ACCB206EB0C59A57A8* L_116;
		L_116 = BoundsControl_get_ScaleHandlesConfig_mF4E6B27A29516D14D9FE07697CC281723402B622_inline(L_115, NULL);
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_117 = V_1;
		NullCheck(L_117);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_118 = L_117->___redMaterial_6;
		NullCheck(L_116);
		HandlesBaseConfiguration_set_HandleMaterial_m50C2284D22EF6238412080982E524B0D23C9E588(L_116, L_118, NULL);
		// boundsControl.RotationHandlesConfig.HandleMaterial = redMaterial;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_119 = V_1;
		NullCheck(L_119);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_120 = L_119->___boundsControl_11;
		NullCheck(L_120);
		RotationHandlesConfiguration_t01D98D5153FF07876782F838682A59A9BD381A2C* L_121;
		L_121 = BoundsControl_get_RotationHandlesConfig_m14068630E6743C226CE4C1377DB2EBFC024CB64B_inline(L_120, NULL);
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_122 = V_1;
		NullCheck(L_122);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_123 = L_122->___redMaterial_6;
		NullCheck(L_121);
		HandlesBaseConfiguration_set_HandleMaterial_m50C2284D22EF6238412080982E524B0D23C9E588(L_121, L_123, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_124 = V_1;
		NullCheck(L_124);
		RuntimeObject* L_125;
		L_125 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_124, NULL);
		__this->___U3CU3E2__current_1 = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_125);
		__this->___U3CU3E1__state_0 = ((int32_t)16);
		return (bool)1;
	}

IL_0500:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("BBox material cyan");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_126 = V_1;
		NullCheck(L_126);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_126, _stringLiteral330B191DB5AF908CB6A3230530DCD6E9A21D2C4A, NULL);
		// boundsControl.BoxDisplayConfig.BoxMaterial = cyanMaterial;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_127 = V_1;
		NullCheck(L_127);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_128 = L_127->___boundsControl_11;
		NullCheck(L_128);
		BoxDisplayConfiguration_t83FA4561B3E0ADDC45AC2516DD78775F5E80849A* L_129;
		L_129 = BoundsControl_get_BoxDisplayConfig_m9BB482C42F5C33EFEFDEDEFA5ED471ABF14C4FB8_inline(L_128, NULL);
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_130 = V_1;
		NullCheck(L_130);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_131 = L_130->___cyanMaterial_7;
		NullCheck(L_129);
		BoxDisplayConfiguration_set_BoxMaterial_m0339CB100454537F353C0C05B4D1AFA90E552AA3(L_129, L_131, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_132 = V_1;
		NullCheck(L_132);
		RuntimeObject* L_133;
		L_133 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_132, NULL);
		__this->___U3CU3E2__current_1 = L_133;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_133);
		__this->___U3CU3E1__state_0 = ((int32_t)17);
		return (bool)1;
	}

IL_053e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("BBox grabbed material red");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_134 = V_1;
		NullCheck(L_134);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_134, _stringLiteral40442EDA4EDA74622DB1FC827383DFA39BAE341B, NULL);
		// boundsControl.BoxDisplayConfig.BoxGrabbedMaterial = redMaterial;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_135 = V_1;
		NullCheck(L_135);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_136 = L_135->___boundsControl_11;
		NullCheck(L_136);
		BoxDisplayConfiguration_t83FA4561B3E0ADDC45AC2516DD78775F5E80849A* L_137;
		L_137 = BoundsControl_get_BoxDisplayConfig_m9BB482C42F5C33EFEFDEDEFA5ED471ABF14C4FB8_inline(L_136, NULL);
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_138 = V_1;
		NullCheck(L_138);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_139 = L_138->___redMaterial_6;
		NullCheck(L_137);
		BoxDisplayConfiguration_set_BoxGrabbedMaterial_mB04396FA73CBC084B6217B04C5A6F9135678AD54(L_137, L_139, NULL);
		// om.OnManipulationStarted.AddListener((med) => boundsControl.HighlightWires());
		ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* L_140 = __this->___U3ComU3E5__3_4;
		NullCheck(L_140);
		ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* L_141;
		L_141 = ObjectManipulator_get_OnManipulationStarted_m6D34E8A4815F7BAF59B40857C3D991CA684E70C5_inline(L_140, NULL);
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_142 = V_1;
		UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49* L_143 = (UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49*)il2cpp_codegen_object_new(UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49_il2cpp_TypeInfo_var);
		NullCheck(L_143);
		UnityAction_1__ctor_mFCCE72B022568BFF6808E4C468007FF699A26D2E(L_143, L_142, (intptr_t)((void*)BoundsControlRuntimeExample_U3CSequenceU3Eb__12_0_m56CBCF1CCB44BE9BF323DBE554BE7741A60EFA89_RuntimeMethod_var), NULL);
		NullCheck(L_141);
		UnityEvent_1_AddListener_mCE472D576E4B9591F706A2D7A00FC0BA3C985BBF(L_141, L_143, UnityEvent_1_AddListener_mCE472D576E4B9591F706A2D7A00FC0BA3C985BBF_RuntimeMethod_var);
		// om.OnManipulationEnded.AddListener((med) => boundsControl.UnhighlightWires());
		ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* L_144 = __this->___U3ComU3E5__3_4;
		NullCheck(L_144);
		ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* L_145;
		L_145 = ObjectManipulator_get_OnManipulationEnded_m342FD627CB115449ED8BE8C1A36FABD9C875E630_inline(L_144, NULL);
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_146 = V_1;
		UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49* L_147 = (UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49*)il2cpp_codegen_object_new(UnityAction_1_t661610733BA234789FF3FA084A1F04D08A921D49_il2cpp_TypeInfo_var);
		NullCheck(L_147);
		UnityAction_1__ctor_mFCCE72B022568BFF6808E4C468007FF699A26D2E(L_147, L_146, (intptr_t)((void*)BoundsControlRuntimeExample_U3CSequenceU3Eb__12_1_mEEDE0BEB4314834E65950313E42394FE4FE55402_RuntimeMethod_var), NULL);
		NullCheck(L_145);
		UnityEvent_1_AddListener_mCE472D576E4B9591F706A2D7A00FC0BA3C985BBF(L_145, L_147, UnityEvent_1_AddListener_mCE472D576E4B9591F706A2D7A00FC0BA3C985BBF_RuntimeMethod_var);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_148 = V_1;
		NullCheck(L_148);
		RuntimeObject* L_149;
		L_149 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_148, NULL);
		__this->___U3CU3E2__current_1 = L_149;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_149);
		__this->___U3CU3E1__state_0 = ((int32_t)18);
		return (bool)1;
	}

IL_05b4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("BBox material none");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_150 = V_1;
		NullCheck(L_150);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_150, _stringLiteral670F8C2828AA4722DE617A1B888E4515BF0C2485, NULL);
		// boundsControl.BoxDisplayConfig.BoxMaterial = null;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_151 = V_1;
		NullCheck(L_151);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_152 = L_151->___boundsControl_11;
		NullCheck(L_152);
		BoxDisplayConfiguration_t83FA4561B3E0ADDC45AC2516DD78775F5E80849A* L_153;
		L_153 = BoundsControl_get_BoxDisplayConfig_m9BB482C42F5C33EFEFDEDEFA5ED471ABF14C4FB8_inline(L_152, NULL);
		NullCheck(L_153);
		BoxDisplayConfiguration_set_BoxMaterial_m0339CB100454537F353C0C05B4D1AFA90E552AA3(L_153, (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_154 = V_1;
		NullCheck(L_154);
		RuntimeObject* L_155;
		L_155 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_154, NULL);
		__this->___U3CU3E2__current_1 = L_155;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_155);
		__this->___U3CU3E1__state_0 = ((int32_t)19);
		return (bool)1;
	}

IL_05ed:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Scale X and update rig");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_156 = V_1;
		NullCheck(L_156);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_156, _stringLiteral0893B6EE7D7D92EEC5DF4B8BD819415A9048260D, NULL);
		// cube.transform.localScale = new Vector3(2, 1, 1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_157 = __this->___U3CcubeU3E5__2_3;
		NullCheck(L_157);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_158;
		L_158 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_157, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159;
		memset((&L_159), 0, sizeof(L_159));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_159), (2.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_158);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_158, L_159, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_160 = V_1;
		NullCheck(L_160);
		RuntimeObject* L_161;
		L_161 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_160, NULL);
		__this->___U3CU3E2__current_1 = L_161;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_161);
		__this->___U3CU3E1__state_0 = ((int32_t)20);
		return (bool)1;
	}

IL_0639:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Rotate 20 degrees and update rig");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_162 = V_1;
		NullCheck(L_162);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_162, _stringLiteral91E91D5EB2D73DE0D2500DAE0645428EC6B06F37, NULL);
		// cube.transform.localRotation = Quaternion.Euler(0, 20, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_163 = __this->___U3CcubeU3E5__2_3;
		NullCheck(L_163);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_164;
		L_164 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_163, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_165;
		L_165 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (20.0f), (0.0f), NULL);
		NullCheck(L_164);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_164, L_165, NULL);
		// boundsControl.RotationHandlesConfig.ShowHandleForY = true;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_166 = V_1;
		NullCheck(L_166);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_167 = L_166->___boundsControl_11;
		NullCheck(L_167);
		RotationHandlesConfiguration_t01D98D5153FF07876782F838682A59A9BD381A2C* L_168;
		L_168 = BoundsControl_get_RotationHandlesConfig_m14068630E6743C226CE4C1377DB2EBFC024CB64B_inline(L_167, NULL);
		NullCheck(L_168);
		PerAxisHandlesConfiguration_set_ShowHandleForY_m065ECBDECE8AA8F9334F71011D4F2C92123BCD5F(L_168, (bool)1, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_169 = V_1;
		NullCheck(L_169);
		RuntimeObject* L_170;
		L_170 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_169, NULL);
		__this->___U3CU3E2__current_1 = L_170;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_170);
		__this->___U3CU3E1__state_0 = ((int32_t)21);
		return (bool)1;
	}

IL_0696:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Wireframe radius 0.1");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_171 = V_1;
		NullCheck(L_171);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_171, _stringLiteralCFC1C2D158A032F8FC48C299D5FDB28194E34C6A, NULL);
		// boundsControl.LinksConfig.WireframeEdgeRadius = 0.1f;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_172 = V_1;
		NullCheck(L_172);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_173 = L_172->___boundsControl_11;
		NullCheck(L_173);
		LinksConfiguration_tED831CC1625B1AF6E76810B5B5AF40018342DBB9* L_174;
		L_174 = BoundsControl_get_LinksConfig_mE38043D5C379F5B33BFA563AFCBC863F2433AABD_inline(L_173, NULL);
		NullCheck(L_174);
		LinksConfiguration_set_WireframeEdgeRadius_m6CB72573C4BE7CE2F607BA2CBEB2A92346EF1CAB(L_174, (0.100000001f), NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_175 = V_1;
		NullCheck(L_175);
		RuntimeObject* L_176;
		L_176 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_175, NULL);
		__this->___U3CU3E2__current_1 = L_176;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_176);
		__this->___U3CU3E1__state_0 = ((int32_t)22);
		return (bool)1;
	}

IL_06d3:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SetStatus("Wireframe shape cylinder");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_177 = V_1;
		NullCheck(L_177);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_177, _stringLiteralB50148F64C80D84E61F7A56AF2EF142058BE341F, NULL);
		// boundsControl.LinksConfig.WireframeShape = WireframeType.Cylindrical;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_178 = V_1;
		NullCheck(L_178);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_179 = L_178->___boundsControl_11;
		NullCheck(L_179);
		LinksConfiguration_tED831CC1625B1AF6E76810B5B5AF40018342DBB9* L_180;
		L_180 = BoundsControl_get_LinksConfig_mE38043D5C379F5B33BFA563AFCBC863F2433AABD_inline(L_179, NULL);
		NullCheck(L_180);
		LinksConfiguration_set_WireframeShape_mB9F003BF06B6A6C6034E5472A7F93EA79DBC146A(L_180, 1, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_181 = V_1;
		NullCheck(L_181);
		RuntimeObject* L_182;
		L_182 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_181, NULL);
		__this->___U3CU3E2__current_1 = L_182;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_182);
		__this->___U3CU3E1__state_0 = ((int32_t)23);
		return (bool)1;
	}

IL_070c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(cube);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_183 = __this->___U3CcubeU3E5__2_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_183, NULL);
		// }
		__this->___U3CcubeU3E5__2_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcubeU3E5__2_3), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		__this->___U3ComU3E5__3_4 = (ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ComU3E5__3_4), (void*)(ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38*)NULL);
		__this->___U3CnewObjectU3E5__4_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnewObjectU3E5__4_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		__this->___U3CbcU3E5__5_6 = (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbcU3E5__5_6), (void*)(BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)NULL);
		// SetStatus("Many children");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_184 = V_1;
		NullCheck(L_184);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_184, _stringLiteral816442123FBC6285ACBB7D610A9E968403EFDE1E, NULL);
		// GameObject multiRoot = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_185 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_185);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_185, NULL);
		__this->___U3CnewObjectU3E5__4_5 = L_185;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnewObjectU3E5__4_5), (void*)L_185);
		// multiRoot.name = "multiRoot";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_186 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_186);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_186, _stringLiteral6596B125B0B472CE30C09148B49799ECB7AD3B6B, NULL);
		// Vector3 forwardOffset = Vector3.forward * .5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_187;
		L_187 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_188;
		L_188 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_187, (0.5f), NULL);
		V_2 = L_188;
		// multiRoot.transform.position = cubePosition + forwardOffset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_189 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_189);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_190;
		L_190 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_189, NULL);
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_191 = V_1;
		NullCheck(L_191);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_192 = L_191->___cubePosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_193 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194;
		L_194 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_192, L_193, NULL);
		NullCheck(L_190);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_190, L_194, NULL);
		// Transform lastParent = null;
		__this->___U3ClastParentU3E5__6_7 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClastParentU3E5__6_7), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// int numCubes = 10;
		V_3 = ((int32_t)10);
		// for (int i = 0; i < numCubes; i++)
		V_5 = 0;
		goto IL_085b;
	}

IL_079e:
	{
		// var cubechild = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_195;
		L_195 = GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507(3, NULL);
		V_6 = L_195;
		// cubechild.transform.localPosition = Random.insideUnitSphere + cubePosition + forwardOffset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_196 = V_6;
		NullCheck(L_196);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_197;
		L_197 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_196, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_198;
		L_198 = Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C(NULL);
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_199 = V_1;
		NullCheck(L_199);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_200 = L_199->___cubePosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_201;
		L_201 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_198, L_200, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_202 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_203;
		L_203 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_201, L_202, NULL);
		NullCheck(L_197);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_197, L_203, NULL);
		// cubechild.transform.rotation = Quaternion.Euler(Random.insideUnitSphere * 360f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_204 = V_6;
		NullCheck(L_204);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_205;
		L_205 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_204, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_206;
		L_206 = Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_207;
		L_207 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_206, (360.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_208;
		L_208 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_207, NULL);
		NullCheck(L_205);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_205, L_208, NULL);
		// cubechild.transform.parent = (lastParent != null) ? lastParent : multiRoot.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_209 = V_6;
		NullCheck(L_209);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_210;
		L_210 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_209, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_211 = __this->___U3ClastParentU3E5__6_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_212;
		L_212 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_211, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B27_0 = L_210;
		if (L_212)
		{
			G_B28_0 = L_210;
			goto IL_080a;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_213 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_213);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_214;
		L_214 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_213, NULL);
		G_B29_0 = L_214;
		G_B29_1 = G_B27_0;
		goto IL_0810;
	}

IL_080a:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_215 = __this->___U3ClastParentU3E5__6_7;
		G_B29_0 = L_215;
		G_B29_1 = G_B28_0;
	}

IL_0810:
	{
		NullCheck(G_B29_1);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(G_B29_1, G_B29_0, NULL);
		// float baseScale = lastParent == null ? 0.1f : 1f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_216 = __this->___U3ClastParentU3E5__6_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_217;
		L_217 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_216, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_217)
		{
			goto IL_082a;
		}
	}
	{
		G_B32_0 = (1.0f);
		goto IL_082f;
	}

IL_082a:
	{
		G_B32_0 = (0.100000001f);
	}

IL_082f:
	{
		V_7 = G_B32_0;
		// cubechild.transform.localScale = new Vector3(baseScale, baseScale, baseScale);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_218 = V_6;
		NullCheck(L_218);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_219;
		L_219 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_218, NULL);
		float L_220 = V_7;
		float L_221 = V_7;
		float L_222 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_223;
		memset((&L_223), 0, sizeof(L_223));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_223), L_220, L_221, L_222, /*hidden argument*/NULL);
		NullCheck(L_219);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_219, L_223, NULL);
		// lastParent = cubechild.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_224 = V_6;
		NullCheck(L_224);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_225;
		L_225 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_224, NULL);
		__this->___U3ClastParentU3E5__6_7 = L_225;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClastParentU3E5__6_7), (void*)L_225);
		// for (int i = 0; i < numCubes; i++)
		int32_t L_226 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_226, 1));
	}

IL_085b:
	{
		// for (int i = 0; i < numCubes; i++)
		int32_t L_227 = V_5;
		int32_t L_228 = V_3;
		if ((((int32_t)L_227) < ((int32_t)L_228)))
		{
			goto IL_079e;
		}
	}
	{
		// boundsControl = multiRoot.AddComponent<BoundsControl>();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_229 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_230 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_230);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_231;
		L_231 = GameObject_AddComponent_TisBoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547_m9533CFEE6F12C8F67D2A0440BE89C7EBB61BCE4C(L_230, GameObject_AddComponent_TisBoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547_m9533CFEE6F12C8F67D2A0440BE89C7EBB61BCE4C_RuntimeMethod_var);
		NullCheck(L_229);
		L_229->___boundsControl_11 = L_231;
		Il2CppCodeGenWriteBarrier((void**)(&L_229->___boundsControl_11), (void*)L_231);
		// boundsControl.BoundsControlActivation = BoundsControlActivationType.ActivateOnStart;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_232 = V_1;
		NullCheck(L_232);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_233 = L_232->___boundsControl_11;
		NullCheck(L_233);
		BoundsControl_set_BoundsControlActivation_mF2A4AE4EAA5F60BED97B99789B5682F570317114(L_233, 0, NULL);
		// boundsControl.HideElementsInInspector = false;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_234 = V_1;
		NullCheck(L_234);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_235 = L_234->___boundsControl_11;
		NullCheck(L_235);
		BoundsControl_set_HideElementsInInspector_m702F0CD475F2B103A435A85B1F6BDCDDD98577F4(L_235, (bool)0, NULL);
		// boundsControl.LinksConfig.WireframeEdgeRadius = .05f;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_236 = V_1;
		NullCheck(L_236);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_237 = L_236->___boundsControl_11;
		NullCheck(L_237);
		LinksConfiguration_tED831CC1625B1AF6E76810B5B5AF40018342DBB9* L_238;
		L_238 = BoundsControl_get_LinksConfig_mE38043D5C379F5B33BFA563AFCBC863F2433AABD_inline(L_237, NULL);
		NullCheck(L_238);
		LinksConfiguration_set_WireframeEdgeRadius_m6CB72573C4BE7CE2F607BA2CBEB2A92346EF1CAB(L_238, (0.0500000007f), NULL);
		// multiRoot.AddComponent<ConstraintManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_239 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_239);
		ConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16* L_240;
		L_240 = GameObject_AddComponent_TisConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16_mFE64421C1E4C885473A4025C4220BED207C48687(L_239, GameObject_AddComponent_TisConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16_mFE64421C1E4C885473A4025C4220BED207C48687_RuntimeMethod_var);
		// multiRoot.AddComponent<ObjectManipulator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_241 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_241);
		ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* L_242;
		L_242 = GameObject_AddComponent_TisObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38_m7987B1E4C0405213AFBED42D2DEE4C11B040AE41(L_241, GameObject_AddComponent_TisObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38_m7987B1E4C0405213AFBED42D2DEE4C11B040AE41_RuntimeMethod_var);
		// SetStatus("Randomize Child Scale for skewing");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_243 = V_1;
		NullCheck(L_243);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_243, _stringLiteral3655EFA58CD918A6CF06BBB9D43BFC9D3AAE2404, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_244 = V_1;
		NullCheck(L_244);
		RuntimeObject* L_245;
		L_245 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_244, NULL);
		__this->___U3CU3E2__current_1 = L_245;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_245);
		__this->___U3CU3E1__state_0 = ((int32_t)24);
		return (bool)1;
	}

IL_08da:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// multiRoot.transform.position += Vector3.forward * 200f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_246 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_246);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_247;
		L_247 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_246, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_248 = L_247;
		NullCheck(L_248);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_249;
		L_249 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_248, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_250;
		L_250 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_251;
		L_251 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_250, (200.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_252;
		L_252 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_249, L_251, NULL);
		NullCheck(L_248);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_248, L_252, NULL);
		// var childTransform = multiRoot.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_253 = __this->___U3CnewObjectU3E5__4_5;
		NullCheck(L_253);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_254;
		L_254 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_253, NULL);
		V_4 = L_254;
		goto IL_0987;
	}

IL_091a:
	{
		// childTransform = childTransform.GetChild(0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_255 = V_4;
		NullCheck(L_255);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_256;
		L_256 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_255, 0, NULL);
		V_4 = L_256;
		// float baseScale = lastParent == null ? 0.1f : 1f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_257 = __this->___U3ClastParentU3E5__6_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_258;
		L_258 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_257, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_258)
		{
			goto IL_0939;
		}
	}
	{
		G_B39_0 = (1.0f);
		goto IL_093e;
	}

IL_0939:
	{
		G_B39_0 = (0.100000001f);
	}

IL_093e:
	{
		V_8 = G_B39_0;
		// childTransform.transform.localScale = new Vector3(baseScale * Random.Range(.5f, 2f), baseScale * Random.Range(.5f, 2f), baseScale * Random.Range(.5f, 2f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_259 = V_4;
		NullCheck(L_259);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_260;
		L_260 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_259, NULL);
		float L_261 = V_8;
		float L_262;
		L_262 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.5f), (2.0f), NULL);
		float L_263 = V_8;
		float L_264;
		L_264 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.5f), (2.0f), NULL);
		float L_265 = V_8;
		float L_266;
		L_266 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.5f), (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_267;
		memset((&L_267), 0, sizeof(L_267));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_267), ((float)il2cpp_codegen_multiply(L_261, L_262)), ((float)il2cpp_codegen_multiply(L_263, L_264)), ((float)il2cpp_codegen_multiply(L_265, L_266)), /*hidden argument*/NULL);
		NullCheck(L_260);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_260, L_267, NULL);
	}

IL_0987:
	{
		// while (childTransform.childCount > 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_268 = V_4;
		NullCheck(L_268);
		int32_t L_269;
		L_269 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_268, NULL);
		if ((((int32_t)L_269) > ((int32_t)0)))
		{
			goto IL_091a;
		}
	}
	{
		// boundsControl.LinksConfig.WireframeEdgeRadius = 1f;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_270 = V_1;
		NullCheck(L_270);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_271 = L_270->___boundsControl_11;
		NullCheck(L_271);
		LinksConfiguration_tED831CC1625B1AF6E76810B5B5AF40018342DBB9* L_272;
		L_272 = BoundsControl_get_LinksConfig_mE38043D5C379F5B33BFA563AFCBC863F2433AABD_inline(L_271, NULL);
		NullCheck(L_272);
		LinksConfiguration_set_WireframeEdgeRadius_m6CB72573C4BE7CE2F607BA2CBEB2A92346EF1CAB(L_272, (1.0f), NULL);
		// boundsControl.CreateRig();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_273 = V_1;
		NullCheck(L_273);
		BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* L_274 = L_273->___boundsControl_11;
		NullCheck(L_274);
		BoundsControl_CreateRig_m51078C730147B68617E770C7869283DD43427AD7(L_274, NULL);
		// SetStatus("Delete GameObject");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_275 = V_1;
		NullCheck(L_275);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_275, _stringLiteralD0F771D59E9ED5FD093C2B91752841DE48F1BAE6, NULL);
		// yield return WaitForSpeechCommand();
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_276 = V_1;
		NullCheck(L_276);
		RuntimeObject* L_277;
		L_277 = BoundsControlRuntimeExample_WaitForSpeechCommand_m9FF69ADCD703DF08B2BBAF0F5AEF44F2932B2A5E(L_276, NULL);
		__this->___U3CU3E2__current_1 = L_277;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_277);
		__this->___U3CU3E1__state_0 = ((int32_t)25);
		return (bool)1;
	}

IL_09d2:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(multiRoot);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_278 = __this->___U3CnewObjectU3E5__4_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_278, NULL);
		// }
		__this->___U3CnewObjectU3E5__4_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnewObjectU3E5__4_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		__this->___U3ClastParentU3E5__6_7 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClastParentU3E5__6_7), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// SetStatus("Done!");
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_279 = V_1;
		NullCheck(L_279);
		BoundsControlRuntimeExample_SetStatus_m00973213807CC01E95D059DF76F050A3E0E0D646(L_279, _stringLiteral497963E2D53B0D05EEB52F563374952F51400304, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSequenceU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCA082D74DD5FA1A0A6FABB4726EC3E5F2E22122E (U3CSequenceU3Ed__12_tC2B6193C1B40DBAC26777FF6B1D1F96218C979B6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSequenceU3Ed__12_System_Collections_IEnumerator_Reset_m12DEA3D25C8E2D2B8DE6CFDCE72FA72030F3DD15 (U3CSequenceU3Ed__12_tC2B6193C1B40DBAC26777FF6B1D1F96218C979B6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSequenceU3Ed__12_System_Collections_IEnumerator_Reset_m12DEA3D25C8E2D2B8DE6CFDCE72FA72030F3DD15_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<Sequence>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSequenceU3Ed__12_System_Collections_IEnumerator_get_Current_m04CCB53596226B302B9129FCB774C6A9F2171C47 (U3CSequenceU3Ed__12_tC2B6193C1B40DBAC26777FF6B1D1F96218C979B6* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSpeechCommandU3Ed__13__ctor_m7D65D5CDE2156C2AD5B4FB7E9B352CDD5A8EF794 (U3CWaitForSpeechCommandU3Ed__13_tBCE429335B21A71E6105155218A71C1E2926AA7E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSpeechCommandU3Ed__13_System_IDisposable_Dispose_m00C33208D9802F3CAEB3B9C28D77A965D3057B81 (U3CWaitForSpeechCommandU3Ed__13_tBCE429335B21A71E6105155218A71C1E2926AA7E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForSpeechCommandU3Ed__13_MoveNext_m5775500DE49A84D509EC4A786B552B6C1EB630D5 (U3CWaitForSpeechCommandU3Ed__13_tBCE429335B21A71E6105155218A71C1E2926AA7E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0037;
	}

IL_0020:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0037:
	{
		// while (!speechTriggeredFlag)
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->___speechTriggeredFlag_9;
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// speechTriggeredFlag = false;
		BoundsControlRuntimeExample_tEF7739270115739D5B3BEFC85F5C32ECCAEC3CAB* L_6 = V_1;
		NullCheck(L_6);
		L_6->___speechTriggeredFlag_9 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForSpeechCommandU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m19889DA87AF7EE3277D4E7AF0B6CA4A87FE82DFA (U3CWaitForSpeechCommandU3Ed__13_tBCE429335B21A71E6105155218A71C1E2926AA7E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForSpeechCommandU3Ed__13_System_Collections_IEnumerator_Reset_mACA03EFCCE267FDE046277176D400C200D8E97C8 (U3CWaitForSpeechCommandU3Ed__13_tBCE429335B21A71E6105155218A71C1E2926AA7E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForSpeechCommandU3Ed__13_System_Collections_IEnumerator_Reset_mACA03EFCCE267FDE046277176D400C200D8E97C8_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundsControlRuntimeExample/<WaitForSpeechCommand>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForSpeechCommandU3Ed__13_System_Collections_IEnumerator_get_Current_mBF8E18BCB26595D70BE4393A9F47903A7A2ABE92 (U3CWaitForSpeechCommandU3Ed__13_tBCE429335B21A71E6105155218A71C1E2926AA7E* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl::NextLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridObjectLayoutControl_NextLayout_m63F33E41D821EEAF99FE89416D133368DAFDA796 (GridObjectLayoutControl_t83248AA1F700E00F0BA07A4A0706DFED0961DB61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutAnchor_t696AB41E7F191C9AD7EA9673B4A682FB36CFBC5D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// LayoutAnchor currentLayout = grid.Anchor;
		GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* L_0 = __this->___grid_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GridObjectCollection_get_Anchor_mB6FA34EA4A07AFBF05A654C44B418EA451EE2B47_inline(L_0, NULL);
		// var anchorTypeCount = Enum.GetNames(typeof(LayoutAnchor)).Length;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (LayoutAnchor_t696AB41E7F191C9AD7EA9673B4A682FB36CFBC5D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = Enum_GetNames_mA16B3D5DABC2AE21290B05053660F925DBFF6D94(L_3, NULL);
		NullCheck(L_4);
		V_0 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		// int nextLayout = (((int)currentLayout) + 1) % anchorTypeCount;
		int32_t L_5 = V_0;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_1, 1))%L_5));
		// grid.Anchor = (LayoutAnchor)nextLayout;
		GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* L_6 = __this->___grid_4;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		GridObjectCollection_set_Anchor_m9DF757AF4A59A3E60B42A2C1ABF0331B878973CB_inline(L_6, L_7, NULL);
		// UpdateUI();
		GridObjectLayoutControl_UpdateUI_m92C6BA426052AC25EB90F414934D11D4CC289B37(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl::PreviousLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridObjectLayoutControl_PreviousLayout_m8833FFB21CFC47001DFAF3CF1F5F2DCF1309D256 (GridObjectLayoutControl_t83248AA1F700E00F0BA07A4A0706DFED0961DB61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutAnchor_t696AB41E7F191C9AD7EA9673B4A682FB36CFBC5D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// LayoutAnchor currentLayout = grid.Anchor;
		GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* L_0 = __this->___grid_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GridObjectCollection_get_Anchor_mB6FA34EA4A07AFBF05A654C44B418EA451EE2B47_inline(L_0, NULL);
		// var anchorTypeCount = Enum.GetNames(typeof(LayoutAnchor)).Length;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (LayoutAnchor_t696AB41E7F191C9AD7EA9673B4A682FB36CFBC5D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = Enum_GetNames_mA16B3D5DABC2AE21290B05053660F925DBFF6D94(L_3, NULL);
		NullCheck(L_4);
		V_0 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		// int nextLayout = (((int)currentLayout) - 1) % anchorTypeCount;
		int32_t L_5 = V_0;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1))%L_5));
		// if (nextLayout < 0)
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		// nextLayout += anchorTypeCount;
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
	}

IL_002a:
	{
		// grid.Anchor = (LayoutAnchor)nextLayout;
		GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* L_9 = __this->___grid_4;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		GridObjectCollection_set_Anchor_m9DF757AF4A59A3E60B42A2C1ABF0331B878973CB_inline(L_9, L_10, NULL);
		// UpdateUI();
		GridObjectLayoutControl_UpdateUI_m92C6BA426052AC25EB90F414934D11D4CC289B37(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl::RunTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridObjectLayoutControl_RunTest_mF5B8DC192FE845D4074630DC2185AF0E0860D663 (GridObjectLayoutControl_t83248AA1F700E00F0BA07A4A0706DFED0961DB61* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(TestAnchors());
		RuntimeObject* L_0;
		L_0 = GridObjectLayoutControl_TestAnchors_m460F0482E8D73A8E9749B93D35D1B8734D88825F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridObjectLayoutControl_Start_m1A140D0FCD14E5F76D2DCF9209D4311BFB2F42A3 (GridObjectLayoutControl_t83248AA1F700E00F0BA07A4A0706DFED0961DB61* __this, const RuntimeMethod* method) 
{
	{
		// UpdateUI();
		GridObjectLayoutControl_UpdateUI_m92C6BA426052AC25EB90F414934D11D4CC289B37(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridObjectLayoutControl_UpdateUI_m92C6BA426052AC25EB90F414934D11D4CC289B37 (GridObjectLayoutControl_t83248AA1F700E00F0BA07A4A0706DFED0961DB61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutAnchor_t696AB41E7F191C9AD7EA9673B4A682FB36CFBC5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95C9503D00DEED334C8EEB04EF28C7C7354A5110);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (text != null)
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___text_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// text.text = "Anchor: " + grid.Anchor;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_2 = __this->___text_5;
		GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* L_3 = __this->___grid_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = GridObjectCollection_get_Anchor_mB6FA34EA4A07AFBF05A654C44B418EA451EE2B47_inline(L_3, NULL);
		V_0 = L_4;
		Il2CppFakeBox<int32_t> L_5(LayoutAnchor_t696AB41E7F191C9AD7EA9673B4A682FB36CFBC5D_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral95C9503D00DEED334C8EEB04EF28C7C7354A5110, L_6, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_7);
	}

IL_003c:
	{
		// grid.UpdateCollection();
		GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* L_8 = __this->___grid_4;
		NullCheck(L_8);
		VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::UpdateCollection() */, L_8);
		// }
		return;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl::TestAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GridObjectLayoutControl_TestAnchors_m460F0482E8D73A8E9749B93D35D1B8734D88825F (GridObjectLayoutControl_t83248AA1F700E00F0BA07A4A0706DFED0961DB61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063* L_0 = (U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063*)il2cpp_codegen_object_new(U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTestAnchorsU3Ed__7__ctor_mD8981BD02A905CEAC06D4E553E23F2BFE65F342F(L_0, 0, NULL);
		U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl::PrintGrid(Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection,System.String,System.String,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridObjectLayoutControl_PrintGrid_mE315C6E513E6E21AB49DDA56E9CE753DB53D39BA (GridObjectLayoutControl_t83248AA1F700E00F0BA07A4A0706DFED0961DB61* __this, GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* ___grid0, String_t* ___prefix1, String_t* ___path2, StringBuilder_t* ___builder3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8DA8DFE0C83E40728898B8B9C2AE232B4E63F62);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// Debug.Log(prefix);
		String_t* L_0 = ___prefix1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_0, NULL);
		// var i = 0;
		V_0 = 0;
		// foreach (Transform child in grid.gameObject.transform)
		GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* L_1 = ___grid0;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0093:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_6 = V_3;
					if (!L_6)
					{
						goto IL_00a3;
					}
				}
				{
					RuntimeObject* L_7 = V_3;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_00a3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0089_1;
			}

IL_001b_1:
			{
				// foreach (Transform child in grid.gameObject.transform)
				RuntimeObject* L_8 = V_1;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				V_2 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_9, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// builder.AppendLine($"    new Vector3({child.localPosition.x:F2}f, {child.localPosition.y:F2}f, {child.localPosition.z:F2}f), // {prefix} index {i}");
				StringBuilder_t* L_10 = ___builder3;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_2;
				NullCheck(L_13);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
				L_14 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_13, NULL);
				float L_15 = L_14.___x_2;
				float L_16 = L_15;
				RuntimeObject* L_17 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_16);
				NullCheck(L_12);
				ArrayElementTypeCheck (L_12, L_17);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_12;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_2;
				NullCheck(L_19);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
				L_20 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_19, NULL);
				float L_21 = L_20.___y_3;
				float L_22 = L_21;
				RuntimeObject* L_23 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_22);
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, L_23);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_23);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_18;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = V_2;
				NullCheck(L_25);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
				L_26 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_25, NULL);
				float L_27 = L_26.___z_4;
				float L_28 = L_27;
				RuntimeObject* L_29 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_28);
				NullCheck(L_24);
				ArrayElementTypeCheck (L_24, L_29);
				(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_29);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_24;
				String_t* L_31 = ___prefix1;
				NullCheck(L_30);
				ArrayElementTypeCheck (L_30, L_31);
				(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_31);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_30;
				int32_t L_33 = V_0;
				int32_t L_34 = L_33;
				RuntimeObject* L_35 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_34);
				NullCheck(L_32);
				ArrayElementTypeCheck (L_32, L_35);
				(L_32)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_35);
				String_t* L_36;
				L_36 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteralA8DA8DFE0C83E40728898B8B9C2AE232B4E63F62, L_32, NULL);
				NullCheck(L_10);
				StringBuilder_t* L_37;
				L_37 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_10, L_36, NULL);
				// i++;
				int32_t L_38 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
			}

IL_0089_1:
			{
				// foreach (Transform child in grid.gameObject.transform)
				RuntimeObject* L_39 = V_1;
				NullCheck(L_39);
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_39);
				if (L_40)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_00a4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a4:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridObjectLayoutControl__ctor_m34100C6FE9DFD6658FD3705FEDC8FB2A83F72D5F (GridObjectLayoutControl_t83248AA1F700E00F0BA07A4A0706DFED0961DB61* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestAnchorsU3Ed__7__ctor_mD8981BD02A905CEAC06D4E553E23F2BFE65F342F (U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestAnchorsU3Ed__7_System_IDisposable_Dispose_m9AE8C2217C68186641F8D54E874B247AD4745E5F (U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CTestAnchorsU3Ed__7_U3CU3Em__Finally1_mE68AF14C40C20BB79882F1BC1C1AEF1E272FFD8B(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTestAnchorsU3Ed__7_MoveNext_m5C729D7AD04897E69B72817DE63A876D32DC28D1 (U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisGridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A_m29F9D2888AF518C05291912715B3AB212F6AE74C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutAnchor_t696AB41E7F191C9AD7EA9673B4A682FB36CFBC5D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutAnchor_t696AB41E7F191C9AD7EA9673B4A682FB36CFBC5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A7F9DE0C8F3D56FCC7CD55AC4B41D661174ABE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA11E997348DA3BB6962BA7ADEF0E58AC431B316B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB966BB1BAE106200D3D621030CC08428171B19D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5E675CB6B8CA07F6F4FADCD6F2BD22BA64F228A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAA81F33739EF67BB3935C5FF5FB2D60B385409F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	GridObjectLayoutControl_t83248AA1F700E00F0BA07A4A0706DFED0961DB61* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_8 = NULL;
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* V_9 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0257:
			{// begin fault (depth: 1)
				U3CTestAnchorsU3Ed__7_System_IDisposable_Dispose_m9AE8C2217C68186641F8D54E874B247AD4745E5F(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				GridObjectLayoutControl_t83248AA1F700E00F0BA07A4A0706DFED0961DB61* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				switch (L_2)
				{
					case 0:
					{
						goto IL_0027_1;
					}
					case 1:
					{
						goto IL_01aa_1;
					}
					case 2:
					{
						goto IL_024c_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_025e;
			}

IL_0027_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// var gridRoot = new GameObject();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
				NullCheck(L_3);
				GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_3, NULL);
				V_3 = L_3;
				// gridRoot.name = "grid";
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_3;
				NullCheck(L_4);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_4, _stringLiteral9A7F9DE0C8F3D56FCC7CD55AC4B41D661174ABE2, NULL);
				// var gridCollection = gridRoot.AddComponent<GridObjectCollection>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_3;
				NullCheck(L_5);
				GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* L_6;
				L_6 = GameObject_AddComponent_TisGridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A_m29F9D2888AF518C05291912715B3AB212F6AE74C(L_5, GameObject_AddComponent_TisGridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A_m29F9D2888AF518C05291912715B3AB212F6AE74C_RuntimeMethod_var);
				__this->___U3CgridCollectionU3E5__2_3 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgridCollectionU3E5__2_3), (void*)L_6);
				// gridCollection.Distance = 0.75f;
				GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* L_7 = __this->___U3CgridCollectionU3E5__2_3;
				NullCheck(L_7);
				GridObjectCollection_set_Distance_m33956DDBFE29F4652BD648251B4B115AAB007F4C_inline(L_7, (0.75f), NULL);
				// gridCollection.CellWidth = 0.15f;
				GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* L_8 = __this->___U3CgridCollectionU3E5__2_3;
				NullCheck(L_8);
				GridObjectCollection_set_CellWidth_m460BA037B49D4462ACF2173D95619E0F1B38EB0D_inline(L_8, (0.150000006f), NULL);
				// gridCollection.CellHeight = 0.15f;
				GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* L_9 = __this->___U3CgridCollectionU3E5__2_3;
				NullCheck(L_9);
				GridObjectCollection_set_CellHeight_mE38DE154245EE05E4D4F0AFF816BA54337C0746F_inline(L_9, (0.150000006f), NULL);
				// for (int i = 0; i < 3; i++)
				V_5 = 0;
				goto IL_00b6_1;
			}

IL_0080_1:
			{
				// var child = GameObject.CreatePrimitive(PrimitiveType.Cube);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507(3, NULL);
				// child.transform.parent = gridRoot.transform;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10;
				NullCheck(L_11);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
				L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_3;
				NullCheck(L_13);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
				L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
				NullCheck(L_12);
				Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_12, L_14, NULL);
				// child.transform.localScale = Vector3.one * 0.1f;
				NullCheck(L_11);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
				L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
				L_16 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
				L_17 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_16, (0.100000001f), NULL);
				NullCheck(L_15);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_15, L_17, NULL);
				// for (int i = 0; i < 3; i++)
				int32_t L_18 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_18, 1));
			}

IL_00b6_1:
			{
				// for (int i = 0; i < 3; i++)
				int32_t L_19 = V_5;
				if ((((int32_t)L_19) < ((int32_t)3)))
				{
					goto IL_0080_1;
				}
			}
			{
				// gridCollection.Layout = LayoutOrder.Horizontal;
				GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* L_20 = __this->___U3CgridCollectionU3E5__2_3;
				NullCheck(L_20);
				GridObjectCollection_set_Layout_m221254CF50167FECC66F496225CA5D15CECF8F71_inline(L_20, 2, NULL);
				// var filename = "printgrid-" + DateTime.UtcNow.ToString("yyMMdd-HHmmss") + ".txt";
				il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_21;
				L_21 = DateTime_get_UtcNow_m5D776FFEBC81592B361E4C7AF373297C5DFB46FD(NULL);
				V_6 = L_21;
				String_t* L_22;
				L_22 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_6), _stringLiteralD5E675CB6B8CA07F6F4FADCD6F2BD22BA64F228A, NULL);
				String_t* L_23;
				L_23 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralB966BB1BAE106200D3D621030CC08428171B19D2, L_22, _stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96, NULL);
				V_4 = L_23;
				// string path = Path.Combine(Application.persistentDataPath, filename);
				String_t* L_24;
				L_24 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
				String_t* L_25 = V_4;
				il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
				String_t* L_26;
				L_26 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_24, L_25, NULL);
				__this->___U3CpathU3E5__3_4 = L_26;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpathU3E5__3_4), (void*)L_26);
				// StringBuilder stringBuilder = new StringBuilder();
				StringBuilder_t* L_27 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
				NullCheck(L_27);
				StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_27, NULL);
				__this->___U3CstringBuilderU3E5__4_5 = L_27;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CstringBuilderU3E5__4_5), (void*)L_27);
				// stringBuilder.AppendLine("Vector3[] expectedPositions = new Vector3[] {");
				StringBuilder_t* L_28 = __this->___U3CstringBuilderU3E5__4_5;
				NullCheck(L_28);
				StringBuilder_t* L_29;
				L_29 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_28, _stringLiteralEAA81F33739EF67BB3935C5FF5FB2D60B385409F, NULL);
				// foreach (LayoutAnchor value in Enum.GetValues(typeof(LayoutAnchor)))
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (LayoutAnchor_t696AB41E7F191C9AD7EA9673B4A682FB36CFBC5D_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_31;
				L_31 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_30, NULL);
				il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
				RuntimeArray* L_32;
				L_32 = Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293(L_31, NULL);
				NullCheck(L_32);
				RuntimeObject* L_33;
				L_33 = Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E(L_32, NULL);
				__this->___U3CU3E7__wrap4_6 = L_33;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap4_6), (void*)L_33);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_01b2_1;
			}

IL_013d_1:
			{
				// foreach (LayoutAnchor value in Enum.GetValues(typeof(LayoutAnchor)))
				RuntimeObject* L_34 = __this->___U3CU3E7__wrap4_6;
				NullCheck(L_34);
				RuntimeObject* L_35;
				L_35 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_34);
				V_7 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_35, LayoutAnchor_t696AB41E7F191C9AD7EA9673B4A682FB36CFBC5D_il2cpp_TypeInfo_var))));
				// gridCollection.Anchor = value;
				GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* L_36 = __this->___U3CgridCollectionU3E5__2_3;
				int32_t L_37 = V_7;
				NullCheck(L_36);
				GridObjectCollection_set_Anchor_m9DF757AF4A59A3E60B42A2C1ABF0331B878973CB_inline(L_36, L_37, NULL);
				// gridCollection.UpdateCollection();
				GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* L_38 = __this->___U3CgridCollectionU3E5__2_3;
				NullCheck(L_38);
				VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::UpdateCollection() */, L_38);
				// PrintGrid(gridCollection, value.ToString(), path, stringBuilder);
				GridObjectLayoutControl_t83248AA1F700E00F0BA07A4A0706DFED0961DB61* L_39 = V_2;
				GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* L_40 = __this->___U3CgridCollectionU3E5__2_3;
				Il2CppFakeBox<int32_t> L_41(LayoutAnchor_t696AB41E7F191C9AD7EA9673B4A682FB36CFBC5D_il2cpp_TypeInfo_var, (&V_7));
				String_t* L_42;
				L_42 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_41), NULL);
				String_t* L_43 = __this->___U3CpathU3E5__3_4;
				StringBuilder_t* L_44 = __this->___U3CstringBuilderU3E5__4_5;
				NullCheck(L_39);
				GridObjectLayoutControl_PrintGrid_mE315C6E513E6E21AB49DDA56E9CE753DB53D39BA(L_39, L_40, L_42, L_43, L_44, NULL);
				// yield return new WaitForSeconds(0.5f);
				WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_45 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
				NullCheck(L_45);
				WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_45, (0.5f), NULL);
				__this->___U3CU3E2__current_1 = L_45;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_45);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_025e;
			}

IL_01aa_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_01b2_1:
			{
				// foreach (LayoutAnchor value in Enum.GetValues(typeof(LayoutAnchor)))
				RuntimeObject* L_46 = __this->___U3CU3E7__wrap4_6;
				NullCheck(L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_013d_1;
				}
			}
			{
				U3CTestAnchorsU3Ed__7_U3CU3Em__Finally1_mE68AF14C40C20BB79882F1BC1C1AEF1E272FFD8B(__this, NULL);
				__this->___U3CU3E7__wrap4_6 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap4_6), (void*)(RuntimeObject*)NULL);
				// stringBuilder.AppendLine("}");
				StringBuilder_t* L_48 = __this->___U3CstringBuilderU3E5__4_5;
				NullCheck(L_48);
				StringBuilder_t* L_49;
				L_49 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_48, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
				// using (FileStream fs = new FileStream(path, FileMode.Create))
				String_t* L_50 = __this->___U3CpathU3E5__3_4;
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_51 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
				NullCheck(L_51);
				FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_51, L_50, 2, NULL);
				V_8 = L_51;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_022e_1:
					{// begin finally (depth: 2)
						{
							FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_52 = V_8;
							if (!L_52)
							{
								goto IL_0239_1;
							}
						}
						{
							FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_53 = V_8;
							NullCheck(L_53);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_53);
						}

IL_0239_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// using (StreamWriter writer = new StreamWriter(fs))
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_54 = V_8;
						StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_55 = (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4*)il2cpp_codegen_object_new(StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
						NullCheck(L_55);
						StreamWriter__ctor_m54CE9C47ED974C0589400DA9BC2AB3F7F481595B(L_55, L_54, NULL);
						V_9 = L_55;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0220_2:
							{// begin finally (depth: 3)
								{
									StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_56 = V_9;
									if (!L_56)
									{
										goto IL_022b_2;
									}
								}
								{
									StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_57 = V_9;
									NullCheck(L_57);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_57);
								}

IL_022b_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							// writer.Write(stringBuilder.ToString());
							StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_58 = V_9;
							StringBuilder_t* L_59 = __this->___U3CstringBuilderU3E5__4_5;
							NullCheck(L_59);
							String_t* L_60;
							L_60 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_59);
							NullCheck(L_58);
							VirtualActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_58, L_60);
							// Debug.Log("Wrote to: " + path);
							String_t* L_61 = __this->___U3CpathU3E5__3_4;
							String_t* L_62;
							L_62 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralA11E997348DA3BB6962BA7ADEF0E58AC431B316B, L_61, NULL);
							il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
							Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_62, NULL);
							// }
							goto IL_022c_2;
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_022c_2:
					{
						// }
						goto IL_023a_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_023a_1:
			{
				// yield return null;
				__this->___U3CU3E2__current_1 = NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_025e;
			}

IL_024c_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// }
				V_0 = (bool)0;
				goto IL_025e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_025e:
	{
		bool L_63 = V_0;
		return L_63;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestAnchorsU3Ed__7_U3CU3Em__Finally1_mE68AF14C40C20BB79882F1BC1C1AEF1E272FFD8B (U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap4_6;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTestAnchorsU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m51B67DA947B38655EA84BBB181DD7D3963D89AE5 (U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTestAnchorsU3Ed__7_System_Collections_IEnumerator_Reset_m2B037080877E9B04CEE6A653552909A5E84AD6F6 (U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTestAnchorsU3Ed__7_System_Collections_IEnumerator_Reset_m2B037080877E9B04CEE6A653552909A5E84AD6F6_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.GridObjectLayoutControl/<TestAnchors>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTestAnchorsU3Ed__7_System_Collections_IEnumerator_get_Current_m6F94688A43879EBEBFFB8F5AFD784F5983F77EAA (U3CTestAnchorsU3Ed__7_t53190FD53CE40C7CC4A0C68840737745F9D4F063* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ChangeManipulation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeManipulation_Start_mD91FF29A289DCAD9C6A28F127D682E146985F211 (ChangeManipulation_tB834F15B688C0C56CDD5C05AE9F996F99692390A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (manipulatedObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___manipulatedObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// manipulatedObjCollider = manipulatedObject.GetComponent<Collider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___manipulatedObject_4;
		NullCheck(L_2);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3;
		L_3 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_2, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		__this->___manipulatedObjCollider_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manipulatedObjCollider_6), (void*)L_3);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ChangeManipulation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeManipulation_Update_m777E8F752BDF582DE203BAB159385964389C66B2 (ChangeManipulation_tB834F15B688C0C56CDD5C05AE9F996F99692390A* __this, const RuntimeMethod* method) 
{
	{
		// TryStopManipulation();
		ChangeManipulation_TryStopManipulation_m750D6248316C1A1223BDC8E27529437B2CA8F28C(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ChangeManipulation::TryStopManipulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeManipulation_TryStopManipulation_m750D6248316C1A1223BDC8E27529437B2CA8F28C (ChangeManipulation_tB834F15B688C0C56CDD5C05AE9F996F99692390A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16_m8C52CCCAB0ED8CCB6BBA1B3CED54970D65A5DBB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisManipulationHandler_tFA015F7923D30D62CDE4B41B9DE243F7606DDCD2_m1BEF468BF3902F3889885F619107BB8B37C0F6CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38_m09C4ED8F5CEB0A2E8253BE11A2756FFF2B9C3972_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationHandler_tFA015F7923D30D62CDE4B41B9DE243F7606DDCD2* V_0 = NULL;
	ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* V_1 = NULL;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (manipulatedObject != null && collisionTrigger != null && manipulatedObjCollider != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___manipulatedObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00ee;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = __this->___collisionTrigger_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_00ee;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = __this->___manipulatedObjCollider_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_00ee;
		}
	}
	{
		// if (!collisionTrigger.bounds.Intersects(manipulatedObjCollider.bounds))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = __this->___collisionTrigger_5;
		NullCheck(L_6);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_7;
		L_7 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_6, NULL);
		V_2 = L_7;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = __this->___manipulatedObjCollider_6;
		NullCheck(L_8);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9;
		L_9 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_8, NULL);
		bool L_10;
		L_10 = Bounds_Intersects_m91D6CE48052C56F8519243104C3575738B159531((&V_2), L_9, NULL);
		if (L_10)
		{
			goto IL_0054;
		}
	}
	{
		// return;
		return;
	}

IL_0054:
	{
		// manipulatedObject.GetComponent<ConstraintManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___manipulatedObject_4;
		NullCheck(L_11);
		ConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16* L_12;
		L_12 = GameObject_GetComponent_TisConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16_m8C52CCCAB0ED8CCB6BBA1B3CED54970D65A5DBB2(L_11, GameObject_GetComponent_TisConstraintManager_tE02055958E414620335891AA5AC3EF132B4AFD16_m8C52CCCAB0ED8CCB6BBA1B3CED54970D65A5DBB2_RuntimeMethod_var);
		// var manipulationHandler = manipulatedObject.GetComponent<ManipulationHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___manipulatedObject_4;
		NullCheck(L_13);
		ManipulationHandler_tFA015F7923D30D62CDE4B41B9DE243F7606DDCD2* L_14;
		L_14 = GameObject_GetComponent_TisManipulationHandler_tFA015F7923D30D62CDE4B41B9DE243F7606DDCD2_m1BEF468BF3902F3889885F619107BB8B37C0F6CE(L_13, GameObject_GetComponent_TisManipulationHandler_tFA015F7923D30D62CDE4B41B9DE243F7606DDCD2_m1BEF468BF3902F3889885F619107BB8B37C0F6CE_RuntimeMethod_var);
		V_0 = L_14;
		// var objectManipulator = manipulatedObject.GetComponent<MRTKObjectManipulator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___manipulatedObject_4;
		NullCheck(L_15);
		ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* L_16;
		L_16 = GameObject_GetComponent_TisObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38_m09C4ED8F5CEB0A2E8253BE11A2756FFF2B9C3972(L_15, GameObject_GetComponent_TisObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38_m09C4ED8F5CEB0A2E8253BE11A2756FFF2B9C3972_RuntimeMethod_var);
		V_1 = L_16;
		// if (manipulationHandler != null || objectManipulator != null)
		ManipulationHandler_tFA015F7923D30D62CDE4B41B9DE243F7606DDCD2* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_18)
		{
			goto IL_008a;
		}
	}
	{
		ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* L_19 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00ee;
		}
	}

IL_008a:
	{
		// if (manipulationHandler != null)
		ManipulationHandler_tFA015F7923D30D62CDE4B41B9DE243F7606DDCD2* L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_009b;
		}
	}
	{
		// manipulationHandler.ForceEndManipulation();
		ManipulationHandler_tFA015F7923D30D62CDE4B41B9DE243F7606DDCD2* L_23 = V_0;
		NullCheck(L_23);
		ManipulationHandler_ForceEndManipulation_m2A6867CA91D17A0344FCF6892B9C245D9E151085(L_23, NULL);
		goto IL_00a1;
	}

IL_009b:
	{
		// objectManipulator.ForceEndManipulation();
		ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* L_24 = V_1;
		NullCheck(L_24);
		ObjectManipulator_ForceEndManipulation_m23CC2FA2F6F525CBF3D51A8C7C85CD76870032BF(L_24, NULL);
	}

IL_00a1:
	{
		// Vector3 direction = collisionTrigger.bounds.center - manipulatedObjCollider.bounds.center;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_25 = __this->___collisionTrigger_5;
		NullCheck(L_25);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_26;
		L_26 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_25, NULL);
		V_2 = L_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_2), NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_28 = __this->___manipulatedObjCollider_6;
		NullCheck(L_28);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_29;
		L_29 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_28, NULL);
		V_2 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_27, L_30, NULL);
		V_3 = L_31;
		// manipulatedObject.transform.Translate(direction.normalized * 0.01f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___manipulatedObject_4;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_34, (0.00999999978f), NULL);
		NullCheck(L_33);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_33, L_35, NULL);
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ChangeManipulation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeManipulation__ctor_m6270F997C7154555604B8ED7F6D82969AD1E8B4A (ChangeManipulation_tB834F15B688C0C56CDD5C05AE9F996F99692390A* __this, const RuntimeMethod* method) 
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
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::get_FrontBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ReturnToBounds_get_FrontBounds_mB457BE973F0D448D74242EE9755157B225668ED1 (ReturnToBounds_t5F145A1F417B58F9A50781059C4409D5746FA993* __this, const RuntimeMethod* method) 
{
	{
		// get => frontBounds;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___frontBounds_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::set_FrontBounds(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReturnToBounds_set_FrontBounds_m555C5617E7CBECB7F45ED637388F0D50FFC7179F (ReturnToBounds_t5F145A1F417B58F9A50781059C4409D5746FA993* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => frontBounds = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___frontBounds_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frontBounds_4), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::get_BackBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ReturnToBounds_get_BackBounds_mB42CE86FF3653B03A925133CD8B217A2A8CE9507 (ReturnToBounds_t5F145A1F417B58F9A50781059C4409D5746FA993* __this, const RuntimeMethod* method) 
{
	{
		// get => backBounds;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___backBounds_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::set_BackBounds(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReturnToBounds_set_BackBounds_m7D68CDBB58F3858F9BD97FF0DFC5228DB11B1E19 (ReturnToBounds_t5F145A1F417B58F9A50781059C4409D5746FA993* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => backBounds = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___backBounds_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backBounds_5), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::get_LeftBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ReturnToBounds_get_LeftBounds_m6E4FCE9513A5DE720BC582E8F4643978AF536530 (ReturnToBounds_t5F145A1F417B58F9A50781059C4409D5746FA993* __this, const RuntimeMethod* method) 
{
	{
		// get => leftBounds;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___leftBounds_6;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::set_LeftBounds(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReturnToBounds_set_LeftBounds_mD3DB7047DC4D610B07D55B2442820818D1905BB1 (ReturnToBounds_t5F145A1F417B58F9A50781059C4409D5746FA993* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => leftBounds = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___leftBounds_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftBounds_6), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::get_RightBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ReturnToBounds_get_RightBounds_mA048A83709507E2ABD9CC8FFABB3BFF7C29BF727 (ReturnToBounds_t5F145A1F417B58F9A50781059C4409D5746FA993* __this, const RuntimeMethod* method) 
{
	{
		// get => rightBounds;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___rightBounds_7;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::set_RightBounds(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReturnToBounds_set_RightBounds_m60BFDC1C4E97FC752A7F2E6E4C2C5B7855672F0C (ReturnToBounds_t5F145A1F417B58F9A50781059C4409D5746FA993* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => rightBounds = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___rightBounds_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightBounds_7), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::get_BottomBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ReturnToBounds_get_BottomBounds_m070E85502D0CF39ACA58234F68FF4520A3A1CC22 (ReturnToBounds_t5F145A1F417B58F9A50781059C4409D5746FA993* __this, const RuntimeMethod* method) 
{
	{
		// get => bottomBounds;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___bottomBounds_8;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::set_BottomBounds(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReturnToBounds_set_BottomBounds_mB81669774276DB28C307EE90B7CD3F059232B86F (ReturnToBounds_t5F145A1F417B58F9A50781059C4409D5746FA993* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => bottomBounds = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___bottomBounds_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bottomBounds_8), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::get_TopBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ReturnToBounds_get_TopBounds_mC93B14634A492562AA098E6C89EF8C24241FF603 (ReturnToBounds_t5F145A1F417B58F9A50781059C4409D5746FA993* __this, const RuntimeMethod* method) 
{
	{
		// get => topBounds;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___topBounds_9;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::set_TopBounds(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReturnToBounds_set_TopBounds_m7C1A2A9216A2CCFB55A70C3F2A39FBD635B48FCA (ReturnToBounds_t5F145A1F417B58F9A50781059C4409D5746FA993* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => topBounds = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___topBounds_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topBounds_9), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReturnToBounds_Start_mC403C2B3F83C8DD47D4A2B7B9FC9DF635AE7E69E (ReturnToBounds_t5F145A1F417B58F9A50781059C4409D5746FA993* __this, const RuntimeMethod* method) 
{
	{
		// positionAtStart = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___positionAtStart_10 = L_1;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReturnToBounds_Update_m601D4D3AF13BC46BE59524D62DFC990FDDE95A66 (ReturnToBounds_t5F145A1F417B58F9A50781059C4409D5746FA993* __this, const RuntimeMethod* method) 
{
	{
		// if (transform.position.x > rightBounds.position.x || transform.position.x < leftBounds.position.x ||
		//     transform.position.y > topBounds.position.y || transform.position.y < bottomBounds.position.y ||
		//     transform.position.z > backBounds.position.z || transform.position.z < frontBounds.position.z)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___rightBounds_7;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		if ((((float)L_2) > ((float)L_5)))
		{
			goto IL_00d2;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___leftBounds_6;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___x_2;
		if ((((float)L_8) < ((float)L_11)))
		{
			goto IL_00d2;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___topBounds_9;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___y_3;
		if ((((float)L_14) > ((float)L_17)))
		{
			goto IL_00d2;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___bottomBounds_8;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___y_3;
		if ((((float)L_20) < ((float)L_23)))
		{
			goto IL_00d2;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		float L_26 = L_25.___z_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___backBounds_5;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = L_28.___z_4;
		if ((((float)L_26) > ((float)L_29)))
		{
			goto IL_00d2;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32 = L_31.___z_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->___frontBounds_4;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		float L_35 = L_34.___z_4;
		if ((!(((float)L_32) < ((float)L_35))))
		{
			goto IL_00e3;
		}
	}

IL_00d2:
	{
		// transform.position = positionAtStart;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = __this->___positionAtStart_10;
		NullCheck(L_36);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_36, L_37, NULL);
	}

IL_00e3:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ReturnToBounds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReturnToBounds__ctor_mCE711B7D1384A0B7F146CC5B326940C0D3EE718E (ReturnToBounds_t5F145A1F417B58F9A50781059C4409D5746FA993* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::OnClickAsyncMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressIndicatorDemo_OnClickAsyncMethod_m4AFC89EC4E9860391D35149A26FBF2077B425CA2 (ProgressIndicatorDemo_t6A221029ABCFDCE0E67949979A34B87AE2545D01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandleButtonClick(demoObjectAsyncMethod.GetComponent<IProgressIndicatorDemoObject>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___demoObjectAsyncMethod_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A(L_0, GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A_RuntimeMethod_var);
		ProgressIndicatorDemo_HandleButtonClick_m546F9C1E1AC95322A60BF294E495858C2D3113EE(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::OnClickAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressIndicatorDemo_OnClickAnimation_m8F9A6B01C33501EB349FFB2D08F3E3F7E6B39497 (ProgressIndicatorDemo_t6A221029ABCFDCE0E67949979A34B87AE2545D01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandleButtonClick(demoObjectAnimation.GetComponent<IProgressIndicatorDemoObject>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___demoObjectAnimation_5;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A(L_0, GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A_RuntimeMethod_var);
		ProgressIndicatorDemo_HandleButtonClick_m546F9C1E1AC95322A60BF294E495858C2D3113EE(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::OnClickSceneLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressIndicatorDemo_OnClickSceneLoad_mE17447FE149FA998570CE3F01D895AB8F1ED7AA2 (ProgressIndicatorDemo_t6A221029ABCFDCE0E67949979A34B87AE2545D01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandleButtonClick(demoObjectSceneLoad.GetComponent<IProgressIndicatorDemoObject>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___demoObjectSceneLoad_6;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A(L_0, GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A_RuntimeMethod_var);
		ProgressIndicatorDemo_HandleButtonClick_m546F9C1E1AC95322A60BF294E495858C2D3113EE(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::HandleButtonClick(Microsoft.MixedReality.Toolkit.Examples.Demos.IProgressIndicatorDemoObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressIndicatorDemo_HandleButtonClick_m546F9C1E1AC95322A60BF294E495858C2D3113EE (ProgressIndicatorDemo_t6A221029ABCFDCE0E67949979A34B87AE2545D01* __this, RuntimeObject* ___demoObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// demoObject.StartProgressBehavior();
		RuntimeObject* L_0 = ___demoObject0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.IProgressIndicatorDemoObject::StartProgressBehavior() */, IProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressIndicatorDemo_Update_m8405DC4D5740E287CFE059E8F16E0574955D1EAA (ProgressIndicatorDemo_t6A221029ABCFDCE0E67949979A34B87AE2545D01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UnityEngine.Input.GetKeyDown(toggleBarAsyncMethodKey))
		int32_t L_0 = __this->___toggleBarAsyncMethodKey_7;
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// HandleButtonClick(demoObjectAsyncMethod.GetComponent<IProgressIndicatorDemoObject>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___demoObjectAsyncMethod_4;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A(L_2, GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A_RuntimeMethod_var);
		ProgressIndicatorDemo_HandleButtonClick_m546F9C1E1AC95322A60BF294E495858C2D3113EE(__this, L_3, NULL);
	}

IL_001e:
	{
		// if (UnityEngine.Input.GetKeyDown(toggleAnimationKey))
		int32_t L_4 = __this->___toggleAnimationKey_8;
		bool L_5;
		L_5 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(L_4, NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		// HandleButtonClick(demoObjectAnimation.GetComponent<IProgressIndicatorDemoObject>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___demoObjectAnimation_5;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A(L_6, GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A_RuntimeMethod_var);
		ProgressIndicatorDemo_HandleButtonClick_m546F9C1E1AC95322A60BF294E495858C2D3113EE(__this, L_7, NULL);
	}

IL_003c:
	{
		// if (UnityEngine.Input.GetKeyDown(toggleSceneLoadKey))
		int32_t L_8 = __this->___toggleSceneLoadKey_9;
		bool L_9;
		L_9 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(L_8, NULL);
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		// HandleButtonClick(demoObjectSceneLoad.GetComponent<IProgressIndicatorDemoObject>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___demoObjectSceneLoad_6;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A(L_10, GameObject_GetComponent_TisIProgressIndicatorDemoObject_t395015D42F2B2DD1A5D9C68BC5569E114FB6C7DE_m5B6CD0EADB06E467E5651665C18890186A86E94A_RuntimeMethod_var);
		ProgressIndicatorDemo_HandleButtonClick_m546F9C1E1AC95322A60BF294E495858C2D3113EE(__this, L_11, NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressIndicatorDemo__ctor_mF2BC513AA5E94F646D8674BD176D2FA3BD2DB39E (ProgressIndicatorDemo_t6A221029ABCFDCE0E67949979A34B87AE2545D01* __this, const RuntimeMethod* method) 
{
	{
		// private KeyCode toggleBarAsyncMethodKey = KeyCode.Alpha1;
		__this->___toggleBarAsyncMethodKey_7 = ((int32_t)49);
		// private KeyCode toggleAnimationKey = KeyCode.Alpha2;
		__this->___toggleAnimationKey_8 = ((int32_t)50);
		// private KeyCode toggleSceneLoadKey = KeyCode.Alpha3;
		__this->___toggleSceneLoadKey_9 = ((int32_t)51);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressIndicatorDemoAnimation_Awake_m4DD8C7D5A1F6184006B8962C4E4B4EEE242121EB (ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_mAD8800425B8EFE6CF373EB80E9FA62FCEAAF2111_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// progressIndicator = progressIndicatorObject.GetComponent<IProgressIndicator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___progressIndicatorObject_5;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GameObject_GetComponent_TisIProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_mAD8800425B8EFE6CF373EB80E9FA62FCEAAF2111(L_0, GameObject_GetComponent_TisIProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_mAD8800425B8EFE6CF373EB80E9FA62FCEAAF2111_RuntimeMethod_var);
		__this->___progressIndicator_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___progressIndicator_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation::StartProgressBehavior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressIndicatorDemoAnimation_StartProgressBehavior_m5F5E6F76E2291F2ECAD20EB4B22484B993A4BD1C (ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_mE46C5542344553A9B10B135CFC9C86DBB40EE8F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_mE46C5542344553A9B10B135CFC9C86DBB40EE8F7(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_mE46C5542344553A9B10B135CFC9C86DBB40EE8F7_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressIndicatorDemoAnimation__ctor_m78C8F5F9EE7AAD21AC90746925CAE8DAA9C92AC8 (ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation/<StartProgressBehavior>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartProgressBehaviorU3Ed__5_MoveNext_m843CD393E4AEA0499AC8C62E669E7FE3FE902BFB (U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m440D5CA2B7C09487CAF47729BD1D4F2FA0B62142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m7D521DCD37A0807B9F0F509D9008390D25EE2042_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E8505A6E46433EBEAAE027288C9DE5DC83B1CB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C82A7BDE663D3D597B2365355D908CC632EF79A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E9FA4C518A7965A39FD3FCA4F65EE675F775EDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ECEB08F20C743000BBD77ABDBF067AD3D22BCEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBCD1CFD381A4E8E42CF3F7335DFE1EA17C66FF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC5ACC70BCA9F9D8A6DB719CA4EF5EAD902A7961);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8532EA1C3899862E1758B8F4C34CDA1DCD1004D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_3;
	memset((&V_3), 0, sizeof(V_3));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_4;
	memset((&V_4), 0, sizeof(V_4));
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_00a1_1;
				}
				case 1:
				{
					goto IL_010f_1;
				}
				case 2:
				{
					goto IL_01a9_1;
				}
				case 3:
				{
					goto IL_0261_1;
				}
				case 4:
				{
					goto IL_02e9_1;
				}
			}
		}
		{
			// if (progressIndicator.State != ProgressIndicatorState.Closed)
			ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->___progressIndicator_7;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Microsoft.MixedReality.Toolkit.UI.ProgressIndicatorState Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::get_State() */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_4);
			if (!L_5)
			{
				goto IL_0044_1;
			}
		}
		{
			// Debug.LogWarning("Can't start progress behavior in this state.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral8ECEB08F20C743000BBD77ABDBF067AD3D22BCEE, NULL);
			// return;
			goto IL_0327;
		}

IL_0044_1:
		{
			// progressIndicator.Message = $"Starting animation...";
			ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* L_6 = V_1;
			NullCheck(L_6);
			RuntimeObject* L_7 = L_6->___progressIndicator_7;
			NullCheck(L_7);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Message(System.String) */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_7, _stringLiteralDBCD1CFD381A4E8E42CF3F7335DFE1EA17C66FF1);
			// progressIndicator.Progress = 0;
			ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* L_8 = V_1;
			NullCheck(L_8);
			RuntimeObject* L_9 = L_8->___progressIndicator_7;
			NullCheck(L_9);
			InterfaceActionInvoker1< float >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Progress(System.Single) */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_9, (0.0f));
			// await progressIndicator.OpenAsync();
			ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* L_10 = V_1;
			NullCheck(L_10);
			RuntimeObject* L_11 = L_10->___progressIndicator_7;
			NullCheck(L_11);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_12;
			L_12 = InterfaceFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(4 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::OpenAsync() */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_11);
			NullCheck(L_12);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_13;
			L_13 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_12, NULL);
			V_2 = L_13;
			bool L_14;
			L_14 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_14)
			{
				goto IL_00bd_1;
			}
		}
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_16 = V_2;
			__this->___U3CU3Eu__1_4 = L_16;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_17 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m440D5CA2B7C09487CAF47729BD1D4F2FA0B62142(L_17, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m440D5CA2B7C09487CAF47729BD1D4F2FA0B62142_RuntimeMethod_var);
			goto IL_033a;
		}

IL_00a1_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_18 = __this->___U3CU3Eu__1_4;
			V_2 = L_18;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_19 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
		}

IL_00bd_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// animator.SetTrigger("PlayAnimation");
			ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* L_21 = V_1;
			NullCheck(L_21);
			Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_22 = L_21->___animator_6;
			NullCheck(L_22);
			Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_22, _stringLiteral0E8505A6E46433EBEAAE027288C9DE5DC83B1CB3, NULL);
			// await Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_23;
			L_23 = Task_Yield_m243FF1482B112E594401BAC859F9084753C4E653(NULL);
			V_4 = L_23;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_24;
			L_24 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_4), NULL);
			V_3 = L_24;
			bool L_25;
			L_25 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_3), NULL);
			if (L_25)
			{
				goto IL_012b_1;
			}
		}
		{
			int32_t L_26 = 1;
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_27 = V_3;
			__this->___U3CU3Eu__2_5 = L_27;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_28 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m7D521DCD37A0807B9F0F509D9008390D25EE2042(L_28, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m7D521DCD37A0807B9F0F509D9008390D25EE2042_RuntimeMethod_var);
			goto IL_033a;
		}

IL_010f_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_29 = __this->___U3CU3Eu__2_5;
			V_3 = L_29;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_30 = (&__this->___U3CU3Eu__2_5);
			il2cpp_codegen_initobj(L_30, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_31 = (-1);
			V_0 = L_31;
			__this->___U3CU3E1__state_0 = L_31;
		}

IL_012b_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_3), NULL);
			// bool playingAnimation = false;
			__this->___U3CplayingAnimationU3E5__2_3 = (bool)0;
			goto IL_01cc_1;
		}

IL_013e_1:
		{
			// var stateInfo = animator.GetCurrentAnimatorStateInfo(0);
			ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* L_32 = V_1;
			NullCheck(L_32);
			Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_33 = L_32->___animator_6;
			NullCheck(L_33);
			AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_34;
			L_34 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_33, 0, NULL);
			V_5 = L_34;
			// playingAnimation = stateInfo.IsName(animationName);
			bool L_35;
			L_35 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_5), _stringLiteralEC5ACC70BCA9F9D8A6DB719CA4EF5EAD902A7961, NULL);
			__this->___U3CplayingAnimationU3E5__2_3 = L_35;
			// progressIndicator.Message = $"Waiting for animation to start...";
			ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* L_36 = V_1;
			NullCheck(L_36);
			RuntimeObject* L_37 = L_36->___progressIndicator_7;
			NullCheck(L_37);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Message(System.String) */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_37, _stringLiteral3C82A7BDE663D3D597B2365355D908CC632EF79A);
			// await Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_38;
			L_38 = Task_Yield_m243FF1482B112E594401BAC859F9084753C4E653(NULL);
			V_4 = L_38;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_39;
			L_39 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_4), NULL);
			V_3 = L_39;
			bool L_40;
			L_40 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_3), NULL);
			if (L_40)
			{
				goto IL_01c5_1;
			}
		}
		{
			int32_t L_41 = 2;
			V_0 = L_41;
			__this->___U3CU3E1__state_0 = L_41;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_42 = V_3;
			__this->___U3CU3Eu__2_5 = L_42;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_43 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m7D521DCD37A0807B9F0F509D9008390D25EE2042(L_43, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m7D521DCD37A0807B9F0F509D9008390D25EE2042_RuntimeMethod_var);
			goto IL_033a;
		}

IL_01a9_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_44 = __this->___U3CU3Eu__2_5;
			V_3 = L_44;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_45 = (&__this->___U3CU3Eu__2_5);
			il2cpp_codegen_initobj(L_45, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_46 = (-1);
			V_0 = L_46;
			__this->___U3CU3E1__state_0 = L_46;
		}

IL_01c5_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_3), NULL);
		}

IL_01cc_1:
		{
			// while (!playingAnimation)
			bool L_47 = __this->___U3CplayingAnimationU3E5__2_3;
			if (!L_47)
			{
				goto IL_013e_1;
			}
		}
		{
			goto IL_0284_1;
		}

IL_01dc_1:
		{
			// var stateInfo = animator.GetCurrentAnimatorStateInfo(0);
			ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* L_48 = V_1;
			NullCheck(L_48);
			Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_49 = L_48->___animator_6;
			NullCheck(L_49);
			AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_50;
			L_50 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_49, 0, NULL);
			V_6 = L_50;
			// playingAnimation = stateInfo.IsName(animationName);
			bool L_51;
			L_51 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_6), _stringLiteralEC5ACC70BCA9F9D8A6DB719CA4EF5EAD902A7961, NULL);
			__this->___U3CplayingAnimationU3E5__2_3 = L_51;
			// if (playingAnimation)
			bool L_52 = __this->___U3CplayingAnimationU3E5__2_3;
			if (!L_52)
			{
				goto IL_0226_1;
			}
		}
		{
			// progressIndicator.Message = $"Waiting for animation to finish...";
			ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* L_53 = V_1;
			NullCheck(L_53);
			RuntimeObject* L_54 = L_53->___progressIndicator_7;
			NullCheck(L_54);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Message(System.String) */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_54, _stringLiteral6E9FA4C518A7965A39FD3FCA4F65EE675F775EDF);
			// progressIndicator.Progress = stateInfo.normalizedTime;
			ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* L_55 = V_1;
			NullCheck(L_55);
			RuntimeObject* L_56 = L_55->___progressIndicator_7;
			float L_57;
			L_57 = AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6((&V_6), NULL);
			NullCheck(L_56);
			InterfaceActionInvoker1< float >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Progress(System.Single) */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_56, L_57);
		}

IL_0226_1:
		{
			// await Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_58;
			L_58 = Task_Yield_m243FF1482B112E594401BAC859F9084753C4E653(NULL);
			V_4 = L_58;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_59;
			L_59 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_4), NULL);
			V_3 = L_59;
			bool L_60;
			L_60 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_3), NULL);
			if (L_60)
			{
				goto IL_027d_1;
			}
		}
		{
			int32_t L_61 = 3;
			V_0 = L_61;
			__this->___U3CU3E1__state_0 = L_61;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_62 = V_3;
			__this->___U3CU3Eu__2_5 = L_62;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_63 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m7D521DCD37A0807B9F0F509D9008390D25EE2042(L_63, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m7D521DCD37A0807B9F0F509D9008390D25EE2042_RuntimeMethod_var);
			goto IL_033a;
		}

IL_0261_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_64 = __this->___U3CU3Eu__2_5;
			V_3 = L_64;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_65 = (&__this->___U3CU3Eu__2_5);
			il2cpp_codegen_initobj(L_65, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_66 = (-1);
			V_0 = L_66;
			__this->___U3CU3E1__state_0 = L_66;
		}

IL_027d_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_3), NULL);
		}

IL_0284_1:
		{
			// while (playingAnimation)
			bool L_67 = __this->___U3CplayingAnimationU3E5__2_3;
			if (L_67)
			{
				goto IL_01dc_1;
			}
		}
		{
			// progressIndicator.Progress = 1;
			ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* L_68 = V_1;
			NullCheck(L_68);
			RuntimeObject* L_69 = L_68->___progressIndicator_7;
			NullCheck(L_69);
			InterfaceActionInvoker1< float >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Progress(System.Single) */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_69, (1.0f));
			// progressIndicator.Message = $"Finished with animation...";
			ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* L_70 = V_1;
			NullCheck(L_70);
			RuntimeObject* L_71 = L_70->___progressIndicator_7;
			NullCheck(L_71);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Message(System.String) */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_71, _stringLiteralF8532EA1C3899862E1758B8F4C34CDA1DCD1004D);
			// await progressIndicator.CloseAsync();
			ProgressIndicatorDemoAnimation_t7B29F2360D73ABC7C54BDD39A60FEDCEF296136B* L_72 = V_1;
			NullCheck(L_72);
			RuntimeObject* L_73 = L_72->___progressIndicator_7;
			NullCheck(L_73);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_74;
			L_74 = InterfaceFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(6 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::CloseAsync() */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_73);
			NullCheck(L_74);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_75;
			L_75 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_74, NULL);
			V_2 = L_75;
			bool L_76;
			L_76 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_76)
			{
				goto IL_0305_1;
			}
		}
		{
			int32_t L_77 = 4;
			V_0 = L_77;
			__this->___U3CU3E1__state_0 = L_77;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_78 = V_2;
			__this->___U3CU3Eu__1_4 = L_78;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_79 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m440D5CA2B7C09487CAF47729BD1D4F2FA0B62142(L_79, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4_m440D5CA2B7C09487CAF47729BD1D4F2FA0B62142_RuntimeMethod_var);
			goto IL_033a;
		}

IL_02e9_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_80 = __this->___U3CU3Eu__1_4;
			V_2 = L_80;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_81 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_81, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_82 = (-1);
			V_0 = L_82;
			__this->___U3CU3E1__state_0 = L_82;
		}

IL_0305_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_0327;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_030e;
		}
		throw e;
	}

CATCH_030e:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_83 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_84 = V_7;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_83, L_84, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_033a;
	}// end catch (depth: 1)

IL_0327:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_85 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_85, NULL);
	}

IL_033a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartProgressBehaviorU3Ed__5_MoveNext_m843CD393E4AEA0499AC8C62E669E7FE3FE902BFB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4*>(__this + _offset);
	U3CStartProgressBehaviorU3Ed__5_MoveNext_m843CD393E4AEA0499AC8C62E669E7FE3FE902BFB(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAnimation/<StartProgressBehavior>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartProgressBehaviorU3Ed__5_SetStateMachine_m96AD4A4F814E2FF54ADAC5BE1C8586F426D9754A (U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartProgressBehaviorU3Ed__5_SetStateMachine_m96AD4A4F814E2FF54ADAC5BE1C8586F426D9754A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartProgressBehaviorU3Ed__5_t266C0E34F401BBB16B33152A31591FD0FC2A58F4*>(__this + _offset);
	U3CStartProgressBehaviorU3Ed__5_SetStateMachine_m96AD4A4F814E2FF54ADAC5BE1C8586F426D9754A(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressIndicatorDemoAsyncMethod_Awake_m894FECFBA9C55ED31EBDD33159891A33E6954072 (ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_mAD8800425B8EFE6CF373EB80E9FA62FCEAAF2111_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// progressIndicator = progressIndicatorObject.GetComponent<IProgressIndicator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___progressIndicatorObject_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GameObject_GetComponent_TisIProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_mAD8800425B8EFE6CF373EB80E9FA62FCEAAF2111(L_0, GameObject_GetComponent_TisIProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_mAD8800425B8EFE6CF373EB80E9FA62FCEAAF2111_RuntimeMethod_var);
		__this->___progressIndicator_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___progressIndicator_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressIndicatorDemoAsyncMethod_OnDisable_m7A25E3EEA0BAD28C269F60FD27EC0D745819DCB8 (ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* __this, const RuntimeMethod* method) 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* G_B2_0 = NULL;
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* G_B1_0 = NULL;
	{
		// tokenSource?.Cancel();
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = __this->___tokenSource_9;
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B(G_B2_0, NULL);
	}

IL_0011:
	{
		// tokenSource = null;
		__this->___tokenSource_9 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokenSource_9), (void*)(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod::StartProgressBehavior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressIndicatorDemoAsyncMethod_StartProgressBehavior_m0CFCCE8B6DC603BD6CAEBC586D456EE5870DFCA5 (ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_mD0F890FF69CEFBF7311775B3389891F726CE372C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_mD0F890FF69CEFBF7311775B3389891F726CE372C(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_mD0F890FF69CEFBF7311775B3389891F726CE372C_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod::AsyncMethod(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ProgressIndicatorDemoAsyncMethod_AsyncMethod_m55E60A89B6C77FA28494E3316906DB72B7280012 (ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE_m85A63B32C9F662E3DFFB7C52C6829166F74CF2F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m84CBB9FB50A2D132B0A549652557CBE01867A82B(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE_m85A63B32C9F662E3DFFB7C52C6829166F74CF2F2(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE_m85A63B32C9F662E3DFFB7C52C6829166F74CF2F2_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressIndicatorDemoAsyncMethod__ctor_m8F956C74FAF9AE455670C10DB108DC62AFE4C8BB (ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* __this, const RuntimeMethod* method) 
{
	{
		// private float asyncTaskDuration = 5f;
		__this->___asyncTaskDuration_5 = (5.0f);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<StartProgressBehavior>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartProgressBehaviorU3Ed__8_MoveNext_m62CDA140A7821419665E435C3EA5D8FB59D572AF (U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_m83516A031D181675B8B1A3723A67E5D34FDC32C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_mD4B35CE9ADF86AD6556E99A5159113134AD0AFA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C0FB268FEF0DAA245BD3DD0D331FA3446F8F19F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ECEB08F20C743000BBD77ABDBF067AD3D22BCEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F55D41D0084400D6F824A11DDEF46D5A9718E6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC808879522A851D8C9F0BC3FE1DC9060CD8A8112);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_3;
	memset((&V_3), 0, sizeof(V_3));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0084_1;
				}
				case 1:
				{
					goto IL_0116_1;
				}
				case 2:
				{
					goto IL_0197_1;
				}
			}
		}
		{
			// if (tokenSource != null)
			ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_3 = V_1;
			NullCheck(L_3);
			CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_4 = L_3->___tokenSource_9;
			if (!L_4)
			{
				goto IL_0037_1;
			}
		}
		{
			// Debug.LogWarning("Can't start progress behavior in this state.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral8ECEB08F20C743000BBD77ABDBF067AD3D22BCEE, NULL);
			// return;
			goto IL_01dc;
		}

IL_0037_1:
		{
			// progressIndicator.Message = "Opening...";
			ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->___progressIndicator_8;
			NullCheck(L_6);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Message(System.String) */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_6, _stringLiteralC808879522A851D8C9F0BC3FE1DC9060CD8A8112);
			// await progressIndicator.OpenAsync();
			ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_7 = V_1;
			NullCheck(L_7);
			RuntimeObject* L_8 = L_7->___progressIndicator_8;
			NullCheck(L_8);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
			L_9 = InterfaceFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(4 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::OpenAsync() */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_8);
			NullCheck(L_9);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10;
			L_10 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_9, NULL);
			V_2 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_11)
			{
				goto IL_00a0_1;
			}
		}
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_13 = V_2;
			__this->___U3CU3Eu__1_4 = L_13;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_14 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_m83516A031D181675B8B1A3723A67E5D34FDC32C2(L_14, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_m83516A031D181675B8B1A3723A67E5D34FDC32C2_RuntimeMethod_var);
			goto IL_01f6;
		}

IL_0084_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15 = __this->___U3CU3Eu__1_4;
			V_2 = L_15;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_16 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
		}

IL_00a0_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// tokenSource = new CancellationTokenSource();
			ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_18 = V_1;
			CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_19 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)il2cpp_codegen_object_new(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
			NullCheck(L_19);
			CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C(L_19, NULL);
			NullCheck(L_18);
			L_18->___tokenSource_9 = L_19;
			Il2CppCodeGenWriteBarrier((void**)(&L_18->___tokenSource_9), (void*)L_19);
			// Task asyncMethod = AsyncMethod(tokenSource.Token);
			ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_20 = V_1;
			ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_21 = V_1;
			NullCheck(L_21);
			CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_22 = L_21->___tokenSource_9;
			NullCheck(L_22);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_23;
			L_23 = CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4(L_22, NULL);
			NullCheck(L_20);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_24;
			L_24 = ProgressIndicatorDemoAsyncMethod_AsyncMethod_m55E60A89B6C77FA28494E3316906DB72B7280012(L_20, L_23, NULL);
			__this->___U3CasyncMethodU3E5__2_3 = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncMethodU3E5__2_3), (void*)L_24);
			// progressIndicator.Message = "Waiting for async method to complete...";
			ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_25 = V_1;
			NullCheck(L_25);
			RuntimeObject* L_26 = L_25->___progressIndicator_8;
			NullCheck(L_26);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Message(System.String) */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_26, _stringLiteral8F55D41D0084400D6F824A11DDEF46D5A9718E6B);
			goto IL_0139_1;
		}

IL_00db_1:
		{
			// await Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_27;
			L_27 = Task_Yield_m243FF1482B112E594401BAC859F9084753C4E653(NULL);
			V_4 = L_27;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_28;
			L_28 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_4), NULL);
			V_3 = L_28;
			bool L_29;
			L_29 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_3), NULL);
			if (L_29)
			{
				goto IL_0132_1;
			}
		}
		{
			int32_t L_30 = 1;
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_31 = V_3;
			__this->___U3CU3Eu__2_5 = L_31;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_32 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_mD4B35CE9ADF86AD6556E99A5159113134AD0AFA2(L_32, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_mD4B35CE9ADF86AD6556E99A5159113134AD0AFA2_RuntimeMethod_var);
			goto IL_01f6;
		}

IL_0116_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_33 = __this->___U3CU3Eu__2_5;
			V_3 = L_33;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_34 = (&__this->___U3CU3Eu__2_5);
			il2cpp_codegen_initobj(L_34, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->___U3CU3E1__state_0 = L_35;
		}

IL_0132_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_3), NULL);
		}

IL_0139_1:
		{
			// while (!asyncMethod.IsCompleted)
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_36 = __this->___U3CasyncMethodU3E5__2_3;
			NullCheck(L_36);
			bool L_37;
			L_37 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_36, NULL);
			if (!L_37)
			{
				goto IL_00db_1;
			}
		}
		{
			// tokenSource = null;
			ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_38 = V_1;
			NullCheck(L_38);
			L_38->___tokenSource_9 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_38->___tokenSource_9), (void*)(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)NULL);
			// progressIndicator.Message = "Closing...";
			ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_39 = V_1;
			NullCheck(L_39);
			RuntimeObject* L_40 = L_39->___progressIndicator_8;
			NullCheck(L_40);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Message(System.String) */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_40, _stringLiteral2C0FB268FEF0DAA245BD3DD0D331FA3446F8F19F);
			// await progressIndicator.CloseAsync();
			ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_41 = V_1;
			NullCheck(L_41);
			RuntimeObject* L_42 = L_41->___progressIndicator_8;
			NullCheck(L_42);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_43;
			L_43 = InterfaceFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(6 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::CloseAsync() */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_42);
			NullCheck(L_43);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_44;
			L_44 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_43, NULL);
			V_2 = L_44;
			bool L_45;
			L_45 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_45)
			{
				goto IL_01b3_1;
			}
		}
		{
			int32_t L_46 = 2;
			V_0 = L_46;
			__this->___U3CU3E1__state_0 = L_46;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_47 = V_2;
			__this->___U3CU3Eu__1_4 = L_47;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_48 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_m83516A031D181675B8B1A3723A67E5D34FDC32C2(L_48, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063_m83516A031D181675B8B1A3723A67E5D34FDC32C2_RuntimeMethod_var);
			goto IL_01f6;
		}

IL_0197_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_49 = __this->___U3CU3Eu__1_4;
			V_2 = L_49;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_50 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_50, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_51 = (-1);
			V_0 = L_51;
			__this->___U3CU3E1__state_0 = L_51;
		}

IL_01b3_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_01dc;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01bc;
		}
		throw e;
	}

CATCH_01bc:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CasyncMethodU3E5__2_3 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncMethodU3E5__2_3), (void*)(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_52 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_53 = V_5;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_52, L_53, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01f6;
	}// end catch (depth: 1)

IL_01dc:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CasyncMethodU3E5__2_3 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncMethodU3E5__2_3), (void*)(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_54 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_54, NULL);
	}

IL_01f6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartProgressBehaviorU3Ed__8_MoveNext_m62CDA140A7821419665E435C3EA5D8FB59D572AF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063*>(__this + _offset);
	U3CStartProgressBehaviorU3Ed__8_MoveNext_m62CDA140A7821419665E435C3EA5D8FB59D572AF(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<StartProgressBehavior>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartProgressBehaviorU3Ed__8_SetStateMachine_m19D69CC62B297B3B0B8BAD06E33CEDF96E276168 (U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartProgressBehaviorU3Ed__8_SetStateMachine_m19D69CC62B297B3B0B8BAD06E33CEDF96E276168_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartProgressBehaviorU3Ed__8_t887908CAB2E71887FEB78F7FF428C8A040E8D063*>(__this + _offset);
	U3CStartProgressBehaviorU3Ed__8_SetStateMachine_m19D69CC62B297B3B0B8BAD06E33CEDF96E276168(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<AsyncMethod>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncMethodU3Ed__9_MoveNext_m575F58B2568865FC9699CCBF4B5BA4F73A3416DE (U3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE_mC08BDBFB89C539E7DEB910A6AA058F19FF6DFCB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* V_1 = NULL;
	float V_2 = 0.0f;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_3;
	memset((&V_3), 0, sizeof(V_3));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00bf_1;
			}
		}
		{
			// float timeStarted = Time.time;
			float L_3;
			L_3 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
			__this->___U3CtimeStartedU3E5__2_3 = L_3;
			// Vector3 startPos = coffeeTransform.localPosition;
			ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_4 = V_1;
			NullCheck(L_4);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4->___coffeeTransform_7;
			NullCheck(L_5);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
			L_6 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_5, NULL);
			__this->___U3CstartPosU3E5__3_4 = L_6;
			goto IL_00e2_1;
		}

IL_0035_1:
		{
			// float normalizedTime = Mathf.Clamp01((Time.time - timeStarted) / asyncTaskDuration);
			float L_7;
			L_7 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
			float L_8 = __this->___U3CtimeStartedU3E5__2_3;
			ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_9 = V_1;
			NullCheck(L_9);
			float L_10 = L_9->___asyncTaskDuration_5;
			float L_11;
			L_11 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(((float)il2cpp_codegen_subtract(L_7, L_8))/L_10)), NULL);
			V_2 = L_11;
			// float eval = coffeeCurve.Evaluate(normalizedTime);
			ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_12 = V_1;
			NullCheck(L_12);
			AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_13 = L_12->___coffeeCurve_6;
			float L_14 = V_2;
			NullCheck(L_13);
			float L_15;
			L_15 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_13, L_14, NULL);
			// coffeeTransform.localPosition = startPos + (Vector3.down * coffeeCurve.Evaluate(normalizedTime));
			ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_16 = V_1;
			NullCheck(L_16);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = L_16->___coffeeTransform_7;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___U3CstartPosU3E5__3_4;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
			L_19 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
			ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_20 = V_1;
			NullCheck(L_20);
			AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_21 = L_20->___coffeeCurve_6;
			float L_22 = V_2;
			NullCheck(L_21);
			float L_23;
			L_23 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_21, L_22, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
			L_24 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_19, L_23, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
			L_25 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_18, L_24, NULL);
			NullCheck(L_17);
			Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_17, L_25, NULL);
			// await Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_26;
			L_26 = Task_Yield_m243FF1482B112E594401BAC859F9084753C4E653(NULL);
			V_4 = L_26;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_27;
			L_27 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_4), NULL);
			V_3 = L_27;
			bool L_28;
			L_28 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_3), NULL);
			if (L_28)
			{
				goto IL_00db_1;
			}
		}
		{
			int32_t L_29 = 0;
			V_0 = L_29;
			__this->___U3CU3E1__state_0 = L_29;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_30 = V_3;
			__this->___U3CU3Eu__1_5 = L_30;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_31 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE_mC08BDBFB89C539E7DEB910A6AA058F19FF6DFCB1(L_31, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE_mC08BDBFB89C539E7DEB910A6AA058F19FF6DFCB1_RuntimeMethod_var);
			goto IL_0138;
		}

IL_00bf_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_32 = __this->___U3CU3Eu__1_5;
			V_3 = L_32;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_33 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_33, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_34 = (-1);
			V_0 = L_34;
			__this->___U3CU3E1__state_0 = L_34;
		}

IL_00db_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_3), NULL);
		}

IL_00e2_1:
		{
			// while (Time.time < timeStarted + asyncTaskDuration)
			float L_35;
			L_35 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
			float L_36 = __this->___U3CtimeStartedU3E5__2_3;
			ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_37 = V_1;
			NullCheck(L_37);
			float L_38 = L_37->___asyncTaskDuration_5;
			if ((((float)L_35) < ((float)((float)il2cpp_codegen_add(L_36, L_38)))))
			{
				goto IL_0035_1;
			}
		}
		{
			// coffeeTransform.localPosition = startPos;
			ProgressIndicatorDemoAsyncMethod_tB2B716567DD8AC03476FC91788FBE65C13A54A57* L_39 = V_1;
			NullCheck(L_39);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = L_39->___coffeeTransform_7;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = __this->___U3CstartPosU3E5__3_4;
			NullCheck(L_40);
			Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_40, L_41, NULL);
			goto IL_0125;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_010c;
		}
		throw e;
	}

CATCH_010c:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_42 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_43 = V_5;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_42, L_43, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0138;
	}// end catch (depth: 1)

IL_0125:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_44 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_44, NULL);
	}

IL_0138:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAsyncMethodU3Ed__9_MoveNext_m575F58B2568865FC9699CCBF4B5BA4F73A3416DE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE*>(__this + _offset);
	U3CAsyncMethodU3Ed__9_MoveNext_m575F58B2568865FC9699CCBF4B5BA4F73A3416DE(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoAsyncMethod/<AsyncMethod>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncMethodU3Ed__9_SetStateMachine_m0424443862F055A35A9F8D61AAD3A0CD2E1D4270 (U3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAsyncMethodU3Ed__9_SetStateMachine_m0424443862F055A35A9F8D61AAD3A0CD2E1D4270_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAsyncMethodU3Ed__9_tA211525E64A6565130D794621481D42932ABD6DE*>(__this + _offset);
	U3CAsyncMethodU3Ed__9_SetStateMachine_m0424443862F055A35A9F8D61AAD3A0CD2E1D4270(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad::StartProgressBehavior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressIndicatorDemoSceneLoad_StartProgressBehavior_m47BF66F004A24A7A77451856F494A855F6C3CEBC (ProgressIndicatorDemoSceneLoad_tF22EAC3534317BF3822EC9E7B732348724FFFD00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m075D11E370377454E0561D964686B54D9C31DB2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m075D11E370377454E0561D964686B54D9C31DB2A(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m075D11E370377454E0561D964686B54D9C31DB2A_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressIndicatorDemoSceneLoad__ctor_m47A8BA173E362F1D674F7DB2F88330F812FD416A (ProgressIndicatorDemoSceneLoad_tF22EAC3534317BF3822EC9E7B732348724FFFD00* __this, const RuntimeMethod* method) 
{
	{
		// private float loadDelay = 2.5f;
		__this->___loadDelay_6 = (2.5f);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartProgressBehaviorU3Ed__4_MoveNext_m9A41723CF8D8E4172E0C693C410C7CA572BA0F70 (U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m0C3B36CE8FC327CBA8AB41A8A906789371CA131A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m677C7463D68320CE2B243236CDD169ECC6C4CBD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_mAD8800425B8EFE6CF373EB80E9FA62FCEAAF2111_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySceneSystem_t1DFDB45D5566F11CB42953060A58AD673C758250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00EBC276BB87ACAA9AA6A47BF580281CE291D36B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50F85C698D1B54E00789227F1306943F4EA17FC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DAC536A5C7343DCD386CDDB310859C4AA0B965A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74A60E912035CE11B30BC9F5502C3E8F60A11822);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EE5813E8D50AA7BBFC85EDDB9E2D91B543950F0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProgressIndicatorDemoSceneLoad_tF22EAC3534317BF3822EC9E7B732348724FFFD00* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_3;
	memset((&V_3), 0, sizeof(V_3));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ProgressIndicatorDemoSceneLoad_tF22EAC3534317BF3822EC9E7B732348724FFFD00* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_00a0_1;
				}
				case 1:
				{
					goto IL_010b_1;
				}
				case 2:
				{
					goto IL_0225_1;
				}
				case 3:
				{
					goto IL_02a5_1;
				}
			}
		}
		{
			// if (startedProgressBehavior)
			ProgressIndicatorDemoSceneLoad_tF22EAC3534317BF3822EC9E7B732348724FFFD00* L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->___startedProgressBehavior_7;
			if (!L_4)
			{
				goto IL_003b_1;
			}
		}
		{
			// Debug.Log("Can't start until behavior is completed.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral9EE5813E8D50AA7BBFC85EDDB9E2D91B543950F0, NULL);
			// return;
			goto IL_02ff;
		}

IL_003b_1:
		{
			// startedProgressBehavior = true;
			ProgressIndicatorDemoSceneLoad_tF22EAC3534317BF3822EC9E7B732348724FFFD00* L_5 = V_1;
			NullCheck(L_5);
			L_5->___startedProgressBehavior_7 = (bool)1;
			// IProgressIndicator indicator = progressIndicatorObject.GetComponent<IProgressIndicator>();
			ProgressIndicatorDemoSceneLoad_tF22EAC3534317BF3822EC9E7B732348724FFFD00* L_6 = V_1;
			NullCheck(L_6);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___progressIndicatorObject_4;
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = GameObject_GetComponent_TisIProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_mAD8800425B8EFE6CF373EB80E9FA62FCEAAF2111(L_7, GameObject_GetComponent_TisIProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_mAD8800425B8EFE6CF373EB80E9FA62FCEAAF2111_RuntimeMethod_var);
			__this->___U3CindicatorU3E5__2_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CindicatorU3E5__2_3), (void*)L_8);
			// indicator.Message = "Preparing for scene operation...";
			RuntimeObject* L_9 = __this->___U3CindicatorU3E5__2_3;
			NullCheck(L_9);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Message(System.String) */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_9, _stringLiteral50F85C698D1B54E00789227F1306943F4EA17FC6);
			// await indicator.OpenAsync();
			RuntimeObject* L_10 = __this->___U3CindicatorU3E5__2_3;
			NullCheck(L_10);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11;
			L_11 = InterfaceFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(4 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::OpenAsync() */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_10);
			NullCheck(L_11);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12;
			L_12 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_11, NULL);
			V_2 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_13)
			{
				goto IL_00bc_1;
			}
		}
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15 = V_2;
			__this->___U3CU3Eu__1_7 = L_15;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_16 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m0C3B36CE8FC327CBA8AB41A8A906789371CA131A(L_16, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m0C3B36CE8FC327CBA8AB41A8A906789371CA131A_RuntimeMethod_var);
			goto IL_0327;
		}

IL_00a0_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_17 = __this->___U3CU3Eu__1_7;
			V_2 = L_17;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_18 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
		}

IL_00bc_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// float timeStarted = Time.time;
			float L_20;
			L_20 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
			__this->___U3CtimeStartedU3E5__5_6 = L_20;
			goto IL_012e_1;
		}

IL_00d0_1:
		{
			// await Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_21;
			L_21 = Task_Yield_m243FF1482B112E594401BAC859F9084753C4E653(NULL);
			V_4 = L_21;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_22;
			L_22 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_4), NULL);
			V_3 = L_22;
			bool L_23;
			L_23 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_3), NULL);
			if (L_23)
			{
				goto IL_0127_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_25 = V_3;
			__this->___U3CU3Eu__2_8 = L_25;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_26 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m677C7463D68320CE2B243236CDD169ECC6C4CBD8(L_26, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m677C7463D68320CE2B243236CDD169ECC6C4CBD8_RuntimeMethod_var);
			goto IL_0327;
		}

IL_010b_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_27 = __this->___U3CU3Eu__2_8;
			V_3 = L_27;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_28 = (&__this->___U3CU3Eu__2_8);
			il2cpp_codegen_initobj(L_28, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state_0 = L_29;
		}

IL_0127_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_3), NULL);
		}

IL_012e_1:
		{
			// while (Time.time < timeStarted + loadDelay)
			float L_30;
			L_30 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
			float L_31 = __this->___U3CtimeStartedU3E5__5_6;
			ProgressIndicatorDemoSceneLoad_tF22EAC3534317BF3822EC9E7B732348724FFFD00* L_32 = V_1;
			NullCheck(L_32);
			float L_33 = L_32->___loadDelay_6;
			if ((((float)L_30) < ((float)((float)il2cpp_codegen_add(L_31, L_33)))))
			{
				goto IL_00d0_1;
			}
		}
		{
			// if (CoreServices.SceneSystem.IsContentLoaded(sceneToLoad.Name))
			il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
			RuntimeObject* L_34;
			L_34 = CoreServices_get_SceneSystem_m09FA120251C7BF6C97926A14990FC510A1385520(NULL);
			ProgressIndicatorDemoSceneLoad_tF22EAC3534317BF3822EC9E7B732348724FFFD00* L_35 = V_1;
			NullCheck(L_35);
			SceneInfo_tB314A7039F454B061E2DDA89435C2CEE4BFDE43D* L_36 = (&L_35->___sceneToLoad_5);
			String_t* L_37 = L_36->___Name_1;
			NullCheck(L_34);
			bool L_38;
			L_38 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(41 /* System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.IMixedRealitySceneSystem::IsContentLoaded(System.String) */, IMixedRealitySceneSystem_t1DFDB45D5566F11CB42953060A58AD673C758250_il2cpp_TypeInfo_var, L_34, L_37);
			if (!L_38)
			{
				goto IL_0181_1;
			}
		}
		{
			// sceneTask = CoreServices.SceneSystem.UnloadContent(sceneToLoad.Name);
			il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
			RuntimeObject* L_39;
			L_39 = CoreServices_get_SceneSystem_m09FA120251C7BF6C97926A14990FC510A1385520(NULL);
			ProgressIndicatorDemoSceneLoad_tF22EAC3534317BF3822EC9E7B732348724FFFD00* L_40 = V_1;
			NullCheck(L_40);
			SceneInfo_tB314A7039F454B061E2DDA89435C2CEE4BFDE43D* L_41 = (&L_40->___sceneToLoad_5);
			String_t* L_42 = L_41->___Name_1;
			NullCheck(L_39);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_43;
			L_43 = InterfaceFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, String_t* >::Invoke(36 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.IMixedRealitySceneSystem::UnloadContent(System.String) */, IMixedRealitySceneSystem_t1DFDB45D5566F11CB42953060A58AD673C758250_il2cpp_TypeInfo_var, L_39, L_42);
			__this->___U3CsceneTaskU3E5__3_4 = L_43;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsceneTaskU3E5__3_4), (void*)L_43);
			// progressMessage = "Unloading scene {0}";
			__this->___U3CprogressMessageU3E5__4_5 = _stringLiteral74A60E912035CE11B30BC9F5502C3E8F60A11822;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprogressMessageU3E5__4_5), (void*)_stringLiteral74A60E912035CE11B30BC9F5502C3E8F60A11822);
			goto IL_01a9_1;
		}

IL_0181_1:
		{
			// sceneTask = CoreServices.SceneSystem.LoadContent(sceneToLoad.Name, UnityEngine.SceneManagement.LoadSceneMode.Additive);
			il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
			RuntimeObject* L_44;
			L_44 = CoreServices_get_SceneSystem_m09FA120251C7BF6C97926A14990FC510A1385520(NULL);
			ProgressIndicatorDemoSceneLoad_tF22EAC3534317BF3822EC9E7B732348724FFFD00* L_45 = V_1;
			NullCheck(L_45);
			SceneInfo_tB314A7039F454B061E2DDA89435C2CEE4BFDE43D* L_46 = (&L_45->___sceneToLoad_5);
			String_t* L_47 = L_46->___Name_1;
			NullCheck(L_44);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_48;
			L_48 = InterfaceFuncInvoker3< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, String_t*, int32_t, SceneActivationToken_t4BBC8B892BFA0B21E627C68E2E38B8D2CF38F3A2* >::Invoke(35 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.IMixedRealitySceneSystem::LoadContent(System.String,UnityEngine.SceneManagement.LoadSceneMode,Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken) */, IMixedRealitySceneSystem_t1DFDB45D5566F11CB42953060A58AD673C758250_il2cpp_TypeInfo_var, L_44, L_47, 1, (SceneActivationToken_t4BBC8B892BFA0B21E627C68E2E38B8D2CF38F3A2*)NULL);
			__this->___U3CsceneTaskU3E5__3_4 = L_48;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsceneTaskU3E5__3_4), (void*)L_48);
			// progressMessage = "Loading scene {0}";
			__this->___U3CprogressMessageU3E5__4_5 = _stringLiteral00EBC276BB87ACAA9AA6A47BF580281CE291D36B;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprogressMessageU3E5__4_5), (void*)_stringLiteral00EBC276BB87ACAA9AA6A47BF580281CE291D36B);
		}

IL_01a9_1:
		{
			// indicator.Message = progressMessage;
			RuntimeObject* L_49 = __this->___U3CindicatorU3E5__2_3;
			String_t* L_50 = __this->___U3CprogressMessageU3E5__4_5;
			NullCheck(L_49);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Message(System.String) */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_49, L_50);
			goto IL_0248_1;
		}

IL_01bf_1:
		{
			// indicator.Message = string.Format(progressMessage, CoreServices.SceneSystem.SceneOperationProgress * 100);
			RuntimeObject* L_51 = __this->___U3CindicatorU3E5__2_3;
			String_t* L_52 = __this->___U3CprogressMessageU3E5__4_5;
			il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
			RuntimeObject* L_53;
			L_53 = CoreServices_get_SceneSystem_m09FA120251C7BF6C97926A14990FC510A1385520(NULL);
			NullCheck(L_53);
			float L_54;
			L_54 = InterfaceFuncInvoker0< float >::Invoke(25 /* System.Single Microsoft.MixedReality.Toolkit.SceneSystem.IMixedRealitySceneSystem::get_SceneOperationProgress() */, IMixedRealitySceneSystem_t1DFDB45D5566F11CB42953060A58AD673C758250_il2cpp_TypeInfo_var, L_53);
			float L_55 = ((float)il2cpp_codegen_multiply(L_54, (100.0f)));
			RuntimeObject* L_56 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_55);
			String_t* L_57;
			L_57 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(L_52, L_56, NULL);
			NullCheck(L_51);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Message(System.String) */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_51, L_57);
			// await Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_58;
			L_58 = Task_Yield_m243FF1482B112E594401BAC859F9084753C4E653(NULL);
			V_4 = L_58;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_59;
			L_59 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_4), NULL);
			V_3 = L_59;
			bool L_60;
			L_60 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_3), NULL);
			if (L_60)
			{
				goto IL_0241_1;
			}
		}
		{
			int32_t L_61 = 2;
			V_0 = L_61;
			__this->___U3CU3E1__state_0 = L_61;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_62 = V_3;
			__this->___U3CU3Eu__2_8 = L_62;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_63 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m677C7463D68320CE2B243236CDD169ECC6C4CBD8(L_63, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m677C7463D68320CE2B243236CDD169ECC6C4CBD8_RuntimeMethod_var);
			goto IL_0327;
		}

IL_0225_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_64 = __this->___U3CU3Eu__2_8;
			V_3 = L_64;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_65 = (&__this->___U3CU3Eu__2_8);
			il2cpp_codegen_initobj(L_65, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_66 = (-1);
			V_0 = L_66;
			__this->___U3CU3E1__state_0 = L_66;
		}

IL_0241_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_3), NULL);
		}

IL_0248_1:
		{
			// while (!sceneTask.IsCompleted)
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_67 = __this->___U3CsceneTaskU3E5__3_4;
			NullCheck(L_67);
			bool L_68;
			L_68 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_67, NULL);
			if (!L_68)
			{
				goto IL_01bf_1;
			}
		}
		{
			// indicator.Message = "Finished operation";
			RuntimeObject* L_69 = __this->___U3CindicatorU3E5__2_3;
			NullCheck(L_69);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Message(System.String) */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_69, _stringLiteral6DAC536A5C7343DCD386CDDB310859C4AA0B965A);
			// await indicator.CloseAsync();
			RuntimeObject* L_70 = __this->___U3CindicatorU3E5__2_3;
			NullCheck(L_70);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_71;
			L_71 = InterfaceFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(6 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::CloseAsync() */, IProgressIndicator_t6344ADC3551E01DC2095D497894B83DA03698805_il2cpp_TypeInfo_var, L_70);
			NullCheck(L_71);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_72;
			L_72 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_71, NULL);
			V_2 = L_72;
			bool L_73;
			L_73 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_73)
			{
				goto IL_02c1_1;
			}
		}
		{
			int32_t L_74 = 3;
			V_0 = L_74;
			__this->___U3CU3E1__state_0 = L_74;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_75 = V_2;
			__this->___U3CU3Eu__1_7 = L_75;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_76 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m0C3B36CE8FC327CBA8AB41A8A906789371CA131A(L_76, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116_m0C3B36CE8FC327CBA8AB41A8A906789371CA131A_RuntimeMethod_var);
			goto IL_0327;
		}

IL_02a5_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_77 = __this->___U3CU3Eu__1_7;
			V_2 = L_77;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_78 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_78, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_79 = (-1);
			V_0 = L_79;
			__this->___U3CU3E1__state_0 = L_79;
		}

IL_02c1_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			// startedProgressBehavior = false;
			ProgressIndicatorDemoSceneLoad_tF22EAC3534317BF3822EC9E7B732348724FFFD00* L_80 = V_1;
			NullCheck(L_80);
			L_80->___startedProgressBehavior_7 = (bool)0;
			goto IL_02ff;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02d1;
		}
		throw e;
	}

CATCH_02d1:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CindicatorU3E5__2_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CindicatorU3E5__2_3), (void*)(RuntimeObject*)NULL);
		__this->___U3CsceneTaskU3E5__3_4 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsceneTaskU3E5__3_4), (void*)(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL);
		__this->___U3CprogressMessageU3E5__4_5 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprogressMessageU3E5__4_5), (void*)(String_t*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_81 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_82 = V_5;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_81, L_82, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0327;
	}// end catch (depth: 1)

IL_02ff:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CindicatorU3E5__2_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CindicatorU3E5__2_3), (void*)(RuntimeObject*)NULL);
		__this->___U3CsceneTaskU3E5__3_4 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsceneTaskU3E5__3_4), (void*)(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL);
		__this->___U3CprogressMessageU3E5__4_5 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CprogressMessageU3E5__4_5), (void*)(String_t*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_83 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_83, NULL);
	}

IL_0327:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartProgressBehaviorU3Ed__4_MoveNext_m9A41723CF8D8E4172E0C693C410C7CA572BA0F70_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116*>(__this + _offset);
	U3CStartProgressBehaviorU3Ed__4_MoveNext_m9A41723CF8D8E4172E0C693C410C7CA572BA0F70(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemoSceneLoad/<StartProgressBehavior>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartProgressBehaviorU3Ed__4_SetStateMachine_m741306E6BDBB3CB825E7EDD5CD8966E7E1C2E19B (U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartProgressBehaviorU3Ed__4_SetStateMachine_m741306E6BDBB3CB825E7EDD5CD8966E7E1C2E19B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartProgressBehaviorU3Ed__4_t55233A54F0642FBA86A50DC731506B6D4AFFB116*>(__this + _offset);
	U3CStartProgressBehaviorU3Ed__4_SetStateMachine_m741306E6BDBB3CB825E7EDD5CD8966E7E1C2E19B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SliderLunarLander::OnSliderUpdated(Microsoft.MixedReality.Toolkit.UI.SliderEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderLunarLander_OnSliderUpdated_m7CE53650B5473FADC95CA219242762930222F023 (SliderLunarLander_t8581E51E62C5EE44A746ED6BDDE123AFFCD9364E* __this, SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transformLandingGear != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___transformLandingGear_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// transformLandingGear.localPosition = new Vector3(transformLandingGear.localPosition.x, 1.0f - eventData.NewValue, transformLandingGear.localPosition.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___transformLandingGear_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___transformLandingGear_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		float L_5 = L_4.___x_2;
		SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* L_6 = ___eventData0;
		NullCheck(L_6);
		float L_7;
		L_7 = SliderEventData_get_NewValue_m5E0B8480E8D0AEAEBCB2AC29ADCFAC8C6F14401F_inline(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___transformLandingGear_4;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_8, NULL);
		float L_10 = L_9.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_5, ((float)il2cpp_codegen_subtract((1.0f), L_7)), L_10, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_2, L_11, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SliderLunarLander::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderLunarLander__ctor_mC189F20CF4ACA20A6B80B2B0C52AE4668238D23E (SliderLunarLander_t8581E51E62C5EE44A746ED6BDDE123AFFCD9364E* __this, const RuntimeMethod* method) 
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
// System.String RosMessageTypes.UnityRoboticsDemo.PosRotMsg::get_RosMessageName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PosRotMsg_get_RosMessageName_mC5C0EB8414F5BFB508938AB1849D69299A31537F (PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC756321A83B6CBC3121A56AAE598C904D69BCC73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string RosMessageName => k_RosMessageName;
		return _stringLiteralC756321A83B6CBC3121A56AAE598C904D69BCC73;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.PosRotMsg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PosRotMsg__ctor_m53342C953F46717578C632F49D4092BB1AB855D0 (PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* __this, const RuntimeMethod* method) 
{
	{
		// public PosRotMsg()
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.pos_x = 0.0f;
		__this->___pos_x_1 = (0.0f);
		// this.pos_y = 0.0f;
		__this->___pos_y_2 = (0.0f);
		// this.pos_z = 0.0f;
		__this->___pos_z_3 = (0.0f);
		// this.rot_x = 0.0f;
		__this->___rot_x_4 = (0.0f);
		// this.rot_y = 0.0f;
		__this->___rot_y_5 = (0.0f);
		// this.rot_z = 0.0f;
		__this->___rot_z_6 = (0.0f);
		// this.rot_w = 0.0f;
		__this->___rot_w_7 = (0.0f);
		// }
		return;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.PosRotMsg::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PosRotMsg__ctor_m6705765DA0F29BF137FF50667330438E6C06C034 (PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* __this, float ___pos_x0, float ___pos_y1, float ___pos_z2, float ___rot_x3, float ___rot_y4, float ___rot_z5, float ___rot_w6, const RuntimeMethod* method) 
{
	{
		// public PosRotMsg(float pos_x, float pos_y, float pos_z, float rot_x, float rot_y, float rot_z, float rot_w)
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.pos_x = pos_x;
		float L_0 = ___pos_x0;
		__this->___pos_x_1 = L_0;
		// this.pos_y = pos_y;
		float L_1 = ___pos_y1;
		__this->___pos_y_2 = L_1;
		// this.pos_z = pos_z;
		float L_2 = ___pos_z2;
		__this->___pos_z_3 = L_2;
		// this.rot_x = rot_x;
		float L_3 = ___rot_x3;
		__this->___rot_x_4 = L_3;
		// this.rot_y = rot_y;
		float L_4 = ___rot_y4;
		__this->___rot_y_5 = L_4;
		// this.rot_z = rot_z;
		float L_5 = ___rot_z5;
		__this->___rot_z_6 = L_5;
		// this.rot_w = rot_w;
		float L_6 = ___rot_w6;
		__this->___rot_w_7 = L_6;
		// }
		return;
	}
}
// RosMessageTypes.UnityRoboticsDemo.PosRotMsg RosMessageTypes.UnityRoboticsDemo.PosRotMsg::Deserialize(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* PosRotMsg_Deserialize_m9A70A37AE6697C991201D947CE36D6453E33AE46 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static PosRotMsg Deserialize(MessageDeserializer deserializer) => new PosRotMsg(deserializer);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_0 = ___deserializer0;
		PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* L_1 = (PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6*)il2cpp_codegen_object_new(PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PosRotMsg__ctor_mBFA5CFC096E7746AB5014AA8FFD5219D21697121(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.PosRotMsg::.ctor(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PosRotMsg__ctor_mBFA5CFC096E7746AB5014AA8FFD5219D21697121 (PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* __this, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) 
{
	{
		// private PosRotMsg(MessageDeserializer deserializer)
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// deserializer.Read(out this.pos_x);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_0 = ___deserializer0;
		float* L_1 = (&__this->___pos_x_1);
		NullCheck(L_0);
		MessageDeserializer_Read_mA49D63D7CE978914FA91D79DFB5703863F24CE94(L_0, L_1, NULL);
		// deserializer.Read(out this.pos_y);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_2 = ___deserializer0;
		float* L_3 = (&__this->___pos_y_2);
		NullCheck(L_2);
		MessageDeserializer_Read_mA49D63D7CE978914FA91D79DFB5703863F24CE94(L_2, L_3, NULL);
		// deserializer.Read(out this.pos_z);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_4 = ___deserializer0;
		float* L_5 = (&__this->___pos_z_3);
		NullCheck(L_4);
		MessageDeserializer_Read_mA49D63D7CE978914FA91D79DFB5703863F24CE94(L_4, L_5, NULL);
		// deserializer.Read(out this.rot_x);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_6 = ___deserializer0;
		float* L_7 = (&__this->___rot_x_4);
		NullCheck(L_6);
		MessageDeserializer_Read_mA49D63D7CE978914FA91D79DFB5703863F24CE94(L_6, L_7, NULL);
		// deserializer.Read(out this.rot_y);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_8 = ___deserializer0;
		float* L_9 = (&__this->___rot_y_5);
		NullCheck(L_8);
		MessageDeserializer_Read_mA49D63D7CE978914FA91D79DFB5703863F24CE94(L_8, L_9, NULL);
		// deserializer.Read(out this.rot_z);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_10 = ___deserializer0;
		float* L_11 = (&__this->___rot_z_6);
		NullCheck(L_10);
		MessageDeserializer_Read_mA49D63D7CE978914FA91D79DFB5703863F24CE94(L_10, L_11, NULL);
		// deserializer.Read(out this.rot_w);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_12 = ___deserializer0;
		float* L_13 = (&__this->___rot_w_7);
		NullCheck(L_12);
		MessageDeserializer_Read_mA49D63D7CE978914FA91D79DFB5703863F24CE94(L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.PosRotMsg::SerializeTo(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PosRotMsg_SerializeTo_mEFC8EC59FB8D1EE976766B796E57E82A831D7523 (PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* __this, MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* ___serializer0, const RuntimeMethod* method) 
{
	{
		// serializer.Write(this.pos_x);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_0 = ___serializer0;
		float L_1 = __this->___pos_x_1;
		NullCheck(L_0);
		MessageSerializer_Write_m021DAEA22795AA327AB9D673B6204E863D363874(L_0, L_1, NULL);
		// serializer.Write(this.pos_y);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_2 = ___serializer0;
		float L_3 = __this->___pos_y_2;
		NullCheck(L_2);
		MessageSerializer_Write_m021DAEA22795AA327AB9D673B6204E863D363874(L_2, L_3, NULL);
		// serializer.Write(this.pos_z);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_4 = ___serializer0;
		float L_5 = __this->___pos_z_3;
		NullCheck(L_4);
		MessageSerializer_Write_m021DAEA22795AA327AB9D673B6204E863D363874(L_4, L_5, NULL);
		// serializer.Write(this.rot_x);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_6 = ___serializer0;
		float L_7 = __this->___rot_x_4;
		NullCheck(L_6);
		MessageSerializer_Write_m021DAEA22795AA327AB9D673B6204E863D363874(L_6, L_7, NULL);
		// serializer.Write(this.rot_y);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_8 = ___serializer0;
		float L_9 = __this->___rot_y_5;
		NullCheck(L_8);
		MessageSerializer_Write_m021DAEA22795AA327AB9D673B6204E863D363874(L_8, L_9, NULL);
		// serializer.Write(this.rot_z);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_10 = ___serializer0;
		float L_11 = __this->___rot_z_6;
		NullCheck(L_10);
		MessageSerializer_Write_m021DAEA22795AA327AB9D673B6204E863D363874(L_10, L_11, NULL);
		// serializer.Write(this.rot_w);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_12 = ___serializer0;
		float L_13 = __this->___rot_w_7;
		NullCheck(L_12);
		MessageSerializer_Write_m021DAEA22795AA327AB9D673B6204E863D363874(L_12, L_13, NULL);
		// }
		return;
	}
}
// System.String RosMessageTypes.UnityRoboticsDemo.PosRotMsg::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PosRotMsg_ToString_m374309B560483935A0222BB291591D9C5B61724F (PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral382E1794B036842D5250A832C183FF81C2D1DF65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral460E8A82291105A4D35E22F4EC556FF88B71EBC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88D4CA1F18255210827BD4EA4392882ADB6F8CC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB766A7FA875F83A29661225962B6B6C61E02B958);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3ECABA049867CD1120F4580E3F57FA8F7562A71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0271EDE6F34DC22850C498710F7C27599AD1CA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEACDDE496DA3D7742A4E535B14817E30E4EB64A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "PosRotMsg: " +
		// "\npos_x: " + pos_x.ToString() +
		// "\npos_y: " + pos_y.ToString() +
		// "\npos_z: " + pos_z.ToString() +
		// "\nrot_x: " + rot_x.ToString() +
		// "\nrot_y: " + rot_y.ToString() +
		// "\nrot_z: " + rot_z.ToString() +
		// "\nrot_w: " + rot_w.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralB766A7FA875F83A29661225962B6B6C61E02B958);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB766A7FA875F83A29661225962B6B6C61E02B958);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		float* L_3 = (&__this->___pos_x_1);
		String_t* L_4;
		L_4 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral460E8A82291105A4D35E22F4EC556FF88B71EBC8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral460E8A82291105A4D35E22F4EC556FF88B71EBC8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		float* L_7 = (&__this->___pos_y_2);
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralE0271EDE6F34DC22850C498710F7C27599AD1CA3);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE0271EDE6F34DC22850C498710F7C27599AD1CA3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		float* L_11 = (&__this->___pos_z_3);
		String_t* L_12;
		L_12 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_10;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral88D4CA1F18255210827BD4EA4392882ADB6F8CC2);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral88D4CA1F18255210827BD4EA4392882ADB6F8CC2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		float* L_15 = (&__this->___rot_x_4);
		String_t* L_16;
		L_16 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_14;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral382E1794B036842D5250A832C183FF81C2D1DF65);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral382E1794B036842D5250A832C183FF81C2D1DF65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		float* L_19 = (&__this->___rot_y_5);
		String_t* L_20;
		L_20 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_19, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_18;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralC3ECABA049867CD1120F4580E3F57FA8F7562A71);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralC3ECABA049867CD1120F4580E3F57FA8F7562A71);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		float* L_23 = (&__this->___rot_z_6);
		String_t* L_24;
		L_24 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_23, NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_22;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteralEACDDE496DA3D7742A4E535B14817E30E4EB64A4);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralEACDDE496DA3D7742A4E535B14817E30E4EB64A4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		float* L_27 = (&__this->___rot_w_7);
		String_t* L_28;
		L_28 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_27, NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_28);
		String_t* L_29;
		L_29 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_26, NULL);
		return L_29;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.PosRotMsg::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PosRotMsg_Register_mB40F1E1D191104B537E32FF2840466F8CEADD2F7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB5E220E48E4286DB039FA7EA9E550FF4CAA148E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_Register_TisPosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6_m889C983EA2371072FA79C88DA8D44ED334FF7DF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PosRotMsg_Deserialize_m9A70A37AE6697C991201D947CE36D6453E33AE46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC756321A83B6CBC3121A56AAE598C904D69BCC73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MessageRegistry.Register(k_RosMessageName, Deserialize);
		Func_2_tB5E220E48E4286DB039FA7EA9E550FF4CAA148E0* L_0 = (Func_2_tB5E220E48E4286DB039FA7EA9E550FF4CAA148E0*)il2cpp_codegen_object_new(Func_2_tB5E220E48E4286DB039FA7EA9E550FF4CAA148E0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_2__ctor_mF26592C7EF4EAF4A9CDC510509038F254A437284(L_0, NULL, (intptr_t)((void*)PosRotMsg_Deserialize_m9A70A37AE6697C991201D947CE36D6453E33AE46_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		MessageRegistry_Register_TisPosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6_m889C983EA2371072FA79C88DA8D44ED334FF7DF3(_stringLiteralC756321A83B6CBC3121A56AAE598C904D69BCC73, L_0, 0, MessageRegistry_Register_TisPosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6_m889C983EA2371072FA79C88DA8D44ED334FF7DF3_RuntimeMethod_var);
		// }
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
// System.String RosMessageTypes.UnityRoboticsDemo.UnityColorMsg::get_RosMessageName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityColorMsg_get_RosMessageName_m9A2F2E5F5B127BF4451A5D100E2A1232AA563659 (UnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4DF149E9A176856E50C9483880FF56D5C1B0CBA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string RosMessageName => k_RosMessageName;
		return _stringLiteralC4DF149E9A176856E50C9483880FF56D5C1B0CBA;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.UnityColorMsg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityColorMsg__ctor_m10AA2F9AB507FEA00C6DE50C61B782705E558D82 (UnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C* __this, const RuntimeMethod* method) 
{
	{
		// public UnityColorMsg()
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.r = 0;
		__this->___r_1 = 0;
		// this.g = 0;
		__this->___g_2 = 0;
		// this.b = 0;
		__this->___b_3 = 0;
		// this.a = 0;
		__this->___a_4 = 0;
		// }
		return;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.UnityColorMsg::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityColorMsg__ctor_mEA16746E2C3C659C0AFEA4F285EF2A7F27FF69CF (UnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C* __this, int32_t ___r0, int32_t ___g1, int32_t ___b2, int32_t ___a3, const RuntimeMethod* method) 
{
	{
		// public UnityColorMsg(int r, int g, int b, int a)
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.r = r;
		int32_t L_0 = ___r0;
		__this->___r_1 = L_0;
		// this.g = g;
		int32_t L_1 = ___g1;
		__this->___g_2 = L_1;
		// this.b = b;
		int32_t L_2 = ___b2;
		__this->___b_3 = L_2;
		// this.a = a;
		int32_t L_3 = ___a3;
		__this->___a_4 = L_3;
		// }
		return;
	}
}
// RosMessageTypes.UnityRoboticsDemo.UnityColorMsg RosMessageTypes.UnityRoboticsDemo.UnityColorMsg::Deserialize(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C* UnityColorMsg_Deserialize_m37765ED72A687E7202BBA4F034CD2ED17195D4A3 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnityColorMsg Deserialize(MessageDeserializer deserializer) => new UnityColorMsg(deserializer);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_0 = ___deserializer0;
		UnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C* L_1 = (UnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C*)il2cpp_codegen_object_new(UnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityColorMsg__ctor_m85523DC09129963C74D116916A0D3FB69C150E36(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.UnityColorMsg::.ctor(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityColorMsg__ctor_m85523DC09129963C74D116916A0D3FB69C150E36 (UnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C* __this, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) 
{
	{
		// private UnityColorMsg(MessageDeserializer deserializer)
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// deserializer.Read(out this.r);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_0 = ___deserializer0;
		int32_t* L_1 = (&__this->___r_1);
		NullCheck(L_0);
		MessageDeserializer_Read_m7BB886F522350724AA8560D7349B800804FCD0B2(L_0, L_1, NULL);
		// deserializer.Read(out this.g);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_2 = ___deserializer0;
		int32_t* L_3 = (&__this->___g_2);
		NullCheck(L_2);
		MessageDeserializer_Read_m7BB886F522350724AA8560D7349B800804FCD0B2(L_2, L_3, NULL);
		// deserializer.Read(out this.b);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_4 = ___deserializer0;
		int32_t* L_5 = (&__this->___b_3);
		NullCheck(L_4);
		MessageDeserializer_Read_m7BB886F522350724AA8560D7349B800804FCD0B2(L_4, L_5, NULL);
		// deserializer.Read(out this.a);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_6 = ___deserializer0;
		int32_t* L_7 = (&__this->___a_4);
		NullCheck(L_6);
		MessageDeserializer_Read_m7BB886F522350724AA8560D7349B800804FCD0B2(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.UnityColorMsg::SerializeTo(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityColorMsg_SerializeTo_mD541911EB482EEC581D52EE2B39BA1B4420F06A2 (UnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C* __this, MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* ___serializer0, const RuntimeMethod* method) 
{
	{
		// serializer.Write(this.r);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_0 = ___serializer0;
		int32_t L_1 = __this->___r_1;
		NullCheck(L_0);
		MessageSerializer_Write_mCE95E66B6BFA2E0382A1C65748319D7110B52C6A(L_0, L_1, NULL);
		// serializer.Write(this.g);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_2 = ___serializer0;
		int32_t L_3 = __this->___g_2;
		NullCheck(L_2);
		MessageSerializer_Write_mCE95E66B6BFA2E0382A1C65748319D7110B52C6A(L_2, L_3, NULL);
		// serializer.Write(this.b);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_4 = ___serializer0;
		int32_t L_5 = __this->___b_3;
		NullCheck(L_4);
		MessageSerializer_Write_mCE95E66B6BFA2E0382A1C65748319D7110B52C6A(L_4, L_5, NULL);
		// serializer.Write(this.a);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_6 = ___serializer0;
		int32_t L_7 = __this->___a_4;
		NullCheck(L_6);
		MessageSerializer_Write_mCE95E66B6BFA2E0382A1C65748319D7110B52C6A(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.String RosMessageTypes.UnityRoboticsDemo.UnityColorMsg::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityColorMsg_ToString_mF5C49C5E11AFFF52F4D82985FD3D678D0297083C (UnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DC280959F421389AF1BE457F48E732532CDCD8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D88250DE6A1034352C674B4F9BC3E5B3913A89D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4412CC68669063AAF2F05CB4323834EE77A9ECCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9658728095AC3CB3BBE60D83A646DD7268D0B7AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "UnityColorMsg: " +
		// "\nr: " + r.ToString() +
		// "\ng: " + g.ToString() +
		// "\nb: " + b.ToString() +
		// "\na: " + a.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral0DC280959F421389AF1BE457F48E732532CDCD8D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0DC280959F421389AF1BE457F48E732532CDCD8D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t* L_3 = (&__this->___r_1);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral9658728095AC3CB3BBE60D83A646DD7268D0B7AF);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral9658728095AC3CB3BBE60D83A646DD7268D0B7AF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int32_t* L_7 = (&__this->___g_2);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral4412CC68669063AAF2F05CB4323834EE77A9ECCC);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4412CC68669063AAF2F05CB4323834EE77A9ECCC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		int32_t* L_11 = (&__this->___b_3);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_10;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral2D88250DE6A1034352C674B4F9BC3E5B3913A89D);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral2D88250DE6A1034352C674B4F9BC3E5B3913A89D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		int32_t* L_15 = (&__this->___a_4);
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		String_t* L_17;
		L_17 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_14, NULL);
		return L_17;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.UnityColorMsg::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityColorMsg_Register_mA4B38072DC9B27D2B13898DB08FFDEA0ADB0328D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF8849497BB86332E0D22F18145E68B6BAB0BD4F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_Register_TisUnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C_m0FB666A15FA6F9FC69DC3A43C7A2369B54D84E12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityColorMsg_Deserialize_m37765ED72A687E7202BBA4F034CD2ED17195D4A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4DF149E9A176856E50C9483880FF56D5C1B0CBA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MessageRegistry.Register(k_RosMessageName, Deserialize);
		Func_2_tF8849497BB86332E0D22F18145E68B6BAB0BD4F7* L_0 = (Func_2_tF8849497BB86332E0D22F18145E68B6BAB0BD4F7*)il2cpp_codegen_object_new(Func_2_tF8849497BB86332E0D22F18145E68B6BAB0BD4F7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_2__ctor_mEEB43F6403D30323C8C5A23155E89036348E3C9C(L_0, NULL, (intptr_t)((void*)UnityColorMsg_Deserialize_m37765ED72A687E7202BBA4F034CD2ED17195D4A3_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		MessageRegistry_Register_TisUnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C_m0FB666A15FA6F9FC69DC3A43C7A2369B54D84E12(_stringLiteralC4DF149E9A176856E50C9483880FF56D5C1B0CBA, L_0, 0, MessageRegistry_Register_TisUnityColorMsg_t83C20A896A17D6E1F8595B07F61D18884A479A0C_m0FB666A15FA6F9FC69DC3A43C7A2369B54D84E12_RuntimeMethod_var);
		// }
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
// System.String RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceRequest::get_RosMessageName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectPoseServiceRequest_get_RosMessageName_m13B27A9ADE771FC97AE4304FEE118761F7B5C5BC (ObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF561D79ED0FBD252262C73FAE9DA7F1CF37835F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string RosMessageName => k_RosMessageName;
		return _stringLiteralDF561D79ED0FBD252262C73FAE9DA7F1CF37835F;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoseServiceRequest__ctor_mF72260AC25FA0727D8C1C3BFDB9FD4797827EB5C (ObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ObjectPoseServiceRequest()
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.object_name = "";
		__this->___object_name_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___object_name_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceRequest::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoseServiceRequest__ctor_m4C8E285DC9F2B2D21C3C7307078C655492750636 (ObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26* __this, String_t* ___object_name0, const RuntimeMethod* method) 
{
	{
		// public ObjectPoseServiceRequest(string object_name)
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.object_name = object_name;
		String_t* L_0 = ___object_name0;
		__this->___object_name_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___object_name_1), (void*)L_0);
		// }
		return;
	}
}
// RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceRequest RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceRequest::Deserialize(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26* ObjectPoseServiceRequest_Deserialize_mFCC7D71797FDB5E381B0DAB01BF849FEF1B29C0E (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ObjectPoseServiceRequest Deserialize(MessageDeserializer deserializer) => new ObjectPoseServiceRequest(deserializer);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_0 = ___deserializer0;
		ObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26* L_1 = (ObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26*)il2cpp_codegen_object_new(ObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ObjectPoseServiceRequest__ctor_m4CDFB39FC804570A9CF71422D88B6DBC28D7FEDA(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceRequest::.ctor(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoseServiceRequest__ctor_m4CDFB39FC804570A9CF71422D88B6DBC28D7FEDA (ObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26* __this, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) 
{
	{
		// private ObjectPoseServiceRequest(MessageDeserializer deserializer)
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// deserializer.Read(out this.object_name);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_0 = ___deserializer0;
		String_t** L_1 = (&__this->___object_name_1);
		NullCheck(L_0);
		MessageDeserializer_Read_m82B22DA76582918DC2FF9771977798BDBF5D49D7(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceRequest::SerializeTo(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoseServiceRequest_SerializeTo_m15D4DCF7DD1EB4AEC1A02E6E13682D152F0FAE5A (ObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26* __this, MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* ___serializer0, const RuntimeMethod* method) 
{
	{
		// serializer.Write(this.object_name);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_0 = ___serializer0;
		String_t* L_1 = __this->___object_name_1;
		NullCheck(L_0);
		MessageSerializer_Write_m312F6ADF2C641C9B93F4E1FC7D416F60034C9B1C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceRequest::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectPoseServiceRequest_ToString_mA267C71C60F8156536E89D25E563D5A796E1D0A7 (ObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37427B42003292E98655CF4FA86BD07C6A8483CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "ObjectPoseServiceRequest: " +
		// "\nobject_name: " + object_name.ToString();
		String_t* L_0 = __this->___object_name_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral37427B42003292E98655CF4FA86BD07C6A8483CF, L_1, NULL);
		return L_2;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceRequest::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoseServiceRequest_Register_m9857184E2AD64FF37755590A9986159F7D3939BC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t94AC646487397F6CAE12DD4E9754D5EAD663F377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_Register_TisObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26_m3A6F9C134856325A359D07FA10D6CA95D1D0EDDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPoseServiceRequest_Deserialize_mFCC7D71797FDB5E381B0DAB01BF849FEF1B29C0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF561D79ED0FBD252262C73FAE9DA7F1CF37835F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MessageRegistry.Register(k_RosMessageName, Deserialize);
		Func_2_t94AC646487397F6CAE12DD4E9754D5EAD663F377* L_0 = (Func_2_t94AC646487397F6CAE12DD4E9754D5EAD663F377*)il2cpp_codegen_object_new(Func_2_t94AC646487397F6CAE12DD4E9754D5EAD663F377_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_2__ctor_mE4E77A84C16AD3E5BE79ED6AD95B8D5381AFF9CC(L_0, NULL, (intptr_t)((void*)ObjectPoseServiceRequest_Deserialize_mFCC7D71797FDB5E381B0DAB01BF849FEF1B29C0E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		MessageRegistry_Register_TisObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26_m3A6F9C134856325A359D07FA10D6CA95D1D0EDDE(_stringLiteralDF561D79ED0FBD252262C73FAE9DA7F1CF37835F, L_0, 0, MessageRegistry_Register_TisObjectPoseServiceRequest_t9315044C454F8E28B8BB83D909C4B1339428DA26_m3A6F9C134856325A359D07FA10D6CA95D1D0EDDE_RuntimeMethod_var);
		// }
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
// System.String RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceResponse::get_RosMessageName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectPoseServiceResponse_get_RosMessageName_m12FEDFF7C36373D557BCEC765CB77117ED7C9026 (ObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF561D79ED0FBD252262C73FAE9DA7F1CF37835F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string RosMessageName => k_RosMessageName;
		return _stringLiteralDF561D79ED0FBD252262C73FAE9DA7F1CF37835F;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoseServiceResponse__ctor_mC866864CBC80BD1B5E44E7CA74C0E21773441FEF (ObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseMsg_t68AFC5A79FA5F4DFAA007467CBD85D1EFD6A53C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ObjectPoseServiceResponse()
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.object_pose = new Geometry.PoseMsg();
		PoseMsg_t68AFC5A79FA5F4DFAA007467CBD85D1EFD6A53C1* L_0 = (PoseMsg_t68AFC5A79FA5F4DFAA007467CBD85D1EFD6A53C1*)il2cpp_codegen_object_new(PoseMsg_t68AFC5A79FA5F4DFAA007467CBD85D1EFD6A53C1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PoseMsg__ctor_m967EC0092480A26AD95D5AADB783A86AAADCDE18(L_0, NULL);
		__this->___object_pose_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___object_pose_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceResponse::.ctor(RosMessageTypes.Geometry.PoseMsg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoseServiceResponse__ctor_m51243A630B74BEE1ADFAD098C6F1C2B51A516931 (ObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A* __this, PoseMsg_t68AFC5A79FA5F4DFAA007467CBD85D1EFD6A53C1* ___object_pose0, const RuntimeMethod* method) 
{
	{
		// public ObjectPoseServiceResponse(Geometry.PoseMsg object_pose)
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.object_pose = object_pose;
		PoseMsg_t68AFC5A79FA5F4DFAA007467CBD85D1EFD6A53C1* L_0 = ___object_pose0;
		__this->___object_pose_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___object_pose_1), (void*)L_0);
		// }
		return;
	}
}
// RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceResponse RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceResponse::Deserialize(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A* ObjectPoseServiceResponse_Deserialize_mEF44FBA0DB6596E35AC3B7552F3D1C4C52095A0D (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ObjectPoseServiceResponse Deserialize(MessageDeserializer deserializer) => new ObjectPoseServiceResponse(deserializer);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_0 = ___deserializer0;
		ObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A* L_1 = (ObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A*)il2cpp_codegen_object_new(ObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ObjectPoseServiceResponse__ctor_m9E34677D230FB5C4562944F3AED71F6ED685B697(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceResponse::.ctor(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoseServiceResponse__ctor_m9E34677D230FB5C4562944F3AED71F6ED685B697 (ObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A* __this, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) 
{
	{
		// private ObjectPoseServiceResponse(MessageDeserializer deserializer)
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.object_pose = Geometry.PoseMsg.Deserialize(deserializer);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_0 = ___deserializer0;
		PoseMsg_t68AFC5A79FA5F4DFAA007467CBD85D1EFD6A53C1* L_1;
		L_1 = PoseMsg_Deserialize_m70AA4E25ADC1355DC2A29981574AAF3D6DDD5694(L_0, NULL);
		__this->___object_pose_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___object_pose_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceResponse::SerializeTo(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoseServiceResponse_SerializeTo_m28C86FB4B5A473C708F92E542D4CBFCF95670229 (ObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A* __this, MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* ___serializer0, const RuntimeMethod* method) 
{
	{
		// serializer.Write(this.object_pose);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_0 = ___serializer0;
		PoseMsg_t68AFC5A79FA5F4DFAA007467CBD85D1EFD6A53C1* L_1 = __this->___object_pose_1;
		NullCheck(L_0);
		MessageSerializer_Write_m613055761C27F6318B64533D2DA22356BEB98317(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceResponse::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectPoseServiceResponse_ToString_m5155B794DB61457C409A1F59D6F085BD9B9B4D8D (ObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4637F13D6B008DB2C4AB991C038067F43B5163B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "ObjectPoseServiceResponse: " +
		// "\nobject_pose: " + object_pose.ToString();
		PoseMsg_t68AFC5A79FA5F4DFAA007467CBD85D1EFD6A53C1* L_0 = __this->___object_pose_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4637F13D6B008DB2C4AB991C038067F43B5163B1, L_1, NULL);
		return L_2;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.ObjectPoseServiceResponse::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPoseServiceResponse_Register_m75450C786125BFC7527AD0949E85759A69E67622 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7F82221457BA5B9A80A4C7223171F78F0D85183F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_Register_TisObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A_m0870CBAF6FD7B41472F8B5B8F3055351BC1D1147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPoseServiceResponse_Deserialize_mEF44FBA0DB6596E35AC3B7552F3D1C4C52095A0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF561D79ED0FBD252262C73FAE9DA7F1CF37835F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MessageRegistry.Register(k_RosMessageName, Deserialize, MessageSubtopic.Response);
		Func_2_t7F82221457BA5B9A80A4C7223171F78F0D85183F* L_0 = (Func_2_t7F82221457BA5B9A80A4C7223171F78F0D85183F*)il2cpp_codegen_object_new(Func_2_t7F82221457BA5B9A80A4C7223171F78F0D85183F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_2__ctor_m1A436C31791AF4C3BC36B5000DA8132F42B279CB(L_0, NULL, (intptr_t)((void*)ObjectPoseServiceResponse_Deserialize_mEF44FBA0DB6596E35AC3B7552F3D1C4C52095A0D_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		MessageRegistry_Register_TisObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A_m0870CBAF6FD7B41472F8B5B8F3055351BC1D1147(_stringLiteralDF561D79ED0FBD252262C73FAE9DA7F1CF37835F, L_0, 1, MessageRegistry_Register_TisObjectPoseServiceResponse_tE6EBD3B93580616BF2DF7D3A7AA0A68981DFEA7A_m0870CBAF6FD7B41472F8B5B8F3055351BC1D1147_RuntimeMethod_var);
		// }
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
// System.String RosMessageTypes.UnityRoboticsDemo.PositionServiceRequest::get_RosMessageName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PositionServiceRequest_get_RosMessageName_m31C7E833DC67ADEAF35B0B53DF2AD703A0488520 (PositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04932242F5F6C26C51C9FF90ED8D542D2C1A47DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string RosMessageName => k_RosMessageName;
		return _stringLiteral04932242F5F6C26C51C9FF90ED8D542D2C1A47DE;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.PositionServiceRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionServiceRequest__ctor_m0A01400ED588CA3D87A70A1E1F3267A37B48B714 (PositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PositionServiceRequest()
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.input = new PosRotMsg();
		PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* L_0 = (PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6*)il2cpp_codegen_object_new(PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PosRotMsg__ctor_m53342C953F46717578C632F49D4092BB1AB855D0(L_0, NULL);
		__this->___input_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.PositionServiceRequest::.ctor(RosMessageTypes.UnityRoboticsDemo.PosRotMsg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionServiceRequest__ctor_mDA5727841B48D752EE448A65E5313F5F8899E2EB (PositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249* __this, PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* ___input0, const RuntimeMethod* method) 
{
	{
		// public PositionServiceRequest(PosRotMsg input)
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.input = input;
		PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* L_0 = ___input0;
		__this->___input_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_1), (void*)L_0);
		// }
		return;
	}
}
// RosMessageTypes.UnityRoboticsDemo.PositionServiceRequest RosMessageTypes.UnityRoboticsDemo.PositionServiceRequest::Deserialize(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249* PositionServiceRequest_Deserialize_m284EBE53A162C6F4BEF6DE03A02F2785ECC6A966 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static PositionServiceRequest Deserialize(MessageDeserializer deserializer) => new PositionServiceRequest(deserializer);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_0 = ___deserializer0;
		PositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249* L_1 = (PositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249*)il2cpp_codegen_object_new(PositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PositionServiceRequest__ctor_m0AFE70244C806147367672B8DC4C44E8E17F3D30(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.PositionServiceRequest::.ctor(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionServiceRequest__ctor_m0AFE70244C806147367672B8DC4C44E8E17F3D30 (PositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249* __this, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) 
{
	{
		// private PositionServiceRequest(MessageDeserializer deserializer)
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.input = PosRotMsg.Deserialize(deserializer);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_0 = ___deserializer0;
		PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* L_1;
		L_1 = PosRotMsg_Deserialize_m9A70A37AE6697C991201D947CE36D6453E33AE46(L_0, NULL);
		__this->___input_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.PositionServiceRequest::SerializeTo(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionServiceRequest_SerializeTo_mA1893D1280B2D3DAF4B5B9B734605E52A347AE41 (PositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249* __this, MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* ___serializer0, const RuntimeMethod* method) 
{
	{
		// serializer.Write(this.input);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_0 = ___serializer0;
		PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* L_1 = __this->___input_1;
		NullCheck(L_0);
		MessageSerializer_Write_m613055761C27F6318B64533D2DA22356BEB98317(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String RosMessageTypes.UnityRoboticsDemo.PositionServiceRequest::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PositionServiceRequest_ToString_m44413CE2D7F29D1115B9AB3E587A3B117701B44D (PositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA43AD4715FB1E6D2DC4F3DC8B461D5ED25FD2D45);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "PositionServiceRequest: " +
		// "\ninput: " + input.ToString();
		PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* L_0 = __this->___input_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralA43AD4715FB1E6D2DC4F3DC8B461D5ED25FD2D45, L_1, NULL);
		return L_2;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.PositionServiceRequest::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionServiceRequest_Register_mAE75EFDB2A3B900E39ACA2DEFCC89FF2E17BD48B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t61BFBFD6FA3985F5FDE6690A62974114FDCDD333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_Register_TisPositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249_mCE0A7CB460C6CAE778B9BDD77D576182575C0CAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionServiceRequest_Deserialize_m284EBE53A162C6F4BEF6DE03A02F2785ECC6A966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04932242F5F6C26C51C9FF90ED8D542D2C1A47DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MessageRegistry.Register(k_RosMessageName, Deserialize);
		Func_2_t61BFBFD6FA3985F5FDE6690A62974114FDCDD333* L_0 = (Func_2_t61BFBFD6FA3985F5FDE6690A62974114FDCDD333*)il2cpp_codegen_object_new(Func_2_t61BFBFD6FA3985F5FDE6690A62974114FDCDD333_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_2__ctor_m1628826EA47CAC4B0512253F3F51B5CD16037CD4(L_0, NULL, (intptr_t)((void*)PositionServiceRequest_Deserialize_m284EBE53A162C6F4BEF6DE03A02F2785ECC6A966_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		MessageRegistry_Register_TisPositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249_mCE0A7CB460C6CAE778B9BDD77D576182575C0CAD(_stringLiteral04932242F5F6C26C51C9FF90ED8D542D2C1A47DE, L_0, 0, MessageRegistry_Register_TisPositionServiceRequest_tCCC08A4BE8C6E3438A3AEEADBE95EE0305C2C249_mCE0A7CB460C6CAE778B9BDD77D576182575C0CAD_RuntimeMethod_var);
		// }
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
// System.String RosMessageTypes.UnityRoboticsDemo.PositionServiceResponse::get_RosMessageName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PositionServiceResponse_get_RosMessageName_mDF826F3F5687CF31839A7DA388AC636C60F91792 (PositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04932242F5F6C26C51C9FF90ED8D542D2C1A47DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string RosMessageName => k_RosMessageName;
		return _stringLiteral04932242F5F6C26C51C9FF90ED8D542D2C1A47DE;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.PositionServiceResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionServiceResponse__ctor_m16BDBC48080386597AACABB03F24C24C66B08092 (PositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PositionServiceResponse()
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.output = new PosRotMsg();
		PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* L_0 = (PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6*)il2cpp_codegen_object_new(PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PosRotMsg__ctor_m53342C953F46717578C632F49D4092BB1AB855D0(L_0, NULL);
		__this->___output_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___output_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.PositionServiceResponse::.ctor(RosMessageTypes.UnityRoboticsDemo.PosRotMsg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionServiceResponse__ctor_m6D80F997FA88230DED3DEF8A4191EAEEA7C4E932 (PositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F* __this, PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* ___output0, const RuntimeMethod* method) 
{
	{
		// public PositionServiceResponse(PosRotMsg output)
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.output = output;
		PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* L_0 = ___output0;
		__this->___output_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___output_1), (void*)L_0);
		// }
		return;
	}
}
// RosMessageTypes.UnityRoboticsDemo.PositionServiceResponse RosMessageTypes.UnityRoboticsDemo.PositionServiceResponse::Deserialize(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F* PositionServiceResponse_Deserialize_m6C97780E15E56BDF07478F585F1446463D05FBA0 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static PositionServiceResponse Deserialize(MessageDeserializer deserializer) => new PositionServiceResponse(deserializer);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_0 = ___deserializer0;
		PositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F* L_1 = (PositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F*)il2cpp_codegen_object_new(PositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PositionServiceResponse__ctor_m480BD8CDC6092E7D995624334E547A22AC818059(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.PositionServiceResponse::.ctor(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionServiceResponse__ctor_m480BD8CDC6092E7D995624334E547A22AC818059 (PositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F* __this, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) 
{
	{
		// private PositionServiceResponse(MessageDeserializer deserializer)
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.output = PosRotMsg.Deserialize(deserializer);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_0 = ___deserializer0;
		PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* L_1;
		L_1 = PosRotMsg_Deserialize_m9A70A37AE6697C991201D947CE36D6453E33AE46(L_0, NULL);
		__this->___output_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___output_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.PositionServiceResponse::SerializeTo(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionServiceResponse_SerializeTo_m7ED00B11DEED48A9010B9FE90378547CC27BACCB (PositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F* __this, MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* ___serializer0, const RuntimeMethod* method) 
{
	{
		// serializer.Write(this.output);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_0 = ___serializer0;
		PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* L_1 = __this->___output_1;
		NullCheck(L_0);
		MessageSerializer_Write_m613055761C27F6318B64533D2DA22356BEB98317(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String RosMessageTypes.UnityRoboticsDemo.PositionServiceResponse::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PositionServiceResponse_ToString_mFB2D004FD497B11D2B5D14DB9FB5508D424EB171 (PositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC584F9BAF4296D3089659932F0F3BFAC411C645D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "PositionServiceResponse: " +
		// "\noutput: " + output.ToString();
		PosRotMsg_tA5683BC766C34E85347DD9D4996BF5D877B855F6* L_0 = __this->___output_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC584F9BAF4296D3089659932F0F3BFAC411C645D, L_1, NULL);
		return L_2;
	}
}
// System.Void RosMessageTypes.UnityRoboticsDemo.PositionServiceResponse::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionServiceResponse_Register_m40AFA1A7A136F409D1FF742B70EB96F4B6E7C547 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t2E8127890CD2554569E06D23C316FAB42D7D71E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_Register_TisPositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F_mC574A5D9F05283E94D13D1929097ED16497FF523_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionServiceResponse_Deserialize_m6C97780E15E56BDF07478F585F1446463D05FBA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04932242F5F6C26C51C9FF90ED8D542D2C1A47DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MessageRegistry.Register(k_RosMessageName, Deserialize, MessageSubtopic.Response);
		Func_2_t2E8127890CD2554569E06D23C316FAB42D7D71E4* L_0 = (Func_2_t2E8127890CD2554569E06D23C316FAB42D7D71E4*)il2cpp_codegen_object_new(Func_2_t2E8127890CD2554569E06D23C316FAB42D7D71E4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_2__ctor_mC4B5587B2B3C2BC191525DD1874EF3372B74FD48(L_0, NULL, (intptr_t)((void*)PositionServiceResponse_Deserialize_m6C97780E15E56BDF07478F585F1446463D05FBA0_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		MessageRegistry_Register_TisPositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F_mC574A5D9F05283E94D13D1929097ED16497FF523(_stringLiteral04932242F5F6C26C51C9FF90ED8D542D2C1A47DE, L_0, 1, MessageRegistry_Register_TisPositionServiceResponse_tF7DD51F83FE8D63786E664392B0B18553F17A40F_mC574A5D9F05283E94D13D1929097ED16497FF523_RuntimeMethod_var);
		// }
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
// System.String RosMessageTypes.Mhy16.LabelPCLMsg::get_RosMessageName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LabelPCLMsg_get_RosMessageName_mFFCE75000F555E818B0BC1AEFE1DA58A3BCA9518 (LabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4485C19330DA9833385DF7312A1E6A09DB34F3C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string RosMessageName => k_RosMessageName;
		return _stringLiteral4485C19330DA9833385DF7312A1E6A09DB34F3C3;
	}
}
// System.Void RosMessageTypes.Mhy16.LabelPCLMsg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LabelPCLMsg__ctor_m2FBA40B47ACDD8659A874DF6BDC1157E1D56C93B (LabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointCloud2Msg_tE3DF4D4C7466D88C9936CF9A5DA33F09D7CA204E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LabelPCLMsg()
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.name = "";
		__this->___name_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// this.point_cloud = new Sensor.PointCloud2Msg();
		PointCloud2Msg_tE3DF4D4C7466D88C9936CF9A5DA33F09D7CA204E* L_0 = (PointCloud2Msg_tE3DF4D4C7466D88C9936CF9A5DA33F09D7CA204E*)il2cpp_codegen_object_new(PointCloud2Msg_tE3DF4D4C7466D88C9936CF9A5DA33F09D7CA204E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PointCloud2Msg__ctor_mD26B0F3FE5A1033BCD1E8DF17FC5CF3D9F8E5AF5(L_0, NULL);
		__this->___point_cloud_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___point_cloud_2), (void*)L_0);
		// }
		return;
	}
}
// System.Void RosMessageTypes.Mhy16.LabelPCLMsg::.ctor(System.String,RosMessageTypes.Sensor.PointCloud2Msg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LabelPCLMsg__ctor_m8F41F048608129BD8541154749207E6B5837915D (LabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F* __this, String_t* ___name0, PointCloud2Msg_tE3DF4D4C7466D88C9936CF9A5DA33F09D7CA204E* ___point_cloud1, const RuntimeMethod* method) 
{
	{
		// public LabelPCLMsg(string name, Sensor.PointCloud2Msg point_cloud)
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		__this->___name_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_1), (void*)L_0);
		// this.point_cloud = point_cloud;
		PointCloud2Msg_tE3DF4D4C7466D88C9936CF9A5DA33F09D7CA204E* L_1 = ___point_cloud1;
		__this->___point_cloud_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___point_cloud_2), (void*)L_1);
		// }
		return;
	}
}
// RosMessageTypes.Mhy16.LabelPCLMsg RosMessageTypes.Mhy16.LabelPCLMsg::Deserialize(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F* LabelPCLMsg_Deserialize_m3CF14307D3FA6BF43AC24B2EB2B4474662ACB884 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static LabelPCLMsg Deserialize(MessageDeserializer deserializer) => new LabelPCLMsg(deserializer);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_0 = ___deserializer0;
		LabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F* L_1 = (LabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F*)il2cpp_codegen_object_new(LabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LabelPCLMsg__ctor_m5EF6F0A17D9DD8143C28F1CB88234EE79A61AA39(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void RosMessageTypes.Mhy16.LabelPCLMsg::.ctor(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LabelPCLMsg__ctor_m5EF6F0A17D9DD8143C28F1CB88234EE79A61AA39 (LabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F* __this, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) 
{
	{
		// private LabelPCLMsg(MessageDeserializer deserializer)
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// deserializer.Read(out this.name);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_0 = ___deserializer0;
		String_t** L_1 = (&__this->___name_1);
		NullCheck(L_0);
		MessageDeserializer_Read_m82B22DA76582918DC2FF9771977798BDBF5D49D7(L_0, L_1, NULL);
		// this.point_cloud = Sensor.PointCloud2Msg.Deserialize(deserializer);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_2 = ___deserializer0;
		PointCloud2Msg_tE3DF4D4C7466D88C9936CF9A5DA33F09D7CA204E* L_3;
		L_3 = PointCloud2Msg_Deserialize_m29EF41F4F0189A76F0E76A719AF11134E6EF0DA1(L_2, NULL);
		__this->___point_cloud_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___point_cloud_2), (void*)L_3);
		// }
		return;
	}
}
// System.Void RosMessageTypes.Mhy16.LabelPCLMsg::SerializeTo(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LabelPCLMsg_SerializeTo_m0D6D9FE484284AC21939AF74FD0FA4F5288A2611 (LabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F* __this, MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* ___serializer0, const RuntimeMethod* method) 
{
	{
		// serializer.Write(this.name);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_0 = ___serializer0;
		String_t* L_1 = __this->___name_1;
		NullCheck(L_0);
		MessageSerializer_Write_m312F6ADF2C641C9B93F4E1FC7D416F60034C9B1C(L_0, L_1, NULL);
		// serializer.Write(this.point_cloud);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_2 = ___serializer0;
		PointCloud2Msg_tE3DF4D4C7466D88C9936CF9A5DA33F09D7CA204E* L_3 = __this->___point_cloud_2;
		NullCheck(L_2);
		MessageSerializer_Write_m613055761C27F6318B64533D2DA22356BEB98317(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.String RosMessageTypes.Mhy16.LabelPCLMsg::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LabelPCLMsg_ToString_mA9744A7C32D8377E6F818F22D21C3315CF55476B (LabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ED20F7629F7FFBE9EF937A0DFB78528FB8C0396);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1FADB2826DB5DDD6DFE9006AF00F6985C838578);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "LabelPCLMsg: " +
		// "\nname: " + name.ToString() +
		// "\npoint_cloud: " + point_cloud.ToString();
		String_t* L_0 = __this->___name_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		PointCloud2Msg_tE3DF4D4C7466D88C9936CF9A5DA33F09D7CA204E* L_2 = __this->___point_cloud_2;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralD1FADB2826DB5DDD6DFE9006AF00F6985C838578, L_1, _stringLiteral8ED20F7629F7FFBE9EF937A0DFB78528FB8C0396, L_3, NULL);
		return L_4;
	}
}
// System.Void RosMessageTypes.Mhy16.LabelPCLMsg::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LabelPCLMsg_Register_m6466A054ECD25E3A16BD62EAB4D80A11CA1A5FE0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF97AD7AB25E55D162ABE644CC94BD6AEB26884EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LabelPCLMsg_Deserialize_m3CF14307D3FA6BF43AC24B2EB2B4474662ACB884_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_Register_TisLabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F_mFE03A397B21794990D4C86FAF3B3175E79025914_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4485C19330DA9833385DF7312A1E6A09DB34F3C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MessageRegistry.Register(k_RosMessageName, Deserialize);
		Func_2_tF97AD7AB25E55D162ABE644CC94BD6AEB26884EA* L_0 = (Func_2_tF97AD7AB25E55D162ABE644CC94BD6AEB26884EA*)il2cpp_codegen_object_new(Func_2_tF97AD7AB25E55D162ABE644CC94BD6AEB26884EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_2__ctor_m916FF960EC68E168206772530F77987680129328(L_0, NULL, (intptr_t)((void*)LabelPCLMsg_Deserialize_m3CF14307D3FA6BF43AC24B2EB2B4474662ACB884_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		MessageRegistry_Register_TisLabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F_mFE03A397B21794990D4C86FAF3B3175E79025914(_stringLiteral4485C19330DA9833385DF7312A1E6A09DB34F3C3, L_0, 0, MessageRegistry_Register_TisLabelPCLMsg_tB9E14F017A38EF940DA4AA23992E79F5CF8B294F_mFE03A397B21794990D4C86FAF3B3175E79025914_RuntimeMethod_var);
		// }
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
// System.String RosMessageTypes.CustomInterfaces.TransformationMsg::get_RosMessageName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransformationMsg_get_RosMessageName_mF1951806A96C1F62F25F0EA75ACFE8530060B109 (TransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBB063A08B8B8BDBEB543AC2D5F928ACA7DC1315);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string RosMessageName => k_RosMessageName;
		return _stringLiteralFBB063A08B8B8BDBEB543AC2D5F928ACA7DC1315;
	}
}
// System.Void RosMessageTypes.CustomInterfaces.TransformationMsg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformationMsg__ctor_mBF24452435F1C118F2670266D206BBFD510CD7F2 (TransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwistMsg_tCB222F66966F92E11D7B0AEBFF7312A02195D103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TransformationMsg()
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.idto = 0;
		__this->___idto_1 = 0;
		// this.idfrom = 0;
		__this->___idfrom_2 = 0;
		// this.tf = new Geometry.TwistMsg();
		TwistMsg_tCB222F66966F92E11D7B0AEBFF7312A02195D103* L_0 = (TwistMsg_tCB222F66966F92E11D7B0AEBFF7312A02195D103*)il2cpp_codegen_object_new(TwistMsg_tCB222F66966F92E11D7B0AEBFF7312A02195D103_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TwistMsg__ctor_mD7927B2FD276F0ED868DDB1276742BA73421BA60(L_0, NULL);
		__this->___tf_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tf_3), (void*)L_0);
		// }
		return;
	}
}
// System.Void RosMessageTypes.CustomInterfaces.TransformationMsg::.ctor(System.Int32,System.Int32,RosMessageTypes.Geometry.TwistMsg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformationMsg__ctor_m09145FFF1CFCA952A8377A47E695D9ABB4BA981F (TransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A* __this, int32_t ___idto0, int32_t ___idfrom1, TwistMsg_tCB222F66966F92E11D7B0AEBFF7312A02195D103* ___tf2, const RuntimeMethod* method) 
{
	{
		// public TransformationMsg(int idto, int idfrom, Geometry.TwistMsg tf)
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// this.idto = idto;
		int32_t L_0 = ___idto0;
		__this->___idto_1 = L_0;
		// this.idfrom = idfrom;
		int32_t L_1 = ___idfrom1;
		__this->___idfrom_2 = L_1;
		// this.tf = tf;
		TwistMsg_tCB222F66966F92E11D7B0AEBFF7312A02195D103* L_2 = ___tf2;
		__this->___tf_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tf_3), (void*)L_2);
		// }
		return;
	}
}
// RosMessageTypes.CustomInterfaces.TransformationMsg RosMessageTypes.CustomInterfaces.TransformationMsg::Deserialize(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A* TransformationMsg_Deserialize_m24D7B51EC7A581AC367A9C61C9F171D1E91FC6B6 (MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TransformationMsg Deserialize(MessageDeserializer deserializer) => new TransformationMsg(deserializer);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_0 = ___deserializer0;
		TransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A* L_1 = (TransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A*)il2cpp_codegen_object_new(TransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TransformationMsg__ctor_m8172C739B971E4D93310796B2F97CCFAD75652F1(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void RosMessageTypes.CustomInterfaces.TransformationMsg::.ctor(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageDeserializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformationMsg__ctor_m8172C739B971E4D93310796B2F97CCFAD75652F1 (TransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A* __this, MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* ___deserializer0, const RuntimeMethod* method) 
{
	{
		// private TransformationMsg(MessageDeserializer deserializer)
		Message__ctor_m1F0994419C135CBD7D85645F56B6D82C73066676(__this, NULL);
		// deserializer.Read(out this.idto);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_0 = ___deserializer0;
		int32_t* L_1 = (&__this->___idto_1);
		NullCheck(L_0);
		MessageDeserializer_Read_m7BB886F522350724AA8560D7349B800804FCD0B2(L_0, L_1, NULL);
		// deserializer.Read(out this.idfrom);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_2 = ___deserializer0;
		int32_t* L_3 = (&__this->___idfrom_2);
		NullCheck(L_2);
		MessageDeserializer_Read_m7BB886F522350724AA8560D7349B800804FCD0B2(L_2, L_3, NULL);
		// this.tf = Geometry.TwistMsg.Deserialize(deserializer);
		MessageDeserializer_tB7A06A4B097DD01A2E35E9AFEB085164A41603FF* L_4 = ___deserializer0;
		TwistMsg_tCB222F66966F92E11D7B0AEBFF7312A02195D103* L_5;
		L_5 = TwistMsg_Deserialize_m7DFA2383A90817F5807154E73B6F4B51D31C23D4(L_4, NULL);
		__this->___tf_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tf_3), (void*)L_5);
		// }
		return;
	}
}
// System.Void RosMessageTypes.CustomInterfaces.TransformationMsg::SerializeTo(Unity.Robotics.ROSTCPConnector.MessageGeneration.MessageSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformationMsg_SerializeTo_mF55C8226EC768751A6D6AC4AEC7854A42C4A6EFB (TransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A* __this, MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* ___serializer0, const RuntimeMethod* method) 
{
	{
		// serializer.Write(this.idto);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_0 = ___serializer0;
		int32_t L_1 = __this->___idto_1;
		NullCheck(L_0);
		MessageSerializer_Write_mCE95E66B6BFA2E0382A1C65748319D7110B52C6A(L_0, L_1, NULL);
		// serializer.Write(this.idfrom);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_2 = ___serializer0;
		int32_t L_3 = __this->___idfrom_2;
		NullCheck(L_2);
		MessageSerializer_Write_mCE95E66B6BFA2E0382A1C65748319D7110B52C6A(L_2, L_3, NULL);
		// serializer.Write(this.tf);
		MessageSerializer_tF85A77B0C9BAB7548B9EC879E5E651CEACA95AF7* L_4 = ___serializer0;
		TwistMsg_tCB222F66966F92E11D7B0AEBFF7312A02195D103* L_5 = __this->___tf_3;
		NullCheck(L_4);
		MessageSerializer_Write_m613055761C27F6318B64533D2DA22356BEB98317(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.String RosMessageTypes.CustomInterfaces.TransformationMsg::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransformationMsg_ToString_m254D9F150CAAF6C61F2B2AC05DEF6EC7C84C791B (TransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral005CB39EC7F0BE39424F5635B8650CECFFC5EC66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE235E1B474A5B997E28DDFFDAF0DB7D6961C519);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1F79343D4AE1A442B1743989D106E09F1B10180);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "TransformationMsg: " +
		// "\nidto: " + idto.ToString() +
		// "\nidfrom: " + idfrom.ToString() +
		// "\ntf: " + tf.ToString();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralF1F79343D4AE1A442B1743989D106E09F1B10180);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF1F79343D4AE1A442B1743989D106E09F1B10180);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t* L_3 = (&__this->___idto_1);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralAE235E1B474A5B997E28DDFFDAF0DB7D6961C519);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralAE235E1B474A5B997E28DDFFDAF0DB7D6961C519);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int32_t* L_7 = (&__this->___idfrom_2);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral005CB39EC7F0BE39424F5635B8650CECFFC5EC66);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral005CB39EC7F0BE39424F5635B8650CECFFC5EC66);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		TwistMsg_tCB222F66966F92E11D7B0AEBFF7312A02195D103* L_11 = __this->___tf_3;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		String_t* L_13;
		L_13 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_10, NULL);
		return L_13;
	}
}
// System.Void RosMessageTypes.CustomInterfaces.TransformationMsg::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformationMsg_Register_m5CC017EFFC9D5BF1992C53976E37EE3E12E173D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7A6883C6BFCBE3E954623EC86AD6CA5FBB1EAD1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_Register_TisTransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A_m1AD7DC1080A3B6C41AC4E33E724ADD906BCF6213_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformationMsg_Deserialize_m24D7B51EC7A581AC367A9C61C9F171D1E91FC6B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBB063A08B8B8BDBEB543AC2D5F928ACA7DC1315);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MessageRegistry.Register(k_RosMessageName, Deserialize);
		Func_2_t7A6883C6BFCBE3E954623EC86AD6CA5FBB1EAD1B* L_0 = (Func_2_t7A6883C6BFCBE3E954623EC86AD6CA5FBB1EAD1B*)il2cpp_codegen_object_new(Func_2_t7A6883C6BFCBE3E954623EC86AD6CA5FBB1EAD1B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_2__ctor_mEFBEFEDC7DDCC6D4235795A1944493AAFF0B149C(L_0, NULL, (intptr_t)((void*)TransformationMsg_Deserialize_m24D7B51EC7A581AC367A9C61C9F171D1E91FC6B6_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(MessageRegistry_tC801955B80E2C9916BA4451873A8F5774BEA86EC_il2cpp_TypeInfo_var);
		MessageRegistry_Register_TisTransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A_m1AD7DC1080A3B6C41AC4E33E724ADD906BCF6213(_stringLiteralFBB063A08B8B8BDBEB543AC2D5F928ACA7DC1315, L_0, 0, MessageRegistry_Register_TisTransformationMsg_tBB6CF5B362A27B042817DD5BBA174A0922572D1A_m1AD7DC1080A3B6C41AC4E33E724ADD906BCF6213_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityInteractionMapping_get_Description_mB4C6619EF2F1E6AEE57C98A24F2C90A0FBCACD50_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// public string Description => description;
		String_t* L_0 = __this->___description_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_AxisType_mCD3EA297AACF47BE8DFCCDCEBB0ABD2F5933EA40_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// public AxisType AxisType => axisType;
		int32_t L_0 = __this->___axisType_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m431C40AD5149D4817FAA46DC0326A481FE348C8D_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->___inputType_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MixedRealityInteractionMapping_get_PositionData_m189D602B6846B225CBFBAB5C64699469900972E5_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// return positionData;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___positionData_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 MixedRealityInteractionMapping_get_RotationData_m37593A681A7F3DF462819D9576EF74F8FE7DD43D_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// return rotationData;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___rotationData_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m69F4D6E88FF5DF204C3C38426A2BCD74AB7060CB_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// return boolData;
		bool L_0 = __this->___boolData_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInteractionMapping_get_FloatData_m427535AC6E511D46014CADA75E2410FA4CE5C903_inline (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) 
{
	{
		// return floatData;
		float L_0 = __this->___floatData_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MixedRealityPointerEventData_get_Pointer_mE5664622195651CF4C2DC3CEAAF99E3823B74E82_inline (MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* __this, const RuntimeMethod* method) 
{
	{
		// public IMixedRealityPointer Pointer { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPointerU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FocusDetails_get_Point_mED97A47BC407BF95930337DF61EE88143661B89B_inline (FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Point { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CPointU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FocusDetails_get_Normal_mE74AC45EDDA7AC6432BD7C0F27928DDF75192242_inline (FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Normal { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CNormalU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC SpeechEventData_get_Command_m55D611C557104EC236CE8D929CFBFA2D37216636_inline (SpeechEventData_t4424832821FEC4163B9CFCD3A9F457DF930A95BD* __this, const RuntimeMethod* method) 
{
	{
		// public SpeechCommands Command { get; private set; }
		SpeechCommands_t871604E2D92EE8168CBFA26F430CA2584DCF02CC L_0 = __this->___U3CCommandU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ObjectManipulator_get_OnManipulationStarted_m6D34E8A4815F7BAF59B40857C3D991CA684E70C5_inline (ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* __this, const RuntimeMethod* method) 
{
	{
		// get => onManipulationStarted;
		ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* L_0 = __this->___onManipulationStarted_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* ObjectManipulator_get_OnManipulationEnded_m342FD627CB115449ED8BE8C1A36FABD9C875E630_inline (ObjectManipulator_t469AAA637BD8E38C55F7D7AF8166EFBB3A01FD38* __this, const RuntimeMethod* method) 
{
	{
		// get => onManipulationEnded;
		ManipulationEvent_t5B027B2EEEDBEF0811147A3C48A7960B05F9B72F* L_0 = __this->___onManipulationEnded_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LinksConfiguration_tED831CC1625B1AF6E76810B5B5AF40018342DBB9* BoundsControl_get_LinksConfig_mE38043D5C379F5B33BFA563AFCBC863F2433AABD_inline (BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* __this, const RuntimeMethod* method) 
{
	{
		// get => linksConfiguration;
		LinksConfiguration_tED831CC1625B1AF6E76810B5B5AF40018342DBB9* L_0 = __this->___linksConfiguration_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScaleHandlesConfiguration_t79002721D09E9BAE57FCF4ACCB206EB0C59A57A8* BoundsControl_get_ScaleHandlesConfig_mF4E6B27A29516D14D9FE07697CC281723402B622_inline (BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* __this, const RuntimeMethod* method) 
{
	{
		// get => scaleHandlesConfiguration;
		ScaleHandlesConfiguration_t79002721D09E9BAE57FCF4ACCB206EB0C59A57A8* L_0 = __this->___scaleHandlesConfiguration_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RotationHandlesConfiguration_t01D98D5153FF07876782F838682A59A9BD381A2C* BoundsControl_get_RotationHandlesConfig_m14068630E6743C226CE4C1377DB2EBFC024CB64B_inline (BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* __this, const RuntimeMethod* method) 
{
	{
		// get => rotationHandlesConfiguration;
		RotationHandlesConfiguration_t01D98D5153FF07876782F838682A59A9BD381A2C* L_0 = __this->___rotationHandlesConfiguration_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoxDisplayConfiguration_t83FA4561B3E0ADDC45AC2516DD78775F5E80849A* BoundsControl_get_BoxDisplayConfig_m9BB482C42F5C33EFEFDEDEFA5ED471ABF14C4FB8_inline (BoundsControl_tDDFE1EC00BD631C0FE186A05FC3D9748083E7547* __this, const RuntimeMethod* method) 
{
	{
		// get => boxDisplayConfiguration;
		BoxDisplayConfiguration_t83FA4561B3E0ADDC45AC2516DD78775F5E80849A* L_0 = __this->___boxDisplayConfiguration_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridObjectCollection_get_Anchor_mB6FA34EA4A07AFBF05A654C44B418EA451EE2B47_inline (GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* __this, const RuntimeMethod* method) 
{
	{
		// get { return anchor; }
		int32_t L_0 = __this->___anchor_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridObjectCollection_set_Anchor_m9DF757AF4A59A3E60B42A2C1ABF0331B878973CB_inline (GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { anchor = value; }
		int32_t L_0 = ___value0;
		__this->___anchor_11 = L_0;
		// set { anchor = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridObjectCollection_set_Distance_m33956DDBFE29F4652BD648251B4B115AAB007F4C_inline (GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { distance = value; }
		float L_0 = ___value0;
		__this->___distance_17 = L_0;
		// set { distance = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridObjectCollection_set_CellWidth_m460BA037B49D4462ACF2173D95619E0F1B38EB0D_inline (GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { cellWidth = value; }
		float L_0 = ___value0;
		__this->___cellWidth_21 = L_0;
		// set { cellWidth = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridObjectCollection_set_CellHeight_mE38DE154245EE05E4D4F0AFF816BA54337C0746F_inline (GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { cellHeight = value; }
		float L_0 = ___value0;
		__this->___cellHeight_22 = L_0;
		// set { cellHeight = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GridObjectCollection_set_Layout_m221254CF50167FECC66F496225CA5D15CECF8F71_inline (GridObjectCollection_t4305434DFFC4F42300B547540DE4C36DA2DE4B2A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { layout = value; }
		int32_t L_0 = ___value0;
		__this->___layout_10 = L_0;
		// set { layout = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
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
		float L_2 = ___value0;
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
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SliderEventData_get_NewValue_m5E0B8480E8D0AEAEBCB2AC29ADCFAC8C6F14401F_inline (SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* __this, const RuntimeMethod* method) 
{
	{
		// public float NewValue { get; private set; }
		float L_0 = __this->___U3CNewValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item1_mEFA23BD2BE43E299B2198BC2BBD0AB03865E2BF7_gshared_inline (Tuple_2_t1E323C87394A4DF45775FDAF9CB8B2FB875F6324* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___m_Item1_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Tuple_2_get_Item2_m15F076302750FA6F7F3AB37946FA10AA6E87B456_gshared_inline (Tuple_2_t1E323C87394A4DF45775FDAF9CB8B2FB875F6324* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = (uint8_t)__this->___m_Item2_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
