using System;
using System.Collections.Generic;
using System.Text;
using System.ComponentModel.DataAnnotations;

namespace DataBase.Entities
{
    class UserEntities
    {
       [Required]
       public int Id { get; set; }
        
       [MaxLength(50)]
       public string UserName{ get; set; }
       [MaxLength(50)]
       public string FirstName { get; set; }
       [MaxLength(50)]
        public string SecondName { get; set; }
       
        public int Age { get; set; }


        public int Role { get; set; }
       
        [EmailAddress]
        public string Email { get; set; }
    }
}
