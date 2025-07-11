/*
* COPYRIGHT © 2024 RIBBON COMMUNICATIONS OPERATING COMPANY, INC. ALL RIGHTS RESERVED.
* This publication and the information contained herein is the property of Ribbon
* and may not be copied, reproduced or distributed in any form or by any means without
* the prior written permission of Ribbon.
*
* THIS PUBLICATION IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
* PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
* FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
* OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE PUBLICATION OR ITS USE.
*
* SMCallServiceDelegate.h
*
* @version: 6.35.0
*
*/

#import <Foundation/Foundation.h>
#import "SMOutgoingCallDelegate.h"

@class SMMobileError;
@class SMUriAddress;
@protocol SMCallApplicationDelegate;

/**
 * @brief Call service methods
 * @since 2.0.0
 **/
@protocol SMCallServiceDelegate <NSObject>

/** If YES, MobileSDK will not initialize the audio unit automatically when an
 *  audio track is ready for playout or recording. Instead, applications should
 *  call setVoipAudioEnabled. If NO, MobileSDK will initialize the audio unit
 *  as soon as an audio track is ready for playout or recording.
 *  Default value is NO.
 *
 * @since 4.3.1
 */
@property(nonatomic) BOOL useManualAudio;

/** This property is only effective if useManualAudio is YES.
 *  Represents permission for MobileSDK to initialize the VoIP audio unit.
 *  When set to NO, if the VoIP audio unit used by MobileSDK is active, it will be
 *  stopped and uninitialized. This will stop incoming and outgoing audio.
 *  When set to YES, MobileSDK will initialize and start the audio unit when it is
 *  needed (e.g. due to establishing an audio connection).
 *  Default value is NO.
 *
 * @since 4.3.1
 */
@property(nonatomic, getter=isVoipAudioEnabled) BOOL voipAudioEnabled;

/**
 * @brief Set the event handler CallApplicationDelegate for the CallService.
 * @param app CallApplicationDelegate
 * @since 2.0.0
 */

-(void) setCallApplication :(nonnull id <SMCallApplicationDelegate>) app;

#pragma mark Regular Anonymous Call Create APIs

/**
 * @brief This method is to create outgoing/mobile originated calls
 *
 * @param app delegete of application to return callbacks for call
 * @param terminator address of callee
 * @param completion block
 * @return call to establish call
 * @since 3.1.4
 */
- (void) createOutGoingCall:(nonnull id <SMCallApplicationDelegate>)app
              andTerminator:(nonnull SMUriAddress *)terminator
                 completion:(nonnull void (^)(id<SMOutgoingCallDelegate> _Nullable call, SMMobileError * _Nullable error))callHandler;

/**
 * @brief This method creates anonymous calls
 *
 * @param app delegete of application to return callbacks for call
 * @param account address defining the anonymous account
 * @param originator address defining the source of the call
 * @param terminator address defining the destination of the call
 * @param completion block
 * @return call to establish call
 * @since 4.5.9
 */
- (void)createOutGoingCall:(nonnull id <SMCallApplicationDelegate>)app
               withAccount:(nonnull SMUriAddress *)account
             andOriginator:(nonnull SMUriAddress *)originator
             andTerminator:(nonnull SMUriAddress *)terminator
                completion:(nonnull void (^)(id<SMOutgoingCallDelegate> _Nullable call, SMMobileError * _Nullable error))callHandler;

#pragma mark Time-Limited Token Based Anonymous Call Create API

/**
 * @brief This method creates anonymous calls with time-limited token
 *
 * @param app delegete of application to return callbacks for call
 * @param accountToken encrypted address defining the anonymous account
 * @param originatorToken encrypted address defining the source of the call
 * @param terminatorToken encrypted address defining the destination of the call
 * @param tokenRealm the realm used to encrypt the tokens
 * @param completion block
 * @return call to establish call
 * @since 4.5.9
 */
- (void)createOutGoingCall:(nonnull id <SMCallApplicationDelegate>)app
          withAccountToken:(nonnull NSString *)accountToken
        andOriginatorToken:(nonnull NSString *)originatorToken
        andTerminatorToken:(nonnull NSString *)terminatorToken
             andTokenRealm:(nonnull NSString *)tokenRealm
                completion:(nonnull void (^)(id<SMOutgoingCallDelegate> _Nullable call, SMMobileError * _Nullable error))callHandler;


/**
 * @brief Rotates camera to specified orientation
 *
 * @param orientation AVCaptureVideoOrientation value that will be used for camera orientation
 * @since 2.0.0
 */
-(void) rotateCameraOrientationToPosition:(AVCaptureVideoOrientation) orientation;

/**
 * Returns the active call objects.
 *
 * @return Immutable call list
 * @since 4.0
 */
- (nonnull NSArray<id<SMCallDelegate>> *) getActiveCalls;

@end
