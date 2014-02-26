//
//  TSFilterDescriptor.h
//  TSAssetsPickerController
//
//  Created by Tomasz Szulc on 25.02.2014.
//  Copyright (c) 2014 Tomasz Szulc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ALAssetsFilter;
@class TSDescriptor;

typedef enum {
    FilterTypePhoto,
    FilterTypeVideo,
    FilterTypeAll
} FilterType;

@interface TSFilter : NSObject
+ (instancetype)filterWithType:(FilterType)type descriptor:(TSDescriptor *)descriptor;

- (BOOL)isSizeMatchToDimensionFilters:(CGSize)size;

@end

@interface TSFilter (AssetsLibrary)
@property (nonatomic, readonly) ALAssetsFilter *assetsFilter;
@end