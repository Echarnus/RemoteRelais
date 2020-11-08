using Microsoft.AspNetCore.SignalR;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace RemoteRelais.Web.Hub
{
    public class RelaisHub : Microsoft.AspNetCore.SignalR.Hub
    {
        public async Task SendRelaisToggle(bool relaisState)
        {
            await Clients.All.SendAsync("RelaisToggled", relaisState);
        }
    }
}
