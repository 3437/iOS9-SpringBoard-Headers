/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileSpotlightIndex.framework/MobileSpotlightIndex
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MobileSpotlightIndex/MobileSpotlightIndex-Structs.h>
@interface _MDPlistBytes : NSObject {

	unsigned long long _byteVector;
	unsigned _byteVectorCnt;
	unsigned _byteVectorCapacity;
	unsigned _isBad : 16;
	unsigned _shouldDeallocate : 1;
	unsigned _isMutable : 1;
	unsigned _isMutating : 1;
	unsigned _didFinalize : 1;
	unsigned _useMalloc : 1;
	CFArrayRef _rleQueue;
	unsigned long long* _wrapperPtr;
	unsigned long long* _uidVector;
	int _uidCount;
	int _uidCapacity;

}
+(MDPlistBytesRef)createArrayPlistBytesUsingBlock:(/*^block*/id)arg1 ;
+(void)enumerateObjectsFromPlistBytes:(char*)arg1 count:(unsigned)arg2 shouldDeallocate:(BOOL)arg3 usingBlock:(/*^block*/id)arg4 ;
+(MDPlistBytesRef)nullObjectPlistBytes;
+(MDPlistBytesRef)emptyDictionaryPlistBytes;
+(MDPlistBytesRef)createPlistBytes:(id)arg1 ;
+(MDPlistBytesRef)emptyArrayPlistBytes;
+(MDPlistBytesRef)createDictionaryPlistBytesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)_cfTypeID;
-(void)dealloc;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)createDispatchData;
-(CFDataRef)copyData;
-(id)initWithByteVector:(char*)arg1 count:(unsigned)arg2 shouldDeallocate:(BOOL)arg3 ;
-(CFDataRef)copyDataWithBytesNoCopy;
-(void)finalize;
@end
