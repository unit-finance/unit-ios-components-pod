//
//  UNPlaidLink.h
//  UNComponents
//
//  Created by daniel fadlon on 03/04/2024.
//

#import <Foundation/Foundation.h>

@interface UNPlaidLinkTokenAttributes : NSObject

@property (nonatomic, strong) NSString * _Nonnull linkToken;
@property (nonatomic, strong) NSString * _Nonnull expiration;

- (instancetype _Nonnull)initWithToken:(NSString *_Nonnull)token expiration:(NSString *_Nonnull)expiration;

@end


@interface UNPlaidLinkTokenData : NSObject

@property (nonatomic, strong) NSString * _Nonnull type;
@property (nonatomic, strong) UNPlaidLinkTokenAttributes * _Nonnull attributes;

- (instancetype _Nonnull)initWithType:(NSString *_Nonnull)type attributes:(UNPlaidLinkTokenAttributes *_Nonnull)attributes;

@end


@interface UNPlaidLinkSuccessData : NSObject

@property (nonatomic, strong) NSString * _Nonnull publicToken;
@property (nonatomic, strong) NSString * _Nonnull metadata;

- (instancetype _Nonnull)initWithPublicToken:(NSString * _Nonnull)publicToken metadata:(NSString * _Nonnull)metadata;
@end
