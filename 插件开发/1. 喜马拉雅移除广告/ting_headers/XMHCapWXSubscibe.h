//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMHModel.h"

@class NSDictionary, NSString;

@interface XMHCapWXSubscibe : XMHModel
{
    NSString *_scene;
    NSString *_templateId;
    NSString *_url;
    NSString *_title;
    NSDictionary *_content;
}

@property(copy, nonatomic) NSDictionary *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;

@end

