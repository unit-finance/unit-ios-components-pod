#
# Be sure to run `pod lib lint UnitComponents.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'UnitComponents'
  s.version          = '0.3.0'
  s.summary          = 'Unit Components SDK'
  s.description      = 'This SDK allows you to integrate Unit Components into your iOS app.'

  s.platform         = :ios
  s.homepage         = 'https://guides.unit.co/white-label-ui'
  s.license          = { :type => 'Mozilla', :file => 'LICENSE' }
  s.author           = { 'Alon Shprung' => 'alonshp1@gmail.com' }

  s.ios.deployment_target = '11.0'

  # Setting pod `BUILD_LIBRARY_FOR_DISTRIBUTION` to `YES`
  s.pod_target_xcconfig = { 'BUILD_LIBRARY_FOR_DISTRIBUTION' => 'YES' }

  s.source           = { :git => 'https://github.com/unit-finance/unit-ios-components-pod', :tag => s.version.to_s }
  s.ios.vendored_frameworks = 'UNComponents.xcframework'

  # Dependencies
  s.dependency 'RxSwift', '~> 6.5'
  s.dependency 'RxCocoa', '~> 6.5'
  s.dependency 'Alamofire', '~> 5.6'
end
