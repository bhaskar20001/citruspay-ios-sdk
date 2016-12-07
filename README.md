# Getting Started  

![CitrusPay logo](http://www.citruspay.com/images/logo.png "CitrusPay") 

## CitrusPay iOS SDK's


## Introduction
The CitrusPay iOS SDK enables collection of payments via various payment methods.

The SDK is designed for [CitrusPay](http://www.citruspay.com) partners who are developing their own iOS apps. The SDK provides a native integration to accept payments within these apps that is easy to integration and provides a high performance, functional checkout experience.

##Features
CitrusPay iOS SDK broadly offers following features.

### Core SDK V 4.1.0 - CitrusPay.framework

+ Creating Citrus account for the user
+ Prepaid Payments
+ Payments via  credit/debit card (CC, DC) or netbanking payments (NB)
+ Saving Credit/Debit cards into user's account for easier future payments by abiding The Payment Card Industry Data Security Standard (PCI DSS)
+ Loading Money into users Citrus prepaid account for Prepaid facility
+ Withdraw the money back into User's bank account from the Prepaid account
+ On-Demand asset loading (Via CitrusGraphics library)

### CitrusGraphics SDK V 1.0 - CitrusGraphics.framework

+ A lightweight, pure-Swift library for downloading and caching images from the Citrus cloud
+ Dynamic Assets available to module for their assets requirements
+ SDK have both default & low resolution image for it which will be replaced by high resolution image once asset is downloaded and cached based on device specification

####The full SDK [ChangeLog](https://github.com/citruspay/citruspay-ios-sdk/wiki/ChangeLog) is also available

####Migration from 3.0.x to 3.1.x or higher
To migrate your integration from Citrus 3.0.x to 3.1.x or higher, please go through the [migration instructions](https://github.com/citruspay/citruspay-ios-sdk/wiki/5-Migration-From-V-3.0.x-to-V-3.1.x)

## Example Project

An example project is available via CocoaPods to try out and familiarize yourself with the Citrus Payments SDK. This project comes bundled with the SDK.

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Example App Requirements
+ Xcode 8 or higher.

###Prerequisites to integrating with Citrus PG
+ You need to enroll with Citrus as a merchant.
+ You need to host Bill generator on your server
+ You need to host Return Url Page on your server. (After the transaction is complete, Citrus posts a response to this URL.)
+ Make sure that you have obtained following parameters from your Citrus admin panel
+ Merchant Secret Key
+ Merchant Access Key
+ SignIn Key
+ SignIn Secret
+ SignUp Key
+ SignUp Secret

Note: Please ensure all the requirements mentioned above are met before PROCEEDing.

## Setup

##### Everything has a beginning. For using a framework, it's installation.

#### Using [CocoaPods](https://cocoapods.org/) (recommended)
CocoaPods is a dependency manager for Cocoa projects. You can install it with the following command:

~~~{.m}
$ gem install cocoapods
~~~

To integrate CitrusPay into your Xcode project using CocoaPods, specify it to a target in your Podfile:

~~~{.m}
source 'https://github.com/CocoaPods/Specs.git'
platform :ios, '8.0'
use_frameworks!

target 'MyApp' do
# your other pod
# ...
pod 'CitrusPay', '~> 4.1.0'
end
~~~

Then, run the following command:

~~~{.m}
$ pod install
~~~
+ Done!

You should open the {Project}.xcworkspace instead of the {Project}.xcodeproj after you installed anything from CocoaPods.

#### Including the SDK as a Git Submodule
If you do not wish to use CocoaPods then the secondary recommendation is to use a submodule. This allows you to easily track updates using standard Git commands. The first step to installation is to add the submodule to your project:
~~~{.m}
$ cd /path/to/MyApplication
# If this is a new project, initialize git...
$ git init
$ git submodule add git://github.com/citruspay/citruspay-ios-sdk.git
$ git submodule update --init --recursive
$ open citruspay-ios-sdk
~~~
+ Navigate to "Framework" folder & drag "core-sdk" folder into your existing Xcode project
+ Select the target and Navigate to `Build Phases` tab and expand the `Link Binary With Libraries` section
+ Click the + and `CitrusPay.framework` appropriate to your target's platform
+ Then navigate to `General` tab and expand the `Embedded Binaries` section
+ Click the + and `CitrusPay.framework` appropriate to your target's platform

#### Manual inclusion
If you’d like to download and maintain the SDK manually, please follow the steps listed below:
+ Clone it using following command
~~~{.m}
$ git clone --recursive https://github.com/citruspay/citruspay-ios-sdk.git
$ open citruspay-ios-sdk
~~~
+ Navigate to the Citrus "Framework" folder & drag the "core-sdk" folder into your existing Xcode project
+ In Xcode, go to your app's target settings. Under the `Build Phases` tab, expand the `Link Binary With Libraries` section.
+ Include the following framework:
- `CitrusPay.framework`
+ In Xcode, go to your app's target settings. Under the `General` tab, expand the `Embedded Binaries` section.
+ Include the following framework:
- `CitrusPay.framework`

#### Adding dependencies (required when including the SDK as a Submodule  including it manual)
##### JSONModel
+ Navigate to "Dependency" folder & drag the `JSONModel.xcodeproj` from sub-folder into your Xcode project (i.e using direct project dependency)
+ Select the target and Navigate to `Build Phases` tab and expand the `Link Binary With Libraries` section
+ Click the + and `JSONModel.framework` appropriate to your target's platform
+ Then navigate to `General` tab and expand the `Embedded Binaries` section
+ Click the + and `JSONModel.framework` appropriate to your target's platform

##### CitrusGraphics
+ Navigate to "Framework" folder & drag "graphics-sdk" folder into your existing Xcode project
+ Select the target and Navigate to `Build Phases` tab and expand the `Link Binary With Libraries` section
+ Click the + and `CitrusGraphics.framework` appropriate to your target's platform
+ Then navigate to `General` tab and expand the `Embedded Binaries` section
+ Click the + and `CitrusGraphics.framework` appropriate to your target's platform

##### Kingfisher
+ Navigate to "Dependency" folder & drag the `Kingfisher.xcodeproj` from sub-folder into your Xcode project (i.e using direct project dependency)
+ Select the target and Navigate to `Build Phases` tab and expand the `Link Binary With Libraries` section
+ Click the + and `Kingfisher.framework` appropriate to your target's platform
+ Then navigate to `General` tab and expand the `Embedded Binaries` section
+ Click the + and `Kingfisher.framework` appropriate to your target's platform

+ Link your app to SystemConfiguration.framework
+ Done!

#### Next

After installation, you must import the CitrusPay SDK in your project by adding this:

Swift
~~~{.m}
import CitrusPay
~~~

Objective-C
~~~{.m}
#import <CitrusPay/CitrusPay.h>
~~~

to the files in which you want to use this framework.

Once you prepared, continue to have a look at the Documentation to see how to use CitrusPay.

## Documentation
HTML documentation is hosted on our [CitrusPay Developer Guide](http://developers.citruspay.com/ios/iosReg.html).

Git Wiki documentation is available on the [Git Wiki Documentation](https://github.com/citruspay/citruspay-ios-sdk/wiki).

## SDK Organization

### CitrusPay.h
`CitrusPay.h` is the starting point for consuming the SDK, and contains the primary class you will interact with.
It exposes all the methods you can call to accept payments via the supported payment methods.
Detailed reference documentation is available on the reference page for the `CitrusPay` class.

### Data Models
All other classes in the SDK are data models that are used to exchange data between your app and the SDK.
Detailed reference documentation is available on the reference page for each class.

## Next Steps
Head over to the [Git Wiki Documentation](https://github.com/citruspay/citruspay-ios-sdk/wiki) to see all the API methods available.

See the the latest [releases page](https://github.com/citruspay/citruspay-ios-sdk/releases)

## Next Steps
Head over to the [Git Wiki Documentation](https://github.com/citruspay/citruspay-ios-sdk/wiki) to see all the API methods available.
When you are ready, look at the samples below to learn how to interact with the SDK.

## Other

## Future of CitrusPay

We want to keep CitrusPay lightweight. This framework will focus on providing a native integration to accept payments within these apps that is easy to integration and provides a high performance, functional checkout experience. This doesn’t mean the framework can’t be improved. CitrusPay is far from perfect, so necessary and useful updates will be made to make it better.

## License

CitrusPay is released under the MIT license. See LICENSE for details.
