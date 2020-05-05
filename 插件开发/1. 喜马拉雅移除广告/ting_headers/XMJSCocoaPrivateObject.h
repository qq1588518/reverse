//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface XMJSCocoaPrivateObject : NSObject
{
    NSString *type;
    NSString *xml;
    NSString *methodName;
    NSString *structureName;
    NSString *declaredType;
    void *rawPointer;
    id object;
    struct objc_method *method;
    struct OpaqueJSValue *jsValue;
    struct OpaqueJSContext *ctx;
    unsigned int externalJSValueIndex;
    _Bool isAutoCall;
    _Bool retainObject;
    _Bool _isInited;
    NSDictionary *_variablesNameDict;
    NSDictionary *_structDict;
    Class _callingParentCls;
}

+ (id)description;
@property(retain) Class callingParentCls; // @synthesize callingParentCls=_callingParentCls;
@property _Bool isInited; // @synthesize isInited=_isInited;
@property(retain) NSDictionary *structDict; // @synthesize structDict=_structDict;
@property(retain) NSDictionary *variablesNameDict; // @synthesize variablesNameDict=_variablesNameDict;
@property _Bool isAutoCall; // @synthesize isAutoCall;
@property(copy) NSString *structureName; // @synthesize structureName;
@property(copy) NSString *methodName; // @synthesize methodName;
@property(copy) NSString *declaredType; // @synthesize declaredType;
@property(copy) NSString *xml; // @synthesize xml;
@property(copy) NSString *type; // @synthesize type;
- (_Bool)referenceObject:(id)arg1;
- (id)dereferencedObject;
- (id)description;
- (id)rawPointerEncoding;
- (void)setRawPointer:(void *)arg1 encoding:(id)arg2;
- (void *)rawPointer;
- (void)setExternalJSValueRef:(struct OpaqueJSValue *)arg1 ctx:(struct OpaqueJSContext *)arg2;
- (struct OpaqueJSContext *)ctx;
- (void)setCtx:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)jsValueRef;
- (void)setJSValueRef:(struct OpaqueJSValue *)arg1 ctx:(struct OpaqueJSContext *)arg2;
- (struct objc_method *)method;
- (void)setMethod:(struct objc_method *)arg1;
- (id)object;
- (_Bool)retainObject;
- (void)setObjectNoRetain:(id)arg1;
- (void)clearObject;
- (_Bool)checkObjectVariable:(id)arg1;
- (void)setOjectClassVariables:(Class)arg1;
- (void)setCallStackObj:(id)arg1;
- (void)setObject:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)cleanUp;
- (id)init;

@end

