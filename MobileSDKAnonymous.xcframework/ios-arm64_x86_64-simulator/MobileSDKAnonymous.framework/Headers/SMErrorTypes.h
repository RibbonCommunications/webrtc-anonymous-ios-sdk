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
* SMErrorTypes.h
*
* @version: 6.35.0
*
*/

/**
 * @brief enum class for Error Types
 *
 * @since 2.0.0
 */
typedef NS_ENUM(NSInteger, SMErrorTypes) {
    /** Request is succeeded in partial manner */
    PARTIAL_SUCCESS NS_SWIFT_NAME(partialSuccess),
    
    /** System failure */
    ERROR_SYSTEM NS_SWIFT_NAME(system),
    
    /** Internal server error occurred */
    ERROR_INTERNAL_SERVER NS_SWIFT_NAME(internalServer),
    
    /** Network failures */
    ERROR_NETWORK NS_SWIFT_NAME(network),
    
    /** Server failures */
    ERROR_SERVER NS_SWIFT_NAME(server),
    
    /** Https security failure */
    ERROR_SECURITY NS_SWIFT_NAME(security),
    
    /** Authentication failure */
    ERROR_AUTHENTICATION NS_SWIFT_NAME(authentication),
    
    /** Authorization failure */
    ERROR_AUTHORIZATION NS_SWIFT_NAME(authorization),
    
    /** Error on defined Notification Proxy */
    ERROR_PROXY NS_SWIFT_NAME(proxy),
    
    /** Localization not found or malformed */
    ERROR_LOCALIZATION NS_SWIFT_NAME(localization),
    
    /** Input structure is not validated */
    ERROR_VALIDATION NS_SWIFT_NAME(validation),
    
    /** Input parameter is null */
    ERROR_NULL_PARAMETER NS_SWIFT_NAME(nullParameter),
    
    /** Received notification message can not be parsed */
    ERROR_MESSAGE_PARSE NS_SWIFT_NAME(messageParse),
    
    /** Failure on WebRTC library */
    ERROR_WEBRTC NS_SWIFT_NAME(webRTC),
    
    /** Method can not be performed */
    ERROR_METHOD_NOT_ALLOWED NS_SWIFT_NAME(methodNotAllowed),
    
    /** Microphone access is not available */
    ERROR_MICROPHONE_ACCESS NS_SWIFT_NAME(microphoneAccess),
    
    /** Camera access is not available */
    ERROR_CAMERA_ACCESS NS_SWIFT_NAME(cameraAccess),
    
    /** Remote server busy error */
    ERROR_REMOTE_SERVER_BUSY NS_SWIFT_NAME(remoteServerBusy),
    
    /** Session failed */
    ERROR_SESSION_FAILED NS_SWIFT_NAME(sessionFailed),
    
    /** Another local offer is in progress */
    ERROR_LOCAL_OFFER_IN_PROGRESS NS_SWIFT_NAME(localOfferInProgress),
    
    /** Audio Router setActiveAudioRoute error */
    ERROR_AUDIO_ROUTE NS_SWIFT_NAME(audioRoute),
    
    /** Method called in invalid state */
    ERROR_INVALID_STATE NS_SWIFT_NAME(invalidState),
    
    /** Registration token is expired or invalid */
    ERROR_TOKEN_EXPIRED_OR_INVALID NS_SWIFT_NAME(tokenExpiredOrInvalid),
    
    /** Websocket could not be connected */
    ERROR_WEBSOCKET_TIMEOUT NS_SWIFT_NAME(websocketTimeout),
    
    /** General HTTP Errors*/
    ERROR_HTTP NS_SWIFT_NAME(http),
    
    /** Request pending */
    ERROR_REQUEST_PENDING NS_SWIFT_NAME(requestPending) = 491,
    
    /**
     * WebSocket failure.
     */
    WEBSOCKET_FAILURE NS_SWIFT_NAME(websocketFailure) = 4020,

    /**
     * Registration expired.
     */
    REGISTRATION_EXPIRED NS_SWIFT_NAME(registrationExpired) = 4021,

    /**
     * Notification channel failure.
     */
    NOTIFICATION_CHANNEL_FAILURE NS_SWIFT_NAME(notificationChannelFailure) = 4022
};
