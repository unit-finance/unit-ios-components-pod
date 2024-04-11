//
//  UNPlaidService.h
//  UNComponents
//
//  Created by daniel fadlon on 03/04/2024.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class UNPlaidLinkTokenData;
@class UNPlaidLinkSuccessData;


@protocol UNPlaidServicing <NSObject>

- (void)startFlowOn:(UIViewController * _Nonnull)topViewController;

- (void)configureWithLinkToken:(UNPlaidLinkTokenData * _Nonnull)linkTokenData
           onLinkSuccess:(void (^_Nullable)(UNPlaidLinkSuccessData * _Nonnull data ))onLinkSuccess;

@end


@interface UNPlaidService : NSObject  <UNPlaidServicing>

+ (BOOL)isPlaidAvailable;

@end
