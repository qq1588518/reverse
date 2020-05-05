//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WBCrashLogAnalyzerDelegate, WBCrashLogModifierDelegate;

@interface WBRecordCrashLog : NSObject
{
    _Bool _isOpenCrashLog;
    id <WBCrashLogModifierDelegate> _crashLogModifierDelegate;
    id <WBCrashLogAnalyzerDelegate> _crashLogAnalyzerDelegate;
}

+ (id)shareInstance;
+ (void)load;
@property(nonatomic) _Bool isOpenCrashLog; // @synthesize isOpenCrashLog=_isOpenCrashLog;
@property(nonatomic) __weak id <WBCrashLogAnalyzerDelegate> crashLogAnalyzerDelegate; // @synthesize crashLogAnalyzerDelegate=_crashLogAnalyzerDelegate;
@property(nonatomic) __weak id <WBCrashLogModifierDelegate> crashLogModifierDelegate; // @synthesize crashLogModifierDelegate=_crashLogModifierDelegate;
- (void).cxx_destruct;
- (void)recordContinuouslyCrash;
- (void)dealCallStack:(id)arg1 index:(int)arg2 toSet:(id)arg3;
- (void)p_updateBacktraceToDictionary:(id)arg1 fromException:(id)arg2;
- (void)addStackAssociateInfo;
- (void)p_updateBacktraceToDictionary:(id)arg1 fromSigalCode:(int)arg2;
- (void)p_updateStackAssociateObjectToDictionary:(id)arg1;
- (id)p_serializeMessage:(id)arg1;
- (id)p_appendPreviousRecord;
- (void)p_unregisterUncaughtHandler;
- (void)p_registerUncaughtHandler;
- (void)p_unregisterCrashHandler;
- (void)p_registerCrashHandler;
- (_Bool)clearCrashLog;
- (void)unregisterHandler;
- (void)registerHandler;
- (void)dealloc;
- (id)init;

@end

