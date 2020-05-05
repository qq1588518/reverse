//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSDictionary, NSString;

@interface WBEditMenuItem : WBModelObject
{
    NSString *_title;
    NSDictionary *_actionLog;
    NSString *_scheme;
    NSString *_disablePropmt;
}

@property(retain, nonatomic) NSString *disablePropmt; // @synthesize disablePropmt=_disablePropmt;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSDictionary *actionLog; // @synthesize actionLog=_actionLog;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)menuDictInfo;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;

@end

