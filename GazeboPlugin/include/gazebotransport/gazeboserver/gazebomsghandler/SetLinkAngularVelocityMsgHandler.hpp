/* Copyright 2020 The MathWorks, Inc. */
#ifndef GAZEBOCOSIM_SET_LINK_ANGULAR_VELOCITY_MSG_HANDLER_HPP
#define GAZEBOCOSIM_SET_LINK_ANGULAR_VELOCITY_MSG_HANDLER_HPP

#include "gazebotransport/gazeboserver/MsgHandler.hpp"
#include "gazebotransport/gazeboserver/gazebomsghandler/GazeboUtils.hpp"
#include "gazebotransport/gazeboserver/gazeboapply/GazeboApplyCommander.hpp"
#include "gazebotransport/gazeboserver/gazebomsghandler/LinkPtrStorage.hpp"
#include "gazebotransport/gazeboserver/GazeboWorldInterface.hpp"
#include "gazebotransport/gazeboserver/GazeboWorldImpl.hpp"

namespace robotics {
namespace gazebotransport {
class SetLinkAngularVelocityMsgHandler : public MsgHandler {
  public:
    /// Constructor
    /// This class initiated message handler to exchange SetLinkAngularVelocity message
    /*
      @param ptr                                  Pointer of Gazebo World Interface
      @param commander                            Reference to the Gazebo apply commander instance
      */
    explicit SetLinkAngularVelocityMsgHandler(
        gazebo::physics::WorldPtr ptr,
        robotics::gazebotransport::GazeboApplyCommander& commander);
    /// Destructor
    ~SetLinkAngularVelocityMsgHandler();
    /**
      @param msgContent      Packet message

      Handles Packet message & construct new Packet message with proper fields
          (Error/ reply content). Based on input message, set angular velocity of a link.
      Further, serializes Packet ( reply message) into string and returns.
      */
    std::string handleMessage(
        mw::internal::robotics::gazebotransport::Packet const& msgContent) override;
    /// Returns Message ID
    uint32_t getAcceptID() const override;

  private:
    /// Gazebo world pointer
    gazebo::physics::WorldPtr m_ptr;

    /// Gazebo Plugin message repository reference
    robotics::gazebotransport::GazeboApplyCommander& m_commander;
};
} // namespace gazebotransport
} // namespace robotics
#endif
