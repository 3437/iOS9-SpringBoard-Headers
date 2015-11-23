/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDDataBuffer.h>

@interface CFPDPurgeableBuffer : CFPDDataBuffer {

	CFDataRef handle;
	unsigned long long allocSize;
	BOOL safe;
	BOOL usedMalloc;

}
-(BOOL)purgable;
-(BOOL)beginAccessing;
-(void)endAccessing;
-(id)initWithFileDescriptor:(int)arg1 size:(unsigned long long)arg2 ;
-(void)dealloc;
-(unsigned long long)length;
-(void*)bytes;
-(id)initWithPropertyList:(void*)arg1 ;
@end
