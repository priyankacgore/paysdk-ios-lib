#ifndef TARGET_OS_SIMULATOR
#include <TargetConditionals.h>
#endif
#if TARGET_OS_SIMULATOR
// Generated by Apple Swift version 5.1.3 effective-4.1.50 (swiftlang-1100.0.282.1 clang-1100.0.33.15)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AP_PaySDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

typedef SWIFT_ENUM(NSInteger, ApplePayButtonStyle, open) {
  ApplePayButtonStyleWhite = 0,
  ApplePayButtonStyleWhiteOutline = 1,
  ApplePayButtonStyleBlack = 2,
};

typedef SWIFT_ENUM(NSInteger, ApplePayButtonType, open) {
  ApplePayButtonTypePlain = 0,
  ApplePayButtonTypeBuy = 1,
  ApplePayButtonTypeSetUp = 2,
  ApplePayButtonTypeInStore = 3,
  ApplePayButtonTypeDonate = 4,
  ApplePayButtonTypeCheckout = 5,
  ApplePayButtonTypeBook = 6,
  ApplePayButtonTypeSubscribe = 7,
};


SWIFT_CLASS("_TtC9AP_PaySDK4Card")
@interface Card : NSObject
/// Instantiate the instance using the passed dictionary values to set the properties values
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("CardDetails")
@interface CardDetails : NSObject
- (nonnull instancetype)initWithCardHolderName:(NSString * _Nonnull)cardHolderName cardNo:(NSString * _Nonnull)cardNo expMonth:(NSString * _Nonnull)expMonth expYear:(NSString * _Nonnull)expYear securityCode:(NSString * _Nonnull)securityCode OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, CurrencyCode, open) {
  CurrencyCodeHKD = 0,
  CurrencyCodeUSD = 1,
  CurrencyCodeSGD = 2,
  CurrencyCodeRMB = 3,
  CurrencyCodeCNY = 4,
  CurrencyCodeYEN = 5,
  CurrencyCodeJPY = 6,
  CurrencyCodeTWD = 7,
  CurrencyCodeAUD = 8,
  CurrencyCodeEUR = 9,
  CurrencyCodeGBP = 10,
  CurrencyCodeCAD = 11,
  CurrencyCodeMOP = 12,
  CurrencyCodePHP = 13,
  CurrencyCodeTHB = 14,
  CurrencyCodeIDR = 15,
  CurrencyCodeBND = 16,
  CurrencyCodeMYR = 17,
  CurrencyCodeBRL = 18,
  CurrencyCodeINR = 19,
  CurrencyCodeTRY = 20,
  CurrencyCodeZAR = 21,
  CurrencyCodeVND = 22,
  CurrencyCodeLKR = 23,
  CurrencyCodeKWD = 24,
  CurrencyCodeNZD = 25,
};



typedef SWIFT_ENUM(NSInteger, EnvType, open) {
  EnvTypeSANDBOX = 0,
  EnvTypePRODUCTION = 1,
};

typedef SWIFT_ENUM(NSInteger, Language, open) {
  LanguageENGLISH = 0,
  LanguageCHINESE_TRADITIONAL = 1,
  LanguageCHINESE_SIMPLIFIED = 2,
  LanguageJAPANESE = 3,
  LanguageTHAI = 4,
  LanguageFRENCH = 5,
  LanguageGERMAN = 6,
  LanguageRUSSIAN = 7,
  LanguageSPANISH = 8,
  LanguageVIETNAMESE = 9,
};


SWIFT_CLASS("_TtC9AP_PaySDK7Methods")
@interface Methods : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end





typedef SWIFT_ENUM(NSInteger, PayChannel, open) {
  PayChannelWEBVIEW = 0,
  PayChannelDIRECT = 1,
  PayChannelEASYPAYMENTFORM = 2,
  PayChannelNONE = 3,
};

enum PayGate : NSInteger;
enum payType : NSInteger;

SWIFT_CLASS_NAMED("PayData")
@interface PayData : NSObject
@property (nonatomic, strong) CardDetails * _Nullable cardDetails;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (nonnull instancetype)initWithChannelType:(enum PayChannel)channelType envType:(enum EnvType)envType amount:(NSString * _Nonnull)amount payGate:(enum PayGate)payGate currCode:(enum CurrencyCode)currCode payType:(enum payType)payType orderRef:(NSString * _Nonnull)orderRef payMethod:(NSString * _Nonnull)payMethod lang:(enum Language)lang merchantId:(NSString * _Nonnull)merchantId remark:(NSString * _Nonnull)remark payRef:(NSString * _Nonnull)payRef resultpage:(NSString * _Nonnull)resultpage extraData:(NSDictionary<NSString *, id> * _Nullable)extraData OBJC_DESIGNATED_INITIALIZER;
@end



