//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (XMCommon)
+ (_Bool)swizzleClass:(Class)arg1 fromMethod:(SEL)arg2 toMethod:(SEL)arg3;
@property(nonatomic) _Bool xmad_isCacheData;
- (id)aktTagObjectWithKey:(id)arg1;
- (void)aktTagObject:(id)arg1 forKey:(id)arg2;
- (id)tagObjectDic;
@property(retain, nonatomic) id tagObj;
- (void)cancelDelayOperation;
- (void)delayWithTimeInterval:(double)arg1 andOperation:(CDUnknownBlockType)arg2;
@property(nonatomic) unsigned int eventStamp;
@property(readonly, nonatomic) unsigned int delayEventStamp;
- (void)delayEventStamp:(unsigned int)arg1;
- (float)floatMaybeForKey:(id)arg1;
- (double)doubleMaybeForKey:(id)arg1;
- (long long)longMaybeForKey:(id)arg1;
- (unsigned long long)unsignedLongLongMaybeForKey:(id)arg1;
- (long long)longLongMaybeForKey:(id)arg1;
- (long long)integerMaybeForKey:(id)arg1;
- (_Bool)boolMaybeForKey:(id)arg1;
- (id)numberMaybeForKey:(id)arg1;
- (id)aktUrlValue;
- (id)urlMaybeForKey:(id)arg1;
- (id)stringMaybeForKey:(id)arg1;
- (id)arrayMaybeForKey:(id)arg1;
- (id)dictionaryMaybeForKey:(id)arg1;
- (_Bool)aktBoolValue;
- (unsigned long long)aktUnsignedLongLongValue;
- (double)aktDoubleValue;
- (float)aktFloatValue;
- (double)aktCGFloatValue;
- (int)aktIntValue;
- (long long)aktIntegerValue;
- (id)aktNSNullValue;
- (id)aktNumberValue;
- (id)aktMutableStringValue;
- (id)aktStringValue;
- (id)aktMutableArrayValue;
- (id)aktArrayValue;
- (id)aktMutableDictionaryValue;
- (id)aktDictionaryValue;
- (id)nsNullValue;
- (id)numValue;
- (id)mutStrValue;
- (id)strValue;
- (id)mutArrValue;
- (id)arrValue;
- (id)mutDicValue;
- (id)dicValue;
@end

