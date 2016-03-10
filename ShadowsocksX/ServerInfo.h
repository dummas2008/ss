//
//  ServerInfo.h
//  shadowsocks
//
//  Created by liangjiehui on 3/4/16.
//  Copyright © 2016 clowwindy. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ServerInfo : NSObject

- (id)initWithJSONData:(NSData *)data;
- (id)initWithJSONDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)JSONDictionary;
- (NSData *)JSONData;


@property (nonatomic, copy) NSString * server;

@property (nonatomic, assign) NSInteger serverPort;

@property (nonatomic, copy) NSString * remarks;

@property (nonatomic, copy) NSString * password;

@property (nonatomic, copy) NSString * method;

@property (nonatomic, copy) NSString * status;


@end