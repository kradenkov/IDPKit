//
//  IDPKVONotification.h
//  iOS
//
//  Created by Oleksa Korin on 29/1/15.
//  Copyright (c) 2015 IDAP Group. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IDPKVONotification : NSObject
@property (nonatomic, weak, readonly)   id<NSObject>        object;
@property (nonatomic, readonly)         NSString            *keyPath;
@property (nonatomic, readonly)         NSKeyValueChange    changeType;
@property (nonatomic, readonly)         id<NSObject>        newValue;
@property (nonatomic, readonly)         id<NSObject>        oldValue;

+ (instancetype)notificationWithObject:(id<NSObject>)observedObject
                               keyPath:(NSString *)keyPath
                     changesDictionary:(NSDictionary *)changesDictionary;

- (instancetype)initWithObject:(id<NSObject>)observedObject
                       keyPath:(NSString *)keyPath
             changesDictionary:(NSDictionary *)changesDictionary;

- (BOOL)isEqualToKVONotification:(IDPKVONotification *)notification;

@end
