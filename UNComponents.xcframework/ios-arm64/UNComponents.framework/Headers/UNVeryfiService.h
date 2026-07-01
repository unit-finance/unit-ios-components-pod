//
//  UNVeryfiService.h
//  UNComponents
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class UNVeryfiCredentials;
@class UNVeryfiImage;


@protocol UNVeryfiDelegate <NSObject>
- (void)onVeryfiImages:(NSArray<UNVeryfiImage *> * _Nonnull)images;
- (void)onVeryfiError:(NSString * _Nonnull)error;
- (void)onVeryfiClose;
@end


@protocol UNVeryfiServicing <NSObject>

- (void)setCredentials:(UNVeryfiCredentials * _Nonnull)credentials;
- (UNVeryfiCredentials * _Nullable)credentials;
- (void)showCameraOn:(UIViewController * _Nonnull)topViewController
        withDelegate:(id<UNVeryfiDelegate> _Nonnull)delegate
            bankName:(NSString * _Nullable)bankName;

@end


@interface UNVeryfiService : NSObject <UNVeryfiServicing>

+ (BOOL)isVeryfiAvailable;

@end