typedef SWIFT_ENUM(NSInteger, PayGate, open) {
  PayGatePAYDOLLAR = 0,
  PayGatePESOPAY = 1,
  PayGateSIAMPAY = 2,
};


SWIFT_CLASS("_TtC9AP_PaySDK9PayResult")
@interface PayResult : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified amount;
@property (nonatomic, copy) NSString * _Null_unspecified successCode;
@property (nonatomic, copy) NSString * _Nullable maskedCardNo;
@property (nonatomic, copy) NSString * _Null_unspecified authId;
@property (nonatomic, copy) NSString * _Null_unspecified cardHolder;
@property (nonatomic, copy) NSString * _Null_unspecified currencyCode;
@property (nonatomic, copy) NSString * _Null_unspecified errMsg;
@property (nonatomic, copy) NSString * _Null_unspecified ord;
@property (nonatomic, copy) NSString * _Null_unspecified payRef;
@property (nonatomic, copy) NSString * _Null_unspecified prc;
@property (nonatomic, copy) NSString * _Null_unspecified ref;
@property (nonatomic, copy) NSString * _Null_unspecified src;
@property (nonatomic, copy) NSString * _Null_unspecified transactionTime;
@property (nonatomic, copy) NSString * _Null_unspecified descriptionStr;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@protocol PaySDKDelegate;

SWIFT_CLASS_NAMED("PaySDK") SWIFT_AVAILABILITY(ios,introduced=10.0)
@interface PaySDK : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) PaySDK * _Nonnull shared;)
+ (PaySDK * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)setShared:(PaySDK * _Nonnull)value;
@property (nonatomic, strong) id <PaySDKDelegate> _Nullable delegate;
@property (nonatomic, strong) PayData * _Null_unspecified paymentDetails;
@property (nonatomic) BOOL isBioMetricRequired;
@property (nonatomic) BOOL useSDKProgressScreen;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (void)queryWithAction:(NSString * _Nonnull)action;
- (void)process;
- (void)invalidateToken;
- (void)processOrderWithUrl:(NSURL * _Nonnull)url;
@end

@class TransQueryResults;
@class PaymentOptionsDetail;
@class UIImage;
@class UIViewController;

SWIFT_PROTOCOL("_TtP9AP_PaySDK14PaySDKDelegate_")
@protocol PaySDKDelegate
- (void)paymentResultWithResult:(PayResult * _Nonnull)result;
- (void)transQueryResultsWithResult:(TransQueryResults * _Nonnull)result;
- (void)payMethodOptionsWithMethod:(PaymentOptionsDetail * _Nonnull)method;
@optional
- (void)showProgress;
- (void)hideProgress;
- (UIImage * _Nullable)setMerchantInfoImg SWIFT_WARN_UNUSED_RESULT;
- (UIViewController * _Nullable)setMerchantInfoScreen SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)setMerchantInfo SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9AP_PaySDK20PaymentOptionsDetail")
@interface PaymentOptionsDetail : NSObject
@property (nonatomic, strong) Methods * _Null_unspecified methods;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AP_PaySDK16TransQueryResult")
@interface TransQueryResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AP_PaySDK17TransQueryResults")
@interface TransQueryResults : NSObject
@property (nonatomic, copy) NSArray<TransQueryResult *> * _Nullable detail;
@property (nonatomic, copy) NSString * _Nullable resultCode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end



@class UIView;

@interface UIButton (SWIFT_EXTENSION(AP_PaySDK))
- (void)setApplePayButtonWithBtnType:(enum ApplePayButtonType)btnType btnStyle:(enum ApplePayButtonStyle)btnStyle inView:(UIView * _Nonnull)inView;
@end






@interface UIColor (SWIFT_EXTENSION(AP_PaySDK))
- (nullable instancetype)initWithHex:(NSString * _Nonnull)hex;
@end










@interface UITextField (SWIFT_EXTENSION(AP_PaySDK))
- (BOOL)canPerformAction:(SEL _Nonnull)action withSender:(id _Nullable)sender SWIFT_WARN_UNUSED_RESULT;
@end



















typedef SWIFT_ENUM(NSInteger, payMethod, open) {
  payMethodALL = 0,
  payMethodCREDIT_CARD = 1,
  payMethodVISA = 2,
  payMethodMASTER_CARD = 3,
  payMethodJAPAN_CARD = 4,
  payMethodAMERICAN_CARD = 5,
  payMethodDINERS = 6,
  payMethodALIPAYHKAPP = 7,
  payMethodALIPAYCNAPP = 8,
  payMethodALIPAYAPP = 9,
  payMethodAPPLEPAY = 10,
  payMethodWECHATAPP = 11,
  payMethodTHREEDS2 = 12,
  payMethodCIMBCLICKS = 13,
};

