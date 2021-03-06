/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWheelEvent : UIInternalEvent {
    int _recentScrollDistance;
    NSMutableArray *_recentScrollEvents;
    int lastSubtype;
}

- (BOOL)_canHaveVelocity;
- (void)_sendEventToResponder:(id)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (float)_wheelVelocity;
- (void)dealloc;
- (int)subtype;
- (int)type;

@end
