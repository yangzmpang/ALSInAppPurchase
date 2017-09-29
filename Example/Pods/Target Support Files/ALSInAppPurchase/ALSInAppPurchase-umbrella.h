#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "ALSInAppPurchase.h"
#import "ALSRMStore.h"
#import "DelegateToBlock.h"
#import "ALSRMAppReceipt.h"
#import "ALSRMStoreAppReceiptVerifier.h"
#import "ALSRMStoreKeychainPersistence.h"
#import "ALSRMStoreTransaction.h"
#import "ALSRMStoreTransactionReceiptVerifier.h"
#import "ALSRMStoreUserDefaultsPersistence.h"
#import "WechatAuthSDK.h"
#import "WXApi.h"
#import "WXApiObject.h"

FOUNDATION_EXPORT double ALSInAppPurchaseVersionNumber;
FOUNDATION_EXPORT const unsigned char ALSInAppPurchaseVersionString[];