typedef SWIFT_ENUM(NSInteger, payType, open) {
  payTypeNORMAL_PAYMENT = 0,
  payTypeHOLD_PAYMENT = 1,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#else
// Generated by Apple Swift version 5.1.3 effective-4.1.50 (swiftlang-1100.0.282.1 clang-1100.0.33.15)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AP_PaySDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

typedef SWIFT_ENUM(NSInteger, ApplePayButtonStyle, open) {
  ApplePayButtonStyleWhite = 0,
  ApplePayButtonStyleWhiteOutline = 1,
  ApplePayButtonStyleBlack = 2,
};

typedef SWIFT_ENUM(NSInteger, ApplePayButtonType, open) {
  ApplePayButtonTypePlain = 0,
  ApplePayButtonTypeBuy = 1,
  ApplePayButtonTypeSetUp = 2,
  ApplePayButtonTypeInStore = 3,
  ApplePayButtonTypeDonate = 4,
  ApplePayButtonTypeCheckout = 5,
  ApplePayButtonTypeBook = 6,
  ApplePayButtonTypeSubscribe = 7,
};


SWIFT_CLASS("_TtC9AP_PaySDK4Card")
@interface Card : NSObject
/// Instantiate the instance using the passed dictionary values to set the properties values
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("CardDetails")
@interface CardDetails : NSObject
- (nonnull instancetype)initWithCardHolderName:(NSString * _Nonnull)cardHolderName cardNo:(NSString * _Nonnull)cardNo expMonth:(NSString * _Nonnull)expMonth expYear:(NSString * _Nonnull)expYear securityCode:(NSString * _Nonnull)securityCode OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, CurrencyCode, open) {
  CurrencyCodeHKD = 0,
  CurrencyCodeUSD = 1,
  CurrencyCodeSGD = 2,
  CurrencyCodeRMB = 3,
  CurrencyCodeCNY = 4,
  CurrencyCodeYEN = 5,
  CurrencyCodeJPY = 6,
  CurrencyCodeTWD = 7,
  CurrencyCodeAUD = 8,
  CurrencyCodeEUR = 9,
  CurrencyCodeGBP = 10,
  CurrencyCodeCAD = 11,
  CurrencyCodeMOP = 12,
  CurrencyCodePHP = 13,
  CurrencyCodeTHB = 14,
  CurrencyCodeIDR = 15,
  CurrencyCodeBND = 16,
  CurrencyCodeMYR = 17,
  CurrencyCodeBRL = 18,
  CurrencyCodeINR = 19,
  CurrencyCodeTRY = 20,
  CurrencyCodeZAR = 21,
  CurrencyCodeVND = 22,
  CurrencyCodeLKR = 23,
  CurrencyCodeKWD = 24,
  CurrencyCodeNZD = 25,
};



typedef SWIFT_ENUM(NSInteger, EnvType, open) {
  EnvTypeSANDBOX = 0,
  EnvTypePRODUCTION = 1,
};

typedef SWIFT_ENUM(NSInteger, Language, open) {
  LanguageENGLISH = 0,
  LanguageCHINESE_TRADITIONAL = 1,
  LanguageCHINESE_SIMPLIFIED = 2,
  LanguageJAPANESE = 3,
  LanguageTHAI = 4,
  LanguageFRENCH = 5,
  LanguageGERMAN = 6,
  LanguageRUSSIAN = 7,
  LanguageSPANISH = 8,
  LanguageVIETNAMESE = 9,
};


SWIFT_CLASS("_TtC9AP_PaySDK7Methods")
@interface Methods : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end





typedef SWIFT_ENUM(NSInteger, PayChannel, open) {
  PayChannelWEBVIEW = 0,
  PayChannelDIRECT = 1,
  PayChannelEASYPAYMENTFORM = 2,
  PayChannelNONE = 3,
};

enum PayGate : NSInteger;
enum payType : NSInteger;

SWIFT_CLASS_NAMED("PayData")
@interface PayData : NSObject
@property (nonatomic, strong) CardDetails * _Nullable cardDetails;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (nonnull instancetype)initWithChannelType:(enum PayChannel)channelType envType:(enum EnvType)envType amount:(NSString * _Nonnull)amount payGate:(enum PayGate)payGate currCode:(enum CurrencyCode)currCode payType:(enum payType)payType orderRef:(NSString * _Nonnull)orderRef payMethod:(NSString * _Nonnull)payMethod lang:(enum Language)lang merchantId:(NSString * _Nonnull)merchantId remark:(NSString * _Nonnull)remark payRef:(NSString * _Nonnull)payRef resultpage:(NSString * _Nonnull)resultpage extraData:(NSDictionary<NSString *, id> * _Nullable)extraData OBJC_DESIGNATED_INITIALIZER;
@end



typedef SWIFT_ENUM(NSInteger, PayGate, open) {
  PayGatePAYDOLLAR = 0,
  PayGatePESOPAY = 1,
  PayGateSIAMPAY = 2,
};


