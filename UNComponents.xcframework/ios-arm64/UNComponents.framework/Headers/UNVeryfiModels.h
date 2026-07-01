//
//  UNVeryfiModels.h
//  UNComponents
//

#import <Foundation/Foundation.h>


@interface UNVeryfiCredentials : NSObject

@property (nonatomic, strong) NSString * _Nonnull clientId;
@property (nonatomic, strong) NSString * _Nonnull userName;
@property (nonatomic, strong) NSString * _Nonnull apiKey;
@property (nonatomic, strong) NSString * _Nonnull url;

- (instancetype _Nonnull)initWithClientId:(NSString * _Nonnull)clientId
                                 userName:(NSString * _Nonnull)userName
                                   apiKey:(NSString * _Nonnull)apiKey
                                      url:(NSString * _Nonnull)url;

@end


@interface UNVeryfiImage : NSObject

@property (nonatomic, strong) NSString * _Nonnull base64Img;
@property (nonatomic, assign) BOOL isFront;

- (instancetype _Nonnull)initWithBase64Img:(NSString * _Nonnull)base64Img
                                   isFront:(BOOL)isFront;

@end
