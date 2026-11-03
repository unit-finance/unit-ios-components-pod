//
//  UNPushProvisioningServiceBridge.h
//  UNComponents
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Error domain for failures the bridge raises itself (as opposed to errors forwarded
/// from the SDK). The Swift service translates these into typed `UNComponentsError`s.
extern NSString * const UNPushProvisioningErrorDomain;

typedef NS_ENUM(NSInteger, UNPushProvisioningErrorCode) {
    /// The push-provisioning stack could not be reached (not linked, or class/selector missing).
    UNPushProvisioningErrorUnavailable = 1,
};

@interface UNPushProvisioningServiceBridge : NSObject

/// Returns the failure, or nil when Visa was configured.
+ (nullable NSError *)configureWithEnvironment:(NSInteger)environment
                                     visaAppId:(NSString *)visaAppId;

+ (void)walletStatusWithCardId:(NSString *)cardId
                    completion:(void (^)(NSInteger status, NSError * _Nullable error))completion;

+ (void)startCardProvisioningWithCardId:(NSString *)cardId
                             completion:(void (^)(NSInteger status, NSError * _Nullable error))completion;

@end

NS_ASSUME_NONNULL_END