SWIFT_CLASS("_TtC9AP_PaySDK9PayResult")
@interface PayResult : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified amount;
@property (nonatomic, copy) NSString * _Null_unspecified successCode;
@property (nonatomic, copy) NSString * _Nullable maskedCardNo;
@property (nonatomic, copy) NSString * _Null_unspecified authId;
@property (nonatomic, copy) NSString * _Null_unspecified cardHolder;
@property (nonatomic, copy) NSString * _Null_unspecified currencyCode;
@property (nonatomic, copy) NSString * _Null_unspecified errMsg;
@property (nonatomic, copy) NSString * _Null_unspecified ord;
@property (nonatomic, copy) NSString * _Null_unspecified payRef;
@property (nonatomic, copy) NSString * _Null_unspecified prc;
@property (nonatomic, copy) NSString * _Null_unspecified ref;
@property (nonatomic, copy) NSString * _Null_unspecified src;
@property (nonatomic, copy) NSString * _Null_unspecified transactionTime;
@property (nonatomic, copy) NSString * _Null_unspecified descriptionStr;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@protocol PaySDKDelegate;

SWIFT_CLASS_NAMED("PaySDK") SWIFT_AVAILABILITY(ios,introduced=10.0)
@interface PaySDK : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) PaySDK * _Nonnull shared;)
+ (PaySDK * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)setShared:(PaySDK * _Nonnull)value;
@property (nonatomic, strong) id <PaySDKDelegate> _Nullable delegate;
@property (nonatomic, strong) PayData * _Null_unspecified paymentDetails;
@property (nonatomic) BOOL isBioMetricRequired;
@property (nonatomic) BOOL useSDKProgressScreen;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (void)queryWithAction:(NSString * _Nonnull)action;
- (void)process;
- (void)invalidateToken;
- (void)processOrderWithUrl:(NSURL * _Nonnull)url;
@end

@class TransQueryResults;
@class PaymentOptionsDetail;
@class UIImage;
@class UIViewController;

SWIFT_PROTOCOL("_TtP9AP_PaySDK14PaySDKDelegate_")
@protocol PaySDKDelegate
- (void)paymentResultWithResult:(PayResult * _Nonnull)result;
- (void)transQueryResultsWithResult:(TransQueryResults * _Nonnull)result;
- (void)payMethodOptionsWithMethod:(PaymentOptionsDetail * _Nonnull)method;
@optional
- (void)showProgress;
- (void)hideProgress;
- (UIImage * _Nullable)setMerchantInfoImg SWIFT_WARN_UNUSED_RESULT;
- (UIViewController * _Nullable)setMerchantInfoScreen SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)setMerchantInfo SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9AP_PaySDK20PaymentOptionsDetail")
@interface PaymentOptionsDetail : NSObject
@property (nonatomic, strong) Methods * _Null_unspecified methods;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AP_PaySDK16TransQueryResult")
@interface TransQueryResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9AP_PaySDK17TransQueryResults")
@interface TransQueryResults : NSObject
@property (nonatomic, copy) NSArray<TransQueryResult *> * _Nullable detail;
@property (nonatomic, copy) NSString * _Nullable resultCode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end



@class UIView;

@interface UIButton (SWIFT_EXTENSION(AP_PaySDK))
- (void)setApplePayButtonWithBtnType:(enum ApplePayButtonType)btnType btnStyle:(enum ApplePayButtonStyle)btnStyle inView:(UIView * _Nonnull)inView;
@end






@interface UIColor (SWIFT_EXTENSION(AP_PaySDK))
- (nullable instancetype)initWithHex:(NSString * _Nonnull)hex;
@end










@interface UITextField (SWIFT_EXTENSION(AP_PaySDK))
- (BOOL)canPerformAction:(SEL _Nonnull)action withSender:(id _Nullable)sender SWIFT_WARN_UNUSED_RESULT;
@end



















typedef SWIFT_ENUM(NSInteger, payMethod, open) {
  payMethodALL = 0,
  payMethodCREDIT_CARD = 1,
  payMethodVISA = 2,
  payMethodMASTER_CARD = 3,
  payMethodJAPAN_CARD = 4,
  payMethodAMERICAN_CARD = 5,
  payMethodDINERS = 6,
  payMethodALIPAYHKAPP = 7,
  payMethodALIPAYCNAPP = 8,
  payMethodALIPAYAPP = 9,
  payMethodAPPLEPAY = 10,
  payMethodWECHATAPP = 11,
  payMethodTHREEDS2 = 12,
  payMethodCIMBCLICKS = 13,
};

typedef SWIFT_ENUM(NSInteger, payType, open) {
  payTypeNORMAL_PAYMENT = 0,
  payTypeHOLD_PAYMENT = 1,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#endif
