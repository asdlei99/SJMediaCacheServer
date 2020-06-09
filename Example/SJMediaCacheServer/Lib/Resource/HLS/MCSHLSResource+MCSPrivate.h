//
//  MCSHLSResource+MCSPrivate.h
//  SJMediaCacheServer_Example
//
//  Created by BlueDancer on 2020/6/9.
//  Copyright © 2020 changsanjiang@gmail.com. All rights reserved.
//

#import "MCSHLSResource.h"
@class MCSResourcePartialContent;

NS_ASSUME_NONNULL_BEGIN

@interface MCSHLSResource (MCSPrivate)

@property (nonatomic) NSInteger id;
@property (nonatomic, copy, readonly, nullable) NSString *server;
@property (nonatomic, copy, readonly, nullable) NSString *name;

@property (nonatomic, strong, readonly, nullable) NSMutableArray<MCSResourcePartialContent *> *contents;
@end

NS_ASSUME_NONNULL_END