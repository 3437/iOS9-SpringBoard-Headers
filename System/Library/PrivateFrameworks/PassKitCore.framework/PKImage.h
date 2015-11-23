/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSData;

@interface PKImage : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _shouldTile;
	BOOL _shouldStretch;
	PKEdgeInsets _capInsets;
	NSData* _imageData;
	CGImageRef _imageRef;
	double _scale;
	long long _orientation;

}

@property (nonatomic,readonly) NSData * imageData;                  //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) CGImageRef imageRef;                 //@synthesize imageRef=_imageRef - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) long long orientation;               //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) double scale;                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) BOOL tiles; 
@property (nonatomic,readonly) BOOL stretches; 
@property (nonatomic,readonly) PKEdgeInsets capInsets; 
+(BOOL)supportsSecureCoding;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)hashOfImageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)URLForImageNamed:(id)arg1 inBundle:(id)arg2 scale:(double*)arg3 preferredScreenScale:(double)arg4 suffix:(id)arg5 ;
+(id)newImageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)newImageNamed:(id)arg1 inBundle:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
+(id)URLForImageNamed:(id)arg1 inBundle:(id)arg2 scale:(double*)arg3 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
+(id)passesImageNamed:(id)arg1 ;
-(id)resizedImageToCover:(CGSize)arg1 ;
-(BOOL)tiles;
-(BOOL)stretches;
-(NSData *)imageData;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)orientation;
-(double)scale;
-(PKEdgeInsets)capInsets;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
-(BOOL)_isTiledWhenStretchedToSize:(CGSize)arg1 ;
-(id)initWithData:(id)arg1 scale:(double)arg2 ;
-(CGImageRef)imageRef;
-(id)imageHash;
-(void)_queue_createImageRefIfNecessary;
-(id)resizableImageByTilingWithCapInsets:(PKEdgeInsets)arg1 ;
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 withBlendMode:(int)arg3 alpha:(double)arg4 ;
-(CGSize)downscaleSizeMatchingScale:(double)arg1 ;
-(void)preheatBitmapData;
-(id)blurredImageWithRadius:(unsigned long long)arg1 constraints:(id)arg2 ;
-(id)resizedImageWithConstraints:(id)arg1 ;
-(id)resizableImageByStretchingWithCapInsets:(PKEdgeInsets)arg1 ;
-(id)resizableImageByTilingCenterPixel;
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
@end
