//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

@class JSEvent;

@interface WCPayJSApiAuthenticationControlLogic : WCPayControlLogic
{
    JSEvent *m_jsEvent;
    int m_enWCPayCheckAuthorityScene;
    int m_enWCPayCheckOpenWCPayViewAuthorityScene;
}

- (void).cxx_destruct;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)stopLogic;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1 Scene:(int)arg2 WithOpenViewScene:(int)arg3;
- (id)initWithJSEvent:(id)arg1 Scene:(int)arg2;

@end
