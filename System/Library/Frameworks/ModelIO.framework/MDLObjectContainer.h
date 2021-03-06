/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLObjectContainerComponent.h>

@class NSArray, NSMutableArray, NSString;

@interface MDLObjectContainer : NSObject <MDLObjectContainerComponent> {

	NSMutableArray* _objects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSArray * objects; 
-(NSArray *)objects;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MD4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)addObject:(id)arg1 ;
@end

